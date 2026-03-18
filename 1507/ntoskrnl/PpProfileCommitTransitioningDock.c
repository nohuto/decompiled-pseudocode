/*
 * XREFs of PpProfileCommitTransitioningDock @ 0x14068DC08
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x1405501C8 (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1404D628C (PnpIrpQueryID.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14067CC00 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x14068D5C0 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14068D6F0 (PnpProfileUpdateHardwareProfile.c)
 */

LONG __fastcall PpProfileCommitTransitioningDock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebp
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rsi
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  unsigned __int8 v13; // si
  signed __int32 v14; // eax
  LONG result; // eax
  char v16; // [rsp+48h] [rbp+10h] BYREF
  ULONG_PTR v17; // [rsp+50h] [rbp+18h] BYREF

  v4 = a2;
  if ( (_DWORD)a2 == 3 )
  {
    v6 = *(void **)(a1 + 592);
    if ( v6 )
    {
      ExFreePoolWithTag(v6, 0);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    v7 = KeAbPreAcquire((ULONG_PTR)&PiProfileDeviceListLock, 0LL, 0LL, a4);
    v8 = v7;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PiProfileDeviceListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PiProfileDeviceListLock, v7);
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    qword_1403493C8 = (__int64)KeGetCurrentThread();
    dword_1403493F0 = CurrentIrql;
    v10 = (_QWORD *)(a1 + 576);
    v11 = *(_QWORD *)(a1 + 576);
    v12 = *(_QWORD **)(a1 + 584);
    if ( *(_QWORD *)(v11 + 8) != a1 + 576 || (_QWORD *)*v12 != v10 )
      __fastfail(3u);
    *v12 = v11;
    *(_QWORD *)(v11 + 8) = v12;
    *(_QWORD *)(a1 + 584) = a1 + 576;
    *v10 = v10;
    --PiProfileDeviceCount;
    qword_1403493C8 = 0LL;
    v13 = dword_1403493F0;
    v14 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
    if ( v14 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v14);
    __writecr8(v13);
    KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
  }
  else if ( !*(_QWORD *)(a1 + 592) )
  {
    PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 4, &v17);
    *(_QWORD *)(a1 + 592) = v17;
  }
  *(_DWORD *)(a1 + 568) = 1;
  result = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v16 = 0;
    if ( (v4 != 2 || *(_QWORD *)(a1 + 592))
      && (int)PnpProfileUpdateHardwareProfile((__int64)&v16, a2, a3, a4) >= 0
      && v16 )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_COMPLETE, 2, 0LL, 0LL);
      PiProfileUpdateDeviceTree();
    }
    else if ( PiProfileChangeCancelRequired )
    {
      PnpRequestHwProfileChangeNotification(&GUID_HWPROFILE_CHANGE_CANCELLED, 2, 0LL, 0LL);
    }
    return KeReleaseSemaphore(&PiProfileChangeSemaphore, 0, 1, 0);
  }
  return result;
}
