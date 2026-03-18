/*
 * XREFs of ??1COverlayContext@@MEAA@XZ @ 0x1800791B4
 * Callers:
 *     ??_ECOverlayContext@@MEAAPEAXI@Z @ 0x180078090 (--_ECOverlayContext@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180078F88 (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800795E0 (-Reset@CDirectFlipInfo@@UEAAXXZ.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x18009A9F4 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall COverlayContext::~COverlayContext(COverlayContext *this)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8

  *(_QWORD *)this = &COverlayContext::`vftable';
  COverlayContext::Reset(this);
  v4 = *((_QWORD *)this + 2);
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  v5 = *((_QWORD *)this + 9);
  if ( v5 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 1040, v2, v3);
  FastRegion::CRegion::FreeMemory((COverlayContext *)((char *)this + 968));
  *((_QWORD *)this + 108) = &CDirectFlipInfo::`vftable';
  CDirectFlipInfo::Reset((COverlayContext *)((char *)this + 864));
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 272, v6, v7);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 240, v8, v9);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 208, v10, v11);
  DynArrayImpl<1>::~DynArrayImpl<1>((char *)this + 176, v12, v13);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
}
