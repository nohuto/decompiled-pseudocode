/*
 * XREFs of PpProfileIncludeInHardwareProfileTransition @ 0x14068DDE8
 * Callers:
 *     PipProcessStartPhase1 @ 0x14045E75C (PipProcessStartPhase1.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1404D628C (PnpIrpQueryID.c)
 */

void __fastcall PpProfileIncludeInHardwareProfileTransition(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r14
  __int64 v10; // rax
  unsigned __int8 v11; // bl
  signed __int32 v12; // eax
  PVOID P; // [rsp+50h] [rbp+18h] BYREF

  if ( a2 == 2 )
  {
    v6 = (_QWORD *)(a1 + 576);
    if ( (_QWORD *)*v6 == v6 )
    {
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
      v10 = PiProfileDeviceListHead;
      *v6 = PiProfileDeviceListHead;
      v6[1] = &PiProfileDeviceListHead;
      if ( *(__int64 **)(v10 + 8) != &PiProfileDeviceListHead )
        __fastfail(3u);
      *(_QWORD *)(v10 + 8) = v6;
      ++PiProfileDeviceCount;
      qword_1403493C8 = 0LL;
      PiProfileDeviceListHead = (__int64)v6;
      v11 = dword_1403493F0;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)&PiProfileDeviceListLock, 1, 0);
      if ( v12 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PiProfileDeviceListLock, v12);
      __writecr8(v11);
      KeAbPostRelease((ULONG_PTR)&PiProfileDeviceListLock);
    }
    if ( (int)PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 4, (ULONG_PTR *)&P) >= 0 && P )
      ExFreePoolWithTag(P, 0);
  }
  _InterlockedAdd(&PiProfileDevicesInTransition, 1u);
  *(_DWORD *)(a1 + 568) = a2;
}
