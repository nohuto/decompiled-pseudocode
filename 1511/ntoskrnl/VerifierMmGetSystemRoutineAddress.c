/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x1406CFDD0
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSystemRoutineAddress @ 0x1403B7E3C (MmGetSystemRoutineAddress.c)
 *     VfThunkAdjustExportAddressIfHooked @ 0x1406C3280 (VfThunkAdjustExportAddressIfHooked.c)
 */

PVOID __fastcall VerifierMmGetSystemRoutineAddress(UNICODE_STRING *a1)
{
  PVOID result; // rax

  result = pXdvMmGetSystemRoutineAddress(a1);
  if ( result )
    return (PVOID)VfThunkAdjustExportAddressIfHooked((__int64)result, (__int64)a1);
  return result;
}
