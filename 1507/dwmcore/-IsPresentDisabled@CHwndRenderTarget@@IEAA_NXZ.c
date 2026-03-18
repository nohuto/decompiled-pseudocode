/*
 * XREFs of ?IsPresentDisabled@CHwndRenderTarget@@IEAA_NXZ @ 0x1800DC4B0
 * Callers:
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800EA4A0 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsPresentDisabled(CHwndRenderTarget *this)
{
  bool result; // al
  __int64 v2; // rcx
  __int64 v3; // rdx

  result = 0;
  if ( *((_BYTE *)this + 574) )
    return 1;
  v2 = *((_QWORD *)this + 69);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 224) && *(_BYTE *)(v2 + 819) )
      return 1;
    v3 = *(_QWORD *)(v2 + 624);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 89) && !*(_BYTE *)(v3 + 72) )
        return 1;
    }
  }
  return result;
}
