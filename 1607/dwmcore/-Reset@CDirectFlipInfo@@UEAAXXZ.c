/*
 * XREFs of ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x1800795E0
 * Callers:
 *     ?ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z @ 0x1800787BC (-ApplyOverlayOrDirectFlipConfiguration@COverlayContext@@QEAAJPEA_N0PEAW4Enum@DirectFlipMode@@@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x1800791B4 (--1COverlayContext@@MEAA@XZ.c)
 *     ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x180126260 (--_ECDirectFlipInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x18002D1DC (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x1801529A8 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rcx
  __int64 v6; // rcx
  CMILCOMBase *v7; // rcx
  __int64 v8; // rcx

  v2 = *((_DWORD *)this + 14) - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      v4 = v3 - 1;
      if ( v4 )
      {
        if ( v4 != 1 )
          goto LABEL_5;
        (*(void (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)this + 24LL))(this);
      }
      CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*((_QWORD *)this + 4)
                                                                                              + 48LL));
      *(_BYTE *)(*((_QWORD *)this + 1) + 1086LL) = 1;
    }
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    *((_QWORD *)this + 3) = 0LL;
  }
  v7 = (CMILCOMBase *)*((_QWORD *)this + 4);
  if ( v7 )
  {
    CMILCOMBase::InternalRelease(v7);
    *((_QWORD *)this + 4) = 0LL;
  }
  v8 = *((_QWORD *)this + 6);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 8) = 0LL;
  *((_BYTE *)this + 76) = 0;
LABEL_5:
  *((_DWORD *)this + 14) = 0;
}
