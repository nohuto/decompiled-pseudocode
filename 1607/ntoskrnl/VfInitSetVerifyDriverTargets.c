/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x1407D1678
 * Callers:
 *     ViInitSystemPhase0 @ 0x1407B9E64 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x1407D18BC (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  void *result; // rax

  v2 = Size;
  if ( (unsigned int)Size > 0x1800 )
  {
    v2 = 6142;
    word_140762AEE = 0;
  }
  result = memmove(MmVerifyDriverBuffer, Src, v2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
