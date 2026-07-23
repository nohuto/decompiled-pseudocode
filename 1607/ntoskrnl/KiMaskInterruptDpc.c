/*
 * XREFs of KiMaskInterruptDpc @ 0x1401D6914
 * Callers:
 *     <none>
 * Callees:
 *     KiMaskInterruptInternal @ 0x14012472C (KiMaskInterruptInternal.c)
 */

__int64 __fastcall KiMaskInterruptDpc(__int64 a1, __int64 a2, char a3)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(0xFuLL);
  KiMaskInterruptInternal(a3);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
