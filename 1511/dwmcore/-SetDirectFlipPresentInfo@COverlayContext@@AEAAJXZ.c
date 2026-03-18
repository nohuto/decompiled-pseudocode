/*
 * XREFs of ?SetDirectFlipPresentInfo@COverlayContext@@AEAAJXZ @ 0x18007EA0C
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 * Callees:
 *     ?NeedsPresent@CDirectFlipInfo@@QEBA_NXZ @ 0x180006B20 (-NeedsPresent@CDirectFlipInfo@@QEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall COverlayContext::SetDirectFlipPresentInfo(COverlayContext *this)
{
  unsigned int v2; // ebx
  CDirectFlipInfo *v3; // rcx
  int v5; // eax

  v2 = 0;
  v3 = (CDirectFlipInfo *)*((_QWORD *)this + 89);
  if ( v3 )
  {
    if ( CDirectFlipInfo::NeedsPresent(v3) )
      *((_BYTE *)this + 833) = 1;
    v5 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 89) + 24LL))(*((_QWORD *)this + 89));
    v2 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0xD49u);
  }
  return v2;
}
