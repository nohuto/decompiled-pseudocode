/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x1407FBBCC
 * Callers:
 *     ViInitSystemPhase0 @ 0x1407E50D8 (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x1407FBE10 (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140195740 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  void *result; // rax

  v2 = Size;
  if ( (unsigned int)Size > 0x1800 )
  {
    v2 = 6142;
    word_14080E15E = 0;
  }
  result = memmove(MmVerifyDriverBuffer, Src, v2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
