/*
 * XREFs of ?GetBrushRealizationInternal@CTileBrush@@MEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180085EA0
 * Callers:
 *     ?GetBrushRealizationInternal@CImageBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z @ 0x180085990 (-GetBrushRealizationInternal@CImageBrush@@UEAAJPEBUBrushContext@@PEAPEAVCMILBrush@@@Z.c)
 * Callees:
 *     ?CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizontalAlignment@@W43MilVerticalAlignment@@W43MilBrushMappingMode@@4PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@5MMPEAV8@6PEAV2@77PEAH@Z @ 0x180013D30 (-CalculateTileBrushMapping@CTileBrushUtils@@SAXPEBVCMILMatrix@@0W4Enum@MilStretch@@W43MilHorizon.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004E0A0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z @ 0x180080E24 (-SetBitmap@CMILBrushBitmap@@QEAAJPEAVIBitmapSource@@@Z.c)
 *     ?SetWrapMode@CMILBrushBitmap@@QEAAJW4Enum@MilBitmapWrapMode@@PEAU_D3DCOLORVALUE@@@Z @ 0x180080EB8 (-SetWrapMode@CMILBrushBitmap@@QEAAJW4Enum@MilBitmapWrapMode@@PEAU_D3DCOLORVALUE@@@Z.c)
 *     ?SetBitmapToXSpaceTransform@CMILBrushBitmap@@QEAAXPEBVCBaseMatrix@@W4XSpaceDefinition@@@Z @ 0x180080F0C (-SetBitmapToXSpaceTransform@CMILBrushBitmap@@QEAAXPEBVCBaseMatrix@@W4XSpaceDefinition@@@Z.c)
 *     ?SetSourceModifications@CMILBrushBitmap@@QEAAJU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEBU_D3DCOLORVALUE@@1@Z @ 0x180080F54 (-SetSourceModifications@CMILBrushBitmap@@QEAAJU-$TMILFlagsEnum@W4FlagsEnum@MilSourceModification.c)
 *     ?GetTilePropertyCurrentValues@CTileBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMappingMode@@2PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@3PEAW43MilStretch@@PEAW43MilTileMode@@PEAW43MilHorizontalAlignment@@PEAW43MilVerticalAlignment@@PEAU?$TMILFlagsEnum@W4FlagsEnum@MilSourceModification@@@@PEAVCColorKey@@@Z @ 0x180085C44 (-GetTilePropertyCurrentValues@CTileBrush@@QEBAJPEAMPEAPEBVCMILMatrix@@1PEAW4Enum@MilBrushMapping.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@W4Enum@MilTileMode@@PEAPEAVIBitmapSource@@PEAV4@PEAHPEAW4XSpaceDefinition@@@Z @ 0x18012172C (-GetIntermediateBaseTile@CTileBrushUtils@@SAJPEAVCTileBrush@@PEBUBrushContext@@PEBVCMILMatrix@@2.c)
 */

__int64 __fastcall CTileBrush::GetBrushRealizationInternal(
        CTileBrush *this,
        const struct BrushContext *a2,
        struct CMILBrush **a3)
{
  __int64 v6; // rax
  __int64 (__fastcall *v7)(CTileBrush *, int *); // rbx
  int v8; // eax
  unsigned int v9; // edi
  int TilePropertyCurrentValues; // eax
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  __int64 v17; // rcx
  int v18; // eax
  int v19; // eax
  struct CMILBrush *v20; // rsi
  int IntermediateBaseTile; // eax
  int v23; // [rsp+90h] [rbp-80h] BYREF
  int v24; // [rsp+94h] [rbp-7Ch] BYREF
  int v25; // [rsp+98h] [rbp-78h] BYREF
  int v26; // [rsp+9Ch] [rbp-74h] BYREF
  int v27; // [rsp+A0h] [rbp-70h] BYREF
  struct IBitmapSource *v28; // [rsp+A8h] [rbp-68h] BYREF
  int v29; // [rsp+B0h] [rbp-60h] BYREF
  int v30; // [rsp+B4h] [rbp-5Ch] BYREF
  int v31; // [rsp+B8h] [rbp-58h] BYREF
  int v32; // [rsp+BCh] [rbp-54h] BYREF
  int v33; // [rsp+C0h] [rbp-50h] BYREF
  int v34; // [rsp+C4h] [rbp-4Ch] BYREF
  int v35; // [rsp+C8h] [rbp-48h] BYREF
  int v36; // [rsp+CCh] [rbp-44h] BYREF
  unsigned int v37; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v38; // [rsp+D8h] [rbp-38h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-30h] BYREF
  __int128 v40; // [rsp+E8h] [rbp-28h] BYREF
  __int128 v41; // [rsp+F8h] [rbp-18h] BYREF
  char v42; // [rsp+108h] [rbp-8h]
  __int128 v43; // [rsp+110h] [rbp+0h] BYREF
  __int128 v44; // [rsp+120h] [rbp+10h] BYREF
  __int128 v45; // [rsp+130h] [rbp+20h] BYREF
  __int128 v46; // [rsp+140h] [rbp+30h] BYREF
  _OWORD v47[4]; // [rsp+150h] [rbp+40h] BYREF
  _OWORD v48[4]; // [rsp+190h] [rbp+80h] BYREF
  _OWORD v49[4]; // [rsp+1D0h] [rbp+C0h] BYREF
  _BYTE v50[64]; // [rsp+210h] [rbp+100h] BYREF

  v43 = 0uLL;
  *(_QWORD *)&v40 = 0x3F8000003F800000LL;
  *((_QWORD *)&v40 + 1) = 0x3F8000003F800000LL;
  v6 = *(_QWORD *)this;
  v38 = 0LL;
  v39 = 0LL;
  v41 = 0uLL;
  v7 = *(__int64 (__fastcall **)(CTileBrush *, int *))(v6 + 160);
  v42 = 0;
  v28 = 0LL;
  v23 = 0;
  v25 = 0;
  v8 = v7(this, &v25);
  v9 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x7Fu);
    goto LABEL_21;
  }
  if ( !v25 )
    goto LABEL_28;
  TilePropertyCurrentValues = CTileBrush::GetTilePropertyCurrentValues(
                                (__int64 *)this,
                                (float *)&v35,
                                &v38,
                                &v39,
                                (__int64)&v34,
                                (__int64)&v27,
                                &v44,
                                &v46,
                                (__int64)&v30,
                                (__int64)&v24,
                                (__int64)&v36,
                                (__int64)&v32,
                                &v29,
                                &v40);
  v9 = TilePropertyCurrentValues;
  if ( TilePropertyCurrentValues < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, TilePropertyCurrentValues, 0x95u);
    goto LABEL_21;
  }
  v11 = (*(__int64 (__fastcall **)(CTileBrush *, unsigned int *, int *))(*(_QWORD *)this + 168LL))(this, &v37, &v33);
  v9 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x9Au);
    goto LABEL_21;
  }
  v12 = v27;
  if ( v27 != 1 )
    goto LABEL_9;
  v13 = (*(__int64 (__fastcall **)(CTileBrush *, const struct BrushContext *, __int128 *))(*(_QWORD *)this + 176LL))(
          this,
          a2,
          &v43);
  v9 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0xA4u);
    goto LABEL_21;
  }
  if ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)&v43) )
  {
LABEL_28:
    v23 = 1;
    goto LABEL_26;
  }
  v12 = v27;
  v45 = v43;
LABEL_9:
  CTileBrushUtils::CalculateTileBrushMapping(
    v38,
    v39,
    v30,
    v36,
    v32,
    v34,
    v12,
    (__int64)a2 + 136,
    (__int64)&v45,
    v37,
    v33,
    (__int64)&v44,
    (__int64)&v46,
    v47,
    v48,
    (struct D2DMatrix *)v50,
    &v23);
  if ( !v23 )
  {
    v14 = (*(__int64 (__fastcall **)(CTileBrush *, const struct BrushContext *, _OWORD *, _OWORD *, __int128 *, int, int *, int *))(*(_QWORD *)this + 184LL))(
            this,
            a2,
            v47,
            v48,
            &v44,
            v24,
            &v31,
            &v23);
    v9 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0xD7u);
      goto LABEL_21;
    }
    if ( !v23 )
    {
      if ( v31 )
      {
        IntermediateBaseTile = CTileBrushUtils::GetIntermediateBaseTile(
                                 (_DWORD)this,
                                 (_DWORD)a2,
                                 (unsigned int)v47,
                                 (unsigned int)v48,
                                 (__int64)&v44,
                                 v24,
                                 (__int64)&v28,
                                 (__int64)v49,
                                 (__int64)&v23,
                                 (__int64)&v26);
        v9 = IntermediateBaseTile;
        if ( IntermediateBaseTile < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, IntermediateBaseTile, 0xEDu);
          goto LABEL_21;
        }
      }
      else
      {
        v15 = (*(__int64 (__fastcall **)(CTileBrush *, const struct BrushContext *, char *, _OWORD *, _OWORD *, __int128 *, int, struct IBitmapSource **, _OWORD *, int *, int *))(*(_QWORD *)this + 200LL))(
                this,
                a2,
                (char *)a2 + 4,
                v47,
                v48,
                &v44,
                v24,
                &v28,
                v49,
                &v23,
                &v26);
        v9 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x101u);
          goto LABEL_21;
        }
      }
      if ( !v23 )
      {
        v16 = CMILBrushBitmap::SetBitmap((CTileBrush *)((char *)this + 96), v28);
        v9 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x115u);
        }
        else
        {
          CMILBrushBitmap::SetBitmapToXSpaceTransform((__int64)this + 96, v49, v26);
          v18 = CMILBrushBitmap::SetWrapMode(v17, 0);
          v9 = v18;
          if ( v18 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x11Cu);
          }
          else
          {
            v19 = CMILBrushBitmap::SetSourceModifications((__int64)this + 96, v29, &v40, &v41);
            v9 = v19;
            if ( v19 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x120u);
            }
            else
            {
              *((_DWORD *)this + 89) = v35;
              if ( this == (CTileBrush *)-96LL )
                v20 = 0LL;
              else
                v20 = (CTileBrush *)((char *)this + 120);
              *a3 = v20;
            }
          }
        }
LABEL_21:
        if ( !v23 )
          goto LABEL_22;
      }
    }
  }
LABEL_26:
  *a3 = 0LL;
LABEL_22:
  if ( v28 )
    (*(void (__fastcall **)(struct IBitmapSource *))(*(_QWORD *)v28 + 16LL))(v28);
  return v9;
}
