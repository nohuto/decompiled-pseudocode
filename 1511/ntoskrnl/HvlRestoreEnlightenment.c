/*
 * XREFs of HvlRestoreEnlightenment @ 0x140166DF4
 * Callers:
 *     PopHiberCheckResume @ 0x14039D7D4 (PopHiberCheckResume.c)
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
