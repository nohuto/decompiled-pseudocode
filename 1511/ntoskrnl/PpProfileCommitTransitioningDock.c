/*
 * XREFs of PpProfileCommitTransitioningDock @ 0x14060DFE0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase2 @ 0x1404F1A4C (PipProcessStartPhase2.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1404EE3FC (PnpIrpQueryID.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140601D58 (PnpRequestHwProfileChangeNotification.c)
 *     PiProfileUpdateDeviceTree @ 0x14060DB84 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14060DCB4 (PnpProfileUpdateHardwareProfile.c)
 */

LONG __fastcall PpProfileCommitTransitioningDock(__int64 a1, int a2)
{
  void *v4; // rcx
  _QWORD *v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  LONG result; // eax
  char v9; // [rsp+38h] [rbp+10h] BYREF
  ULONG_PTR v10; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 3 )
  {
    v4 = *(void **)(a1 + 592);
    if ( v4 )
    {
      ExFreePoolWithTag(v4, 0);
      *(_QWORD *)(a1 + 592) = 0LL;
    }
    ExAcquireFastMutex(&PiProfileDeviceListLock);
    v5 = (_QWORD *)(a1 + 576);
    v6 = *(_QWORD *)(a1 + 576);
    v7 = *(_QWORD **)(a1 + 584);
    if ( *(_QWORD *)(v6 + 8) != a1 + 576 || (_QWORD *)*v7 != v5 )
      __fastfail(3u);
    *v7 = v6;
    *(_QWORD *)(v6 + 8) = v7;
    *(_QWORD *)(a1 + 584) = a1 + 576;
    *v5 = v5;
    --PiProfileDeviceCount;
    KeReleaseGuardedMutex(&PiProfileDeviceListLock);
  }
  else if ( !*(_QWORD *)(a1 + 592) )
  {
    PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 4, &v10);
    *(_QWORD *)(a1 + 592) = v10;
  }
  *(_DWORD *)(a1 + 568) = 1;
  result = _InterlockedExchangeAdd(&PiProfileDevicesInTransition, 0xFFFFFFFF);
  if ( result == 1 )
  {
    v9 = 0;
    if ( (a2 != 2 || *(_QWORD *)(a1 + 592)) && (int)PnpProfileUpdateHardwareProfile((__int64)&v9) >= 0 && v9 )
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
