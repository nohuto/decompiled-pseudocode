/*
 * XREFs of ??1CDisplay@@EEAA@XZ @ 0x180070CEC
 * Callers:
 *     ??_GCDisplay@@EEAAPEAXI@Z @ 0x180070720 (--_GCDisplay@@EEAAPEAXI@Z.c)
 *     ?IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z @ 0x1800B5F38 (-IsEquivalentRotated@CDisplaySet@@AEBA_NPEBV1@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?ReleaseHwRenderTarget@CDisplay@@QEAAXXZ @ 0x1800703AC (-ReleaseHwRenderTarget@CDisplay@@QEAAXXZ.c)
 *     ?ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ @ 0x180070D90 (-ReleaseDDAHwRenderTarget@CDisplay@@QEAAXXZ.c)
 */

void __fastcall CDisplay::~CDisplay(CDisplay *this)
{
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  *(_QWORD *)this = &CDisplay::`vftable';
  CDisplay::ReleaseHwRenderTarget(this);
  CDisplay::ReleaseDDAHwRenderTarget(this);
  v2 = *((_QWORD *)this + 5);
  if ( v2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 5));
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 16LL))(*((_QWORD *)this + 6));
  v4 = *((_QWORD *)this + 4);
  if ( v4 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*((_QWORD *)this + 4));
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
