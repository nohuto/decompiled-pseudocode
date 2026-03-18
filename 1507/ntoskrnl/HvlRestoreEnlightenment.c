/*
 * XREFs of HvlRestoreEnlightenment @ 0x140195BAC
 * Callers:
 *     PopHiberCheckResume @ 0x1403EFBB8 (PopHiberCheckResume.c)
 * Callees:
 *     <none>
 */

__int64 HvlRestoreEnlightenment()
{
  __int64 result; // rax

  result = (unsigned int)HvlpEnlightenments;
  HvlEnlightenments = HvlpEnlightenments;
  return result;
}
