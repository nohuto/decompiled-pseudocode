/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C0101CA4
 * Callers:
 *     GreTransferSpriteStateToDwmState @ 0x1C00D2428 (GreTransferSpriteStateToDwmState.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C00D3560 (GreTransferDwmStateToSpriteState.c)
 *     GreGetDxSharedSurface @ 0x1C0101A80 (GreGetDxSharedSurface.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0055AB4 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(unsigned __int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // rax

  v1 = 0;
  v2 = HMValidateHandleNoSecure(a1, 1);
  if ( v2 )
    return (*(_BYTE *)(v2 + 50) & 0x20) != 0;
  return v1;
}
