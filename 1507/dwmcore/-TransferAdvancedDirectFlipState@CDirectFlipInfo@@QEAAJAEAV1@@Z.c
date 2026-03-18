/*
 * XREFs of ?TransferAdvancedDirectFlipState@CDirectFlipInfo@@QEAAJAEAV1@@Z @ 0x18000643C
 * Callers:
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCOcclusionContext@@PEA_N444@Z @ 0x180012F6C (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCMILMatrix@@IPEAV-$TMi.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionWrapper@@@Z @ 0x180119594 (-SetAdvancedDirectFlipState@CCompositionSurfaceInfo@@QEAAJPEAVIRenderTargetDisplay@@PEAVCRegionW.c)
 */

__int64 __fastcall CDirectFlipInfo::TransferAdvancedDirectFlipState(CDirectFlipInfo *this, struct CDirectFlipInfo *a2)
{
  unsigned int v2; // edi
  char v5; // al
  __int64 v7; // rdi
  void (__fastcall ***v8)(_QWORD); // rdi
  int v9; // eax
  int v10; // eax
  struct IRenderTargetDisplay *v11; // [rsp+40h] [rbp+8h] BYREF

  v2 = 0;
  v11 = 0LL;
  v5 = *((_BYTE *)a2 + 40);
  *((_BYTE *)this + 40) = v5;
  if ( v5 )
  {
    v7 = *((_QWORD *)this + 6);
    if ( v7 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v7 + 8LL))(*((_QWORD *)this + 6));
    *((_QWORD *)this + 6) = *((_QWORD *)a2 + 6);
    v8 = (void (__fastcall ***)(_QWORD))*((_QWORD *)a2 + 6);
    if ( v8 )
      (**v8)(*((_QWORD *)a2 + 6));
    v9 = (***((__int64 (__fastcall ****)(_QWORD, GUID *, struct IRenderTargetDisplay **))this + 2))(
           *((_QWORD *)this + 2),
           &GUID_d96ea0e9_6207_4781_b3d6_49c499730deb,
           &v11);
    v2 = v9;
    if ( v9 >= 0 )
    {
      v10 = CCompositionSurfaceInfo::SetAdvancedDirectFlipState(
              *((CCompositionSurfaceInfo **)this + 4),
              v11,
              *((struct CRegionWrapper **)this + 6));
      v2 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x1A3u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x1A1u);
    }
    if ( v11 )
      (*(void (__fastcall **)(struct IRenderTargetDisplay *))(*(_QWORD *)v11 + 16LL))(v11);
  }
  return v2;
}
