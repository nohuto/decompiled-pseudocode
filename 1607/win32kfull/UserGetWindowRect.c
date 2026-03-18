/*
 * XREFs of UserGetWindowRect @ 0x1C0063B6C
 * Callers:
 *     GreUpdateSpriteClipRgn @ 0x1C0061C18 (GreUpdateSpriteClipRgn.c)
 *     DxgkEngGetWindowRect @ 0x1C0135C70 (DxgkEngGetWindowRect.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x1C007A3E8 (HMValidateHandleNoSecure.c)
 */

__int64 __fastcall UserGetWindowRect(__int64 a1, _OWORD *a2)
{
  _OWORD *v2; // rbx
  __int64 result; // rax
  __int128 v4; // xmm0

  v2 = a2;
  LOBYTE(a2) = 1;
  result = HMValidateHandleNoSecure(a1, a2);
  if ( result )
  {
    v4 = *(_OWORD *)(result + 112);
    result = 1LL;
    *v2 = v4;
  }
  return result;
}
