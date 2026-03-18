/*
 * XREFs of ?ForcePresent@CHwndRenderTarget@@UEAA_NXZ @ 0x180073B10
 * Callers:
 *     ?Present@CHwndRenderTarget@@UEAAJ_NI@Z @ 0x1800749E0 (-Present@CHwndRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTarget::ForcePresent(CHwndRenderTarget *this)
{
  __int64 result; // rax
  __int64 v2; // rdx

  result = 0LL;
  if ( *((_BYTE *)this + 754) )
    return 1LL;
  v2 = *((_QWORD *)this + 19);
  if ( *(_BYTE *)(v2 + 299) )
  {
    if ( *(_BYTE *)(v2 + 300) && !*((_BYTE *)this + 752) )
      return 1LL;
  }
  return result;
}
