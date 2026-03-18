/*
 * XREFs of ?GetColorSpace@CHwndRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x1800E9EA0
 * Callers:
 *     ?GetColorSpace@CDesktopRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x1800EB5D0 (-GetColorSpace@CDesktopRenderTarget@@UEAA-AW4ColorSpace@@XZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwndRenderTarget::GetColorSpace(__int64 a1)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(a1 - 40) + 232LL))(a1 - 40) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
  return v2;
}
