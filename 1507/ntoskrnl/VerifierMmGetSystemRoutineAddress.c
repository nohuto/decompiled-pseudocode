/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x14075389C
 * Callers:
 *     <none>
 * Callees:
 *     MmGetSystemRoutineAddress @ 0x140541B4C (MmGetSystemRoutineAddress.c)
 *     VfThunkAdjustExportAddressIfHooked @ 0x140744B20 (VfThunkAdjustExportAddressIfHooked.c)
 */

PVOID __fastcall VerifierMmGetSystemRoutineAddress(UNICODE_STRING *a1)
{
  PVOID result; // rax

  result = pXdvMmGetSystemRoutineAddress(a1);
  if ( result )
    return (PVOID)VfThunkAdjustExportAddressIfHooked((__int64)result, (__int64)a1);
  return result;
}
