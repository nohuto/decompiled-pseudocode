/*
 * XREFs of StorPortInitializeVrfy @ 0x1C0058770
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall StorPortInitializeVrfy(
        PDRIVER_OBJECT DriverObject,
        ULONG_PTR BugCheckParameter3,
        __int64 a3,
        __int64 a4)
{
  if ( !VerifierApiCodeSectionHandle )
    VerifierApiCodeSectionHandle = (__int64)MmLockPagableDataSection(StorPortFreeDeviceBaseVrfy);
  if ( !DriverObject || !BugCheckParameter3 )
    KeBugCheckEx(0xF1u, 0x2000uLL, (ULONG_PTR)DriverObject, BugCheckParameter3, 0LL);
  return StorPortInitialize(DriverObject, BugCheckParameter3, a3, a4);
}
