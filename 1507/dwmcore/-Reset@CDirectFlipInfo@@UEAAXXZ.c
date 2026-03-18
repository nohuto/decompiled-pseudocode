/*
 * XREFs of ?Reset@CDirectFlipInfo@@UEAAXXZ @ 0x180013600
 * Callers:
 *     ??_GCOutOfFrameDirectFlipInfo@@UEAAPEAXI@Z @ 0x180005DF0 (--_GCOutOfFrameDirectFlipInfo@@UEAAPEAXI@Z.c)
 *     ??1COverlayContext@@MEAA@XZ @ 0x180012AE0 (--1COverlayContext@@MEAA@XZ.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 *     ?Reset@COutOfFrameDirectFlipInfo@@UEAAXXZ @ 0x1800DF150 (-Reset@COutOfFrameDirectFlipInfo@@UEAAXXZ.c)
 *     ??_ECDirectFlipInfo@@UEAAPEAXI@Z @ 0x1800EEE30 (--_ECDirectFlipInfo@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ @ 0x180004E68 (-UnpinResources@CBindInfo@CCompositionSurfaceInfo@@QEAAJXZ.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CDirectFlipInfo::Reset(CDirectFlipInfo *this)
{
  int v2; // ecx
  int v3; // ecx
  int v4; // ecx
  __int64 v5; // rsi
  __int64 v6; // rsi
  CMILCOMBase *v7; // rcx
  __int64 v8; // rsi

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
        (*(void (__fastcall **)(CDirectFlipInfo *))(*(_QWORD *)this + 32LL))(this);
      }
      CCompositionSurfaceInfo::CBindInfo::UnpinResources((CCompositionSurfaceInfo::CBindInfo *)(*((_QWORD *)this + 4)
                                                                                              + 48LL));
      *(_BYTE *)(*((_QWORD *)this + 1) + 822LL) = 1;
    }
  }
  v5 = *((_QWORD *)this + 2);
  if ( v5 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v5 + 16LL))(*((_QWORD *)this + 2));
    *((_QWORD *)this + 2) = 0LL;
  }
  v6 = *((_QWORD *)this + 3);
  if ( v6 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6 + 16LL))(*((_QWORD *)this + 3));
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
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v8 + 8LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = 0LL;
  }
  *((_QWORD *)this + 8) = -1LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 72) = 0;
LABEL_5:
  *((_DWORD *)this + 14) = 0;
}
