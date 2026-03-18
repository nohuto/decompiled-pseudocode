/*
 * XREFs of UserIsWindowWithNoRedirectionBitmap @ 0x1C000AAFC
 * Callers:
 *     GreGetDxSharedSurface @ 0x1C000A8D8 (GreGetDxSharedSurface.c)
 *     GreTransferDwmStateToSpriteState @ 0x1C012BAD0 (GreTransferDwmStateToSpriteState.c)
 *     GreTransferSpriteStateToDwmState @ 0x1C014A1F0 (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C0066B04 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserIsWindowWithNoRedirectionBitmap(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rax

  v2 = 0;
  LOBYTE(a2) = 1;
  v3 = HMValidateHandleNoSecure(a1, a2);
  if ( v3 )
    return (*(_BYTE *)(v3 + 50) & 0x20) != 0;
  return v2;
}
