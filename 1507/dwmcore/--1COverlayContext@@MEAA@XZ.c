/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x180012AE0
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x180012340 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180013600 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ?Release@CMILRefCountBase@@UEAAKXZ @ 0x18001D430 (-Release@CMILRefCountBase@@UEAAKXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18003FDC0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x1800884B4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?Reset@COverlayContext@@QEAAXXZ @ 0x1800F765C (-Reset@COverlayContext@@QEAAXXZ.c)
 */

void __fastcall COverlayContext::~COverlayContext(CMILRefCountBase **this)
{
  CMILRefCountBase *v2; // rsi
  CMILRefCountBase *v3; // rcx

  *this = (CMILRefCountBase *)&COverlayContext::`vftable';
  COverlayContext::Reset((COverlayContext *)this);
  v2 = this[2];
  if ( v2 )
    (*(void (__fastcall **)(CMILRefCountBase *))(*(_QWORD *)v2 + 16LL))(this[2]);
  v3 = this[9];
  if ( v3 )
    CMILRefCountBase::Release(v3);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 93));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 88);
  FastRegion::CRegion::FreeMemory((FastRegion::CRegion *)(this + 79));
  this[63] = (CMILRefCountBase *)&CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset((CDirectFlipInfo *)(this + 63));
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 25);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 21);
  DynArrayImpl<1>::~DynArrayImpl<1>(this + 17);
  *this = (CMILRefCountBase *)&CMILRefCountBase::`vftable';
}
