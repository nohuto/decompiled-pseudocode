/*
 * XREFs of HvlRestoreEnlightenment @ 0x140171C34
 * Callers:
 *     PopHiberCheckResume @ 0x1403D06EC (PopHiberCheckResume.c)
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
