/*
 * XREFs of ?DrawCommonRenderingEffect@CDrawingContext@@QEAAJPEAVCVisual@@PEAVCSpriteVisualContent@@AEBUD2D_SIZE_F@@@Z @ 0x180122310
 * Callers:
 *     ?Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180139340 (-Draw@CColorBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UM.c)
 *     ?Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013A0F0 (-Draw@CSurfaceBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@.c)
 *     ?Draw@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013E870 (-Draw@CMaskBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?Draw@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013F030 (-Draw@CLinearGradientBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMil.c)
 *     ?Draw@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18013F8C0 (-Draw@CNineGridBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRectF@.c)
 *     ?DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@Z @ 0x18014F1CC (-DrawCommonRenderingEffect@CDropShadow@@AEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCVisual@@@.c)
 * Callees:
 *     ?GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ @ 0x1800253C8 (-GetTopByReference@CBaseMatrixStack@@IEBAPEBVCMILMatrix@@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z @ 0x18004EE84 (-FindTreeData@CVisual@@QEBAPEAVCTreeData@@PEBVCVisualTree@@@Z.c)
 *     ?Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x180058840 (-Render@CDrawListCache@@QEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ @ 0x18006A4C0 (-UseAntialiasingForCpuClipping@CDrawingContext@@QEBA_NXZ.c)
 *     ?DrawSolidRectangle@CDrawingContext@@UEAAJAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBU_D3DCOLORVALUE@@@Z @ 0x18006B7C0 (-DrawSolidRectangle@CDrawingContext@@UEAAJAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x18006F210 (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ?Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z @ 0x1800986DC (-Initialize@CpuClipShape@@QEAAJPEAVCScopedClipStack@@PEBVCMILMatrix@@@Z.c)
 *     ?D2DInterpolationModeFromMilInterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapInterpolationMode@@@Z @ 0x1800AF478 (-D2DInterpolationModeFromMilInterpolationMode@@YA-AW4D2D1_INTERPOLATION_MODE@@W4Enum@MilBitmapIn.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z @ 0x1801075A8 (-IsDrawListCacheDirty@CDrawingContext@@QEAA_NPEAVCVisual@@PEAVCDrawListCache@@@Z.c)
 *     ?IsWarpFastPathEnabled@CDrawingContext@@AEBA_NXZ @ 0x18010791C (-IsWarpFastPathEnabled@CDrawingContext@@AEBA_NXZ.c)
 *     ?EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType@@PEAPEAVCDrawListCache@@@Z @ 0x180109FE4 (-EnsureDrawListCacheNoRef@CVisual@@IEAAJPEBVCVisualTree@@PEBVIRenderTarget@@W4DrawListRenderType.c)
 *     ??1CpuClipShape@@QEAA@XZ @ 0x180111F20 (--1CpuClipShape@@QEAA@XZ.c)
 *     ?UpdateDrawListCache@CSpriteDrawListGenerator@@QEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133AE4 (-UpdateDrawListCache@CSpriteDrawListGenerator@@QEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCD.c)
 */

__int64 __fastcall CDrawingContext::DrawCommonRenderingEffect(
        CDrawingContext *this,
        struct CVisual *a2,
        struct CSpriteVisualContent *a3,
        const struct D2D_SIZE_F *a4)
{
  __int64 v7; // rcx
  __int64 *v8; // r8
  __int64 v9; // r10
  unsigned int v10; // edi
  __int64 v11; // rax
  __int64 (__fastcall *v12)(struct CSpriteVisualContent *, __int64, _QWORD, _OWORD *, _QWORD); // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  float v16; // xmm6_4
  const struct CMILMatrix *TopByReference; // r13
  unsigned __int64 v18; // rbx
  struct _LIST_ENTRY *Blink; // rcx
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  bool v24; // cf
  struct _LIST_ENTRY *TreeData; // rax
  int v26; // eax
  int updated; // eax
  unsigned int v29; // [rsp+28h] [rbp-E0h]
  bool IsWarpFastPathEnabled; // [rsp+38h] [rbp-D0h]
  struct CDrawListCache *v31; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int64 v32; // [rsp+48h] [rbp-C0h]
  char *v33; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v34; // [rsp+60h] [rbp-A8h]
  _OWORD v35[3]; // [rsp+70h] [rbp-98h]
  int v36; // [rsp+A0h] [rbp-68h]
  _QWORD v37[2]; // [rsp+A8h] [rbp-60h] BYREF
  int v38; // [rsp+B8h] [rbp-50h]
  int v39; // [rsp+BCh] [rbp-4Ch]
  bool v40; // [rsp+C0h] [rbp-48h]
  __int128 v41; // [rsp+C8h] [rbp-40h] BYREF
  struct CShape *v42[4]; // [rsp+D8h] [rbp-30h] BYREF
  int v43; // [rsp+F8h] [rbp-10h]
  __int64 v44; // [rsp+FCh] [rbp-Ch]
  _BYTE v45[16]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v46; // [rsp+118h] [rbp+10h]
  char v47; // [rsp+120h] [rbp+18h]
  _OWORD v48[7]; // [rsp+128h] [rbp+20h] BYREF
  __int16 v49; // [rsp+198h] [rbp+90h]
  char v50; // [rsp+19Ah] [rbp+92h]
  __int16 v51; // [rsp+208h] [rbp+100h]
  char v52; // [rsp+20Ah] [rbp+102h]

  *(_QWORD *)&v41 = a4;
  v10 = 0;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    v15 = *(_DWORD *)(v7 + 3016);
    if ( !v15 )
    {
      v14 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0xAFCu);
      goto LABEL_31;
    }
    v16 = *(float *)(*((_QWORD *)this + 379) + 4LL * (unsigned int)(v15 - 1));
    if ( v16 <= 0.0 )
      return v10;
    v31 = 0LL;
    TopByReference = CBaseMatrixStack::GetTopByReference((CDrawingContext *)((char *)this + 536));
    IsWarpFastPathEnabled = CDrawingContext::IsWarpFastPathEnabled(this);
    v13 = CVisual::EnsureDrawListCacheNoRef(
            a2,
            *((const struct CVisualTree **)this + 781),
            *((_QWORD *)this + 54),
            IsWarpFastPathEnabled,
            (__int64)&v31);
    v14 = v13;
    if ( v13 < 0 )
    {
      v29 = 2824;
      goto LABEL_30;
    }
    if ( !*((_QWORD *)a3 + 14) )
      *((_QWORD *)a3 + 14) = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    if ( !CDrawingContext::IsDrawListCacheDirty(this, a2, v31) )
      goto LABEL_24;
    v18 = *(_QWORD *)(*((_QWORD *)this + 3) + 352LL);
    if ( v18 <= *((_QWORD *)a3 + 14) )
      v18 = *((_QWORD *)a3 + 14);
    Blink = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 781))[12].Blink;
    v42[1] = (struct CShape *)&CRectanglesShape::`vftable';
    v42[0] = 0LL;
    if ( v18 <= (unsigned __int64)Blink )
      v18 = (unsigned __int64)Blink;
    v42[2] = (struct CShape *)v45;
    v32 = v18;
    v43 = 1;
    v42[3] = (struct CShape *)v45;
    v44 = 1LL;
    v46 = 0LL;
    v47 = 0;
    v33 = 0LL;
    memset_0(v37, 0, 0x20uLL);
    v20 = *(_OWORD *)TopByReference;
    v21 = *((_OWORD *)TopByReference + 1);
    v36 = *((_DWORD *)TopByReference + 16);
    v34 = v20;
    v22 = *((_OWORD *)TopByReference + 2);
    v35[0] = v21;
    v23 = *((_OWORD *)TopByReference + 3);
    v35[1] = v22;
    v24 = *((_DWORD *)this + 82) != 0;
    v37[1] = *(_QWORD *)v41;
    v35[2] = v23;
    v38 = v24;
    v39 = D2DInterpolationModeFromMilInterpolationMode(*((_DWORD *)this + 81));
    if ( !IsWarpFastPathEnabled )
    {
      v33 = (char *)this + 3824;
      if ( *(_BYTE *)(*((_QWORD *)this + 114) + 80LL * (unsigned int)(*((_DWORD *)this + 234) - 1)) )
      {
        TreeData = CVisual::FindTreeData(a2, *((const struct CVisualTree **)this + 781));
        v26 = CpuClipShape::Initialize(v42, (CDrawingContext *)((char *)this + 912), (FLOAT *)TreeData[9].Blink);
        v14 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0xB27u);
          goto LABEL_27;
        }
        v37[0] = v42[0];
        v40 = CDrawingContext::UseAntialiasingForCpuClipping(this);
      }
      v18 = v32;
    }
    updated = CSpriteDrawListGenerator::UpdateDrawListCache(
                (struct CSpriteVisualContent *)((char *)a3 + 112),
                v18,
                (const struct CCommonDrawListCacheParameters *)&v33,
                v31);
    v14 = updated;
    if ( updated >= 0 )
    {
      CpuClipShape::~CpuClipShape((CpuClipShape *)v42);
LABEL_24:
      v13 = CDrawListCache::Render((__int64)v31, this, (float *)TopByReference, v16);
      v14 = v13;
      if ( v13 < 0 )
      {
        v29 = 2871;
        goto LABEL_30;
      }
      goto LABEL_31;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, updated, 0xB30u);
LABEL_27:
    CpuClipShape::~CpuClipShape((CpuClipShape *)v42);
    goto LABEL_31;
  }
  v11 = *v8;
  v49 = 1;
  v50 = 0;
  v51 = 1;
  v12 = *(__int64 (__fastcall **)(struct CSpriteVisualContent *, __int64, _QWORD, _OWORD *, _QWORD))(v11 + 168);
  v52 = 0;
  v13 = v12(a3, v9, 0LL, v48, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    v29 = 2805;
    goto LABEL_30;
  }
  v41 = v48[0];
  v13 = CDrawingContext::DrawSolidRectangle(this, (struct MilRectF *)&v41, (__int64)&unk_1801C74F0);
  v14 = v13;
  if ( v13 < 0 )
  {
    v29 = 2807;
LABEL_30:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v29);
  }
LABEL_31:
  if ( v14 == -2003304441 )
    return 0;
  return v14;
}
