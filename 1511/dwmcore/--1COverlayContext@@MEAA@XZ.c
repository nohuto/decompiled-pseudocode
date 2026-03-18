/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x18007F2B8
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x18007E950 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x180030E80 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18006DF1C (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180076CE4 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x18007F050 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800AC220 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(void **this)
{
  void *v2; // rsi
  CMILRefCountBase *v3; // rcx

  *this = &COverlayContext::`vftable';
  COverlayContext::Reset((COverlayContext *)this);
  v2 = this[2];
  if ( v2 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v2 + 16LL))(this[2]);
  v3 = (CMILRefCountBase *)this[9];
  if ( v3 )
    CMILRefCountBase::Release(v3);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 99);
  FastRegion::CRegion::FreeMemory(this + 90);
  this[77] = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset((CDirectFlipInfo *)(this + 77));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 29);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 25);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 21);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  *this = &CMILRefCountBase::`vftable';
}
