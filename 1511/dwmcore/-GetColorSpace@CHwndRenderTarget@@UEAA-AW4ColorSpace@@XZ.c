/*
 * XREFs of ?GetColorSpace@CHwndRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x180105D80
 * Callers:
 *     ?GetColorSpace@CDesktopRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x180107000 (-GetColorSpace@CDesktopRenderTarget@@UEAA-AW4ColorSpace@@XZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CHwndRenderTarget::GetColorSpace(__int64 a1)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(a1 - 40) + 240LL))(a1 - 40) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
  return v2;
}
