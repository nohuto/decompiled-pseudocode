/*
 * XREFs of ?GetColorSpace@CHwndRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x18011C220
 * Callers:
 *     ?GetColorSpace@CDesktopRenderTarget@@UEAA?AW4ColorSpace@@XZ @ 0x18011DA40 (-GetColorSpace@CDesktopRenderTarget@@UEAA-AW4ColorSpace@@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwndRenderTarget::GetColorSpace(__int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (*(int (__fastcall **)(__int64))(*(_QWORD *)(a1 - 112) + 256LL))(a1 - 112) >= 0 )
    return (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 40LL))(*(_QWORD *)(a1 + 48));
  return v2;
}
