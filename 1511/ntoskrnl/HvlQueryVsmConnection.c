/*
 * XREFs of HvlQueryVsmConnection @ 0x1401339B8
 * Callers:
 *     HvlQuerySecureKernelProfileInformation @ 0x1401B3250 (HvlQuerySecureKernelProfileInformation.c)
 *     MmSnapTriageDumpInformation @ 0x1401D67AC (MmSnapTriageDumpInformation.c)
 *     HvlConnectSwInterrupt @ 0x14074F444 (HvlConnectSwInterrupt.c)
 *     KiSwInterruptPresent @ 0x14074F4AC (KiSwInterruptPresent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvlQueryVsmConnection(_QWORD *a1)
{
  if ( !HvlpVsmVtlCallVa )
    return 3221225473LL;
  *a1 = HvlpVsmVtlCallVa;
  return 0LL;
}
