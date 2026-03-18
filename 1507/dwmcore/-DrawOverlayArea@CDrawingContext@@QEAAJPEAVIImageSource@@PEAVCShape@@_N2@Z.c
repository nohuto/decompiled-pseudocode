/*
 * XREFs of ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVIImageSource@@PEAVCShape@@_N2@Z @ 0x1800F23A8
 * Callers:
 *     ?Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180008100 (-Draw@CCompositionSurfaceBitmap@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEAVCShape@@U?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@PEAU_MARGINS@@H_N77PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180079EF0 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     ?DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z @ 0x18002DA28 (-DrawShape@CDrawingContext@@QEAAJPEAVCShape@@PEAVCBrush@@@Z.c)
 *     ?PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z @ 0x180030040 (-PushRenderOptionsInternal@CDrawingContext@@IEAAJPEBVCVisual@@PEBUMilRenderOptions@@_N@Z.c)
 *     ?PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z @ 0x180031110 (-PopRenderOptionsInternal@CDrawingContext@@IEAAX_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180070B90 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z @ 0x1800F19A4 (-CreateFromColor@CSolidColorBrush@@SAJPEAPEAV1@PEAVCComposition@@AEAU_D3DCOLORVALUE@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawOverlayArea(
        struct CComposition **this,
        struct IImageSource *a2,
        struct CShape *a3,
        char a4,
        bool a5)
{
  struct CSolidColorBrush *v7; // rbx
  unsigned int v9; // edi
  _BOOL8 v10; // r15
  int v11; // eax
  int v12; // eax
  struct _D3DCOLORVALUE v13; // xmm0
  __int64 v14; // rax
  int v15; // edx
  __int64 v16; // r8
  unsigned int v17; // r9d
  int v18; // eax
  int v19; // eax
  struct CSolidColorBrush *v21; // [rsp+30h] [rbp-50h] BYREF
  __int64 v22; // [rsp+38h] [rbp-48h] BYREF
  struct _D3DCOLORVALUE v23; // [rsp+40h] [rbp-40h] BYREF
  int v24; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v25[8]; // [rsp+54h] [rbp-2Ch] BYREF
  int v26; // [rsp+5Ch] [rbp-24h]
  char v28; // [rsp+C8h] [rbp+48h]

  v22 = 0LL;
  v7 = 0LL;
  *(_QWORD *)&v23.r = 0LL;
  v21 = 0LL;
  *(_QWORD *)&v23.b = 0LL;
  v24 = 0;
  v9 = 0;
  memset_0(v25, 0, 0x28uLL);
  v28 = 0;
  v10 = CCommonRegistryData::m_dwOverlayTestMode != 0;
  if ( a4 )
  {
    if ( a5 )
      goto LABEL_7;
    v24 = 32;
    v26 = 1;
    v11 = CDrawingContext::PushRenderOptionsInternal(
            (CDrawingContext *)this,
            0LL,
            (const struct MilRenderOptions *)&v24,
            1);
    v9 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x1F5Au);
      goto LABEL_34;
    }
    v28 = 1;
  }
  if ( !a5 )
    goto LABEL_9;
LABEL_7:
  if ( v10 )
    goto LABEL_10;
  if ( !a4 )
  {
LABEL_9:
    if ( !v10 )
    {
      if ( a4 )
        goto LABEL_26;
      goto LABEL_25;
    }
LABEL_10:
    if ( a4 )
    {
      (*(void (__fastcall **)(struct IImageSource *, __int64 *))(*(_QWORD *)a2 + 136LL))(a2, &v22);
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v22 + 40LL))(v22);
      if ( v12 == 103 || v12 > 105 && v12 <= 107 )
      {
        if ( (*(unsigned __int8 (__fastcall **)(struct IImageSource *, __int64))(*(_QWORD *)a2 + 144LL))(a2, 79LL)
          && (v14 = *((_QWORD *)a2 + 49), v15 = 0, v16 = 0LL, (v17 = *(_DWORD *)(v14 + 112)) != 0) )
        {
          while ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 88) + 8 * v16) + 324LL) || (unsigned int)++v15 <= 1 )
          {
            v16 = (unsigned int)(v16 + 1);
            if ( (unsigned int)v16 >= v17 )
              goto LABEL_23;
          }
          *(struct _D3DCOLORVALUE *)&v13.r = (struct _D3DCOLORVALUE)_xmm;
        }
        else
        {
LABEL_23:
          *(struct _D3DCOLORVALUE *)&v13.r = (struct _D3DCOLORVALUE)_xmm;
        }
      }
      else
      {
        *(struct _D3DCOLORVALUE *)&v13.r = (struct _D3DCOLORVALUE)_xmm;
      }
      *(struct _D3DCOLORVALUE *)&v23.r = *(struct _D3DCOLORVALUE *)&v13.r;
      goto LABEL_26;
    }
LABEL_25:
    v23.a = FLOAT_1_0;
LABEL_26:
    v18 = CSolidColorBrush::CreateFromColor(&v21, this[3], &v23);
    v9 = v18;
    if ( v18 >= 0 )
    {
      v7 = v21;
      v19 = CDrawingContext::DrawShape((CDrawingContext *)this, a3, v21);
      v9 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x1FA9u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1FA7u);
      v7 = v21;
    }
  }
  if ( v28 )
    CDrawingContext::PopRenderOptionsInternal((CDrawingContext *)this, 1);
  if ( v7 )
    CMILCOMBase::InternalRelease(v7);
LABEL_34:
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v9;
}
