/*
 * XREFs of VerifierMmGetSystemRoutineAddress @ 0x14071BE94
 * Callers:
 *     <none>
 * Callees:
 *     VfThunkAdjustExportAddressIfHooked @ 0x14070F340 (VfThunkAdjustExportAddressIfHooked.c)
 */

__int64 __fastcall VerifierMmGetSystemRoutineAddress(__int64 a1)
{
  __int64 result; // rax

  result = pXdvMmGetSystemRoutineAddress();
  if ( result )
    return VfThunkAdjustExportAddressIfHooked(result, a1);
  return result;
}
