/*
 * XREFs of ?GetColorSpace@CDesktopRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x180107000
 * Callers:
 *     ?GetColorSpace@CDesktopRenderTarget@@WCI@EAA?AW4ColorSpace@@XZ @ 0x1800BCA70 (-GetColorSpace@CDesktopRenderTarget@@WCI@EAA-AW4ColorSpace@@XZ.c)
 * Callees:
 *     ?GetColorSpace@CHwndRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x180105D80 (-GetColorSpace@CHwndRenderTarget@@UEAA-AW4ColorSpace@@XZ.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetColorSpace(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 72) )
    return CHwndRenderTarget::GetColorSpace(**(_QWORD **)(a1 + 48) + 40LL);
  return result;
}
