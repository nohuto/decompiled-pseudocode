/*
 * XREFs of VfInitSetVerifyDriverTargets @ 0x140785268
 * Callers:
 *     ViInitSystemPhase0 @ 0x14076F8BC (ViInitSystemPhase0.c)
 *     ViMakeVerifierSettings @ 0x1407854AC (ViMakeVerifierSettings.c)
 * Callees:
 *     memmove @ 0x140166980 (memmove.c)
 */

void *__fastcall VfInitSetVerifyDriverTargets(void *Src, size_t Size)
{
  unsigned int v2; // ebx
  void *result; // rax

  v2 = Size;
  if ( (unsigned int)Size > 0x1800 )
  {
    v2 = 6142;
    word_14071A12E = 0;
  }
  result = memmove(MmVerifyDriverBuffer, Src, v2);
  VfOptionFlags &= ~1u;
  MmVerifyDriverBufferLength = v2;
  return result;
}
