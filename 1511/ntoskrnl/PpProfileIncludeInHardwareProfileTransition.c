/*
 * XREFs of PpProfileIncludeInHardwareProfileTransition @ 0x14060E128
 * Callers:
 *     PipProcessStartPhase1 @ 0x1404F29BC (PipProcessStartPhase1.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PnpIrpQueryID @ 0x1404EE3FC (PnpIrpQueryID.c)
 */

void __fastcall PpProfileIncludeInHardwareProfileTransition(__int64 a1, int a2)
{
  _QWORD *v4; // rbx
  __int64 v5; // rax
  PVOID P; // [rsp+40h] [rbp+18h] BYREF

  if ( a2 == 2 )
  {
    v4 = (_QWORD *)(a1 + 576);
    if ( (_QWORD *)*v4 == v4 )
    {
      ExAcquireFastMutex(&PiProfileDeviceListLock);
      v5 = PiProfileDeviceListHead;
      *v4 = PiProfileDeviceListHead;
      v4[1] = &PiProfileDeviceListHead;
      if ( *(__int64 **)(v5 + 8) != &PiProfileDeviceListHead )
        __fastfail(3u);
      *(_QWORD *)(v5 + 8) = v4;
      ++PiProfileDeviceCount;
      PiProfileDeviceListHead = (__int64)v4;
      KeReleaseGuardedMutex(&PiProfileDeviceListLock);
    }
    if ( (int)PnpIrpQueryID(*(struct _DEVICE_OBJECT **)(a1 + 32), 4, (ULONG_PTR *)&P) >= 0 && P )
      ExFreePoolWithTag(P, 0);
  }
  _InterlockedIncrement(&PiProfileDevicesInTransition);
  *(_DWORD *)(a1 + 568) = a2;
}
