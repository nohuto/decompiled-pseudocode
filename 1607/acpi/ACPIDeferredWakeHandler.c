/*
 * XREFs of ACPIDeferredWakeHandler @ 0x1C004C0CC
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004140 (ACPIDispatchIrp.c)
 * Callees:
 *     ACPIBuildRunMethodRequest @ 0x1C00067C0 (ACPIBuildRunMethodRequest.c)
 */

__int64 __fastcall ACPIDeferredWakeHandler(__int64 a1, __int64 a2)
{
  KIRQL v4; // bl

  *(_BYTE *)(*(_QWORD *)(a2 + 184) + 3LL) |= 1u;
  _InterlockedIncrement((volatile signed __int32 *)(a1 + 680));
  *(_DWORD *)(a2 + 48) = 0;
  _InterlockedOr64((volatile signed __int64 *)(a1 + 912), 0x2000uLL);
  v4 = KeAcquireSpinLockRaiseToDpc(&AcpiDeviceTreeLock);
  ACPIBuildRunMethodRequest(
    a1,
    (void (__fastcall *)(__int64, __int64, _QWORD))ACPIDeferredWakeCompletion,
    a2,
    1465077855,
    13,
    1);
  KeReleaseSpinLock(&AcpiDeviceTreeLock, v4);
  return 259LL;
}
