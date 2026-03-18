/*
 * XREFs of ?IsPresentDisabled@CHwndRenderTarget@@IEAA_NXZ @ 0x1800F3E14
 * Callers:
 *     ?PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ @ 0x1800B8C20 (-PresentOutOfFrameDirectFlip@CHwndRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwndRenderTarget::IsPresentDisabled(CHwndRenderTarget *this)
{
  bool result; // al
  __int64 v2; // rcx
  __int64 v3; // rdx

  result = 0;
  if ( *((_BYTE *)this + 567) )
    return 1;
  v2 = *((_QWORD *)this + 68);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 224) && *(_BYTE *)(v2 + 835) )
      return 1;
    v3 = *(_QWORD *)(v2 + 712);
    if ( v3 )
    {
      if ( *(_BYTE *)(v3 + 78) && !*(_BYTE *)(v3 + 76) )
        return 1;
    }
  }
  return result;
}
