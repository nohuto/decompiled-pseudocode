/*
 * XREFs of ?UpdateHWDrawListCache@CSpriteDrawListGenerator@@AEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133B98
 * Callers:
 *     ?UpdateDrawListCache@CSpriteDrawListGenerator@@QEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCDrawListCache@@@Z @ 0x180133AE4 (-UpdateDrawListCache@CSpriteDrawListGenerator@@QEAAJ_KAEBUCCommonDrawListCacheParameters@@PEAVCD.c)
 * Callees:
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180001748 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z @ 0x1800586B8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N3@Z.c)
 *     ?Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z @ 0x18005B910 (-Get2DScaleDimensions@CMILMatrix@@QEBAXPEAM0@Z.c)
 *     ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x180096168 (-Reset@CDrawListPrimitiveBuilder@@QEAAXXZ.c)
 *     ?Clear@?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ @ 0x1800B247C (-Clear@-$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?Premultiply@@YA?AU_D3DCOLORVALUE@@AEBU1@@Z @ 0x1800C019C (-Premultiply@@YA-AU_D3DCOLORVALUE@@AEBU1@@Z.c)
 *     ??4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z @ 0x180110A0C (--4Matrix3x3@@QEAAAEAV0@AEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??0CoordMap@@QEAA@XZ @ 0x180110FDC (--0CoordMap@@QEAA@XZ.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x180111044 (--1CoordMap@@QEAA@XZ.c)
 *     ??$New@VCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@AEAPEAV2@AEAV3@@?$IfaceBuffer@UIRenderingEffect@@$0DA@@@QEAAPEAVCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@01@Z @ 0x180111078 (--$New@VCCommonRenderingEffect@@AEAPEAVIImageSource@@AEAVSamplerMode@@AEAPEAV2@AEAV3@@-$IfaceBuf.c)
 *     ?End@CDrawListPrimitiveBuilder@@QEAAJXZ @ 0x180111108 (-End@CDrawListPrimitiveBuilder@@QEAAJXZ.c)
 *     ?Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18011115C (-Insert@CDrawListPrimitiveBuilder@@QEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributes.c)
 *     ?Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV?$SmartIfaceBuffer@UIRenderingEffect@@$0DA@URenderingEffectResourceManagement@@@@@Z @ 0x1801112A0 (-Begin@CDrawListPrimitiveBuilder@@QEAAXAEBUPrimitiveBuilderSetupParams@@$$QEAV-$SmartIfaceBuffer.c)
 *     ?ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z @ 0x180133934 (-ComputeCoordMap@CSpriteDrawListGenerator@@CAJAEBUCCommonBrushParameters@@PEAVCoordMap@@@Z.c)
 */

__int64 __fastcall CSpriteDrawListGenerator::UpdateHWDrawListCache(
        CSpriteDrawListGenerator *this,
        __int64 a2,
        const struct CCommonDrawListCacheParameters *a3,
        struct CDrawListCache *a4)
{
  char *v4; // rbx
  CDrawListPrimitiveBuilder *v8; // r14
  void (__fastcall ***v9)(_QWORD, __int64); // rsi
  int v10; // eax
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rdx
  void (__fastcall ***v14)(_QWORD, _QWORD); // rbx
  int v15; // eax
  unsigned int v16; // eax
  int v17; // eax
  int v18; // eax
  bool v19; // cl
  int v20; // eax
  __int16 v22; // [rsp+40h] [rbp-C0h] BYREF
  char v23; // [rsp+42h] [rbp-BEh]
  __int16 v24; // [rsp+44h] [rbp-BCh] BYREF
  char v25; // [rsp+46h] [rbp-BAh]
  void (__fastcall ***v26)(_QWORD, __int64); // [rsp+48h] [rbp-B8h] BYREF
  float v27; // [rsp+50h] [rbp-B0h] BYREF
  void (__fastcall ***v28)(_QWORD, __int64); // [rsp+58h] [rbp-A8h] BYREF
  __int128 v29; // [rsp+60h] [rbp-A0h] BYREF
  void (__fastcall ***v30)(_QWORD, _QWORD); // [rsp+70h] [rbp-90h]
  int v31; // [rsp+78h] [rbp-88h]
  char v32; // [rsp+7Ch] [rbp-84h]
  bool v33; // [rsp+7Dh] [rbp-83h]
  struct D2D_RECT_F v34; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v35; // [rsp+90h] [rbp-70h]
  int v36; // [rsp+98h] [rbp-68h]
  char v37; // [rsp+9Ch] [rbp-64h]
  struct _D3DCOLORVALUE v38[3]; // [rsp+A0h] [rbp-60h] BYREF
  struct _D3DCOLORVALUE v39; // [rsp+D0h] [rbp-30h] BYREF
  struct D2D_RECT_F v40; // [rsp+E0h] [rbp-20h] BYREF
  struct _D3DCOLORVALUE v41; // [rsp+100h] [rbp+0h] BYREF
  __int64 v42[3]; // [rsp+120h] [rbp+20h] BYREF
  int v43[6]; // [rsp+138h] [rbp+38h] BYREF
  __int16 v44; // [rsp+150h] [rbp+50h]
  char v45; // [rsp+152h] [rbp+52h]
  __int64 v46[3]; // [rsp+190h] [rbp+90h] BYREF
  int v47[6]; // [rsp+1A8h] [rbp+A8h] BYREF
  __int16 v48; // [rsp+1C0h] [rbp+C0h]
  char v49; // [rsp+1C2h] [rbp+C2h]
  char v50; // [rsp+201h] [rbp+101h]
  char v51; // [rsp+203h] [rbp+103h]
  _OWORD v52[2]; // [rsp+210h] [rbp+110h] BYREF
  int v53[9]; // [rsp+230h] [rbp+130h] BYREF
  __int128 v54; // [rsp+254h] [rbp+154h]
  int v55[9]; // [rsp+264h] [rbp+164h] BYREF
  __int128 v56; // [rsp+288h] [rbp+188h]
  _BYTE v57[464]; // [rsp+2A0h] [rbp+1A0h] BYREF

  v4 = (char *)this - 112;
  if ( !this )
    v4 = 0LL;
  v8 = *(CDrawListPrimitiveBuilder **)a3;
  v26 = 0LL;
  v9 = 0LL;
  v28 = 0LL;
  memset_0(&v29, 0, 0x20uLL);
  memset_0(&v34, 0, 0x20uLL);
  memset_0(v52, 0, 0x88uLL);
  *(_QWORD *)&v38[0].r = 0LL;
  v44 = 1;
  v45 = 0;
  v48 = 1;
  v49 = 0;
  v24 = 1;
  v25 = 0;
  v22 = 1;
  v23 = 0;
  CoordMap::CoordMap((CoordMap *)v57);
  v10 = (*(__int64 (__fastcall **)(char *, char *, _QWORD, struct D2D_RECT_F *, void (__fastcall ****)(_QWORD, __int64)))(*(_QWORD *)v4 + 168LL))(
          v4,
          (char *)a3 + 88,
          0LL,
          &v40,
          &v28);
  v11 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x91u);
  }
  else
  {
    v12 = CSpriteDrawListGenerator::ComputeCoordMap(&v40, (struct CoordMap *)v57);
    v11 = v12;
    if ( v12 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x93u);
    }
    else
    {
      if ( v42[0] )
      {
        v52[0] = _xmm;
        Matrix3x3::operator=(v53, v43);
        v24 = v44;
        v25 = v45;
        v54 = _xmm;
      }
      else
      {
        v52[0] = *(struct _D3DCOLORVALUE *)&Premultiply(&v39, &v41)->r;
      }
      if ( v46[0] )
      {
        Matrix3x3::operator=(v55, v47);
        v22 = v48;
        v23 = v49;
        v56 = _xmm;
      }
      v14 = (void (__fastcall ***)(_QWORD, _QWORD))*((_QWORD *)a3 + 10);
      if ( v28 )
      {
        if ( v14 )
        {
          v15 = CShape::Combine((__int64)v14, v13, (__int64)v28, 0LL, 1, &v26);
          v11 = v15;
          if ( v15 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0xB7u);
            v9 = v26;
            goto LABEL_27;
          }
          v9 = v26;
          v14 = v26;
        }
        else
        {
          v14 = v28;
        }
      }
      CMILMatrix::Get2DScaleDimensions(
        (const struct CCommonDrawListCacheParameters *)((char *)a3 + 8),
        &v27,
        (float *)&v26);
      v16 = *((_DWORD *)a3 + 24);
      v33 = v14 == *((void (__fastcall ****)(_QWORD, _QWORD))a3 + 10);
      v32 = *((_BYTE *)a3 + 104);
      *(float *)&v29 = v27;
      *(_QWORD *)((char *)&v29 + 4) = __PAIR64__(v16, (unsigned int)v26);
      v30 = v14;
      v36 = 50529027;
      v35 = v57;
      v37 |= 3u;
      v31 = (v50 != 0 ? 2 : 0) | (v51 != 0 ? 0x10 : 0) | 0x20;
      v34 = v40;
      IfaceBuffer<IRenderingEffect,48>::New<CCommonRenderingEffect,IImageSource * &,SamplerMode &,IImageSource * &,SamplerMode &>(
        (__int64)v38,
        v42,
        &v24,
        v46,
        &v22);
      CDrawListPrimitiveBuilder::Begin(v8, &v29, v38);
      v17 = CDrawListPrimitiveBuilder::Insert(v8, &v34, (const struct PrimitiveVertexAttributesDesc *)v52, 0LL);
      v11 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0xF2u);
      }
      else
      {
        v18 = CDrawListPrimitiveBuilder::End(v8);
        v11 = v18;
        if ( v18 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0xF4u);
        }
        else
        {
          if ( !*((_QWORD *)a3 + 10) || (v19 = 1, !*(_DWORD *)(*(_QWORD *)a3 + 144LL)) )
            v19 = 0;
          v20 = CDrawListCache::Update(
                  a4,
                  a2,
                  *(struct CDrawListEntry ***)(*(_QWORD *)a3 + 80LL),
                  *(_DWORD *)(*(_QWORD *)a3 + 104LL),
                  (enum D2D1_ANTIALIAS_MODE)*((_DWORD *)a3 + 24),
                  v19,
                  *((_BYTE *)a3 + 104));
          v11 = v20;
          if ( v20 < 0 )
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xFDu);
        }
      }
    }
  }
LABEL_27:
  CDrawListPrimitiveBuilder::Reset(v8);
  if ( v28 )
    (**v28)(v28, 1LL);
  if ( v9 )
    (**v9)(v9, 1LL);
  CoordMap::~CoordMap((CoordMap *)v57);
  SmartIfaceBuffer<IRenderingEffect,48,RenderingEffectResourceManagement>::Clear((__int64 *)v38);
  return v11;
}
