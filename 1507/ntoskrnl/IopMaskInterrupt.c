/*
 * XREFs of IopMaskInterrupt @ 0x14014AF08
 * Callers:
 *     IoReportInterruptInactive @ 0x14014AEDC (IoReportInterruptInactive.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopMaskInterrupt(__int64 a1)
{
  unsigned __int64 v1; // rdx

  v1 = *(_QWORD *)(a1 - 96) - ((*(_QWORD *)(a1 - 96) >> 1) & 0x5555555555555555LL);
  return KeMaskInterrupt(
           a1 + 352,
           (0x101010101010101LL
          * (((v1 & 0x3333333333333333LL)
            + ((v1 >> 2) & 0x3333333333333333LL)
            + (((v1 & 0x3333333333333333LL) + ((v1 >> 2) & 0x3333333333333333LL)) >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 56,
           a1 - 88,
           a1 + 288);
}
