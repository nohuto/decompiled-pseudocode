/*
 * XREFs of ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x18007D890
 * Callers:
 *     ?DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilCompositingMode@@@Z @ 0x18006A530 (-DrawD2DBitmapInternal@CDrawingContext@@AEAAJPEAUID2D1Bitmap1@@PEBUMilRectF@@1MW4Enum@MilComposi.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059E20 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z @ 0x180064060 (-GetWorldTransform3x2@CDrawingContext@@EEBAXPEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x18007C814 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x18007CA60 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800AD684 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 *     Template_ffff @ 0x180125254 (Template_ffff.c)
 *     ?DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180175FEC (-DrawBitmapAsCommandList@CD2DContext@@AEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap@@PEBUD2D_RECT_F.c)
 */

__int64 __fastcall CD2DContext::DrawBitmap(
        struct ID2D1PrivateCompositorRenderer **this,
        const struct ID2DContextOwner *a2,
        struct ID2D1Bitmap1 *a3,
        const struct D2D_RECT_F *a4,
        const struct D2D_RECT_F *a5,
        float a6,
        enum D2D1_ANTIALIAS_MODE a7,
        enum D2D1_INTERPOLATION_MODE a8,
        enum D2D1_PRIMITIVE_BLEND a9)
{
  const struct D2D_RECT_F *v9; // r15
  __int64 v13; // rcx
  void (__fastcall *v14)(CDrawingContext *, struct D2D_MATRIX_3X2_F *); // rax
  __int64 v16; // r15
  __int64 v17; // rcx
  __int64 i; // r14
  __int64 v19; // rsi
  unsigned int v20; // eax
  __int64 v21; // rcx
  struct D2D_RECT_F v22; // xmm0
  int v23; // ecx
  int v24; // r8d
  int v25; // r9d
  unsigned int v26; // eax
  __int64 v27; // rcx
  struct D2D_RECT_F v28; // [rsp+50h] [rbp-81h] BYREF
  __int64 v29; // [rsp+60h] [rbp-71h] BYREF
  int v30; // [rsp+68h] [rbp-69h]
  int v31; // [rsp+6Ch] [rbp-65h]
  __int64 v32; // [rsp+70h] [rbp-61h]
  __int64 v33; // [rsp+78h] [rbp-59h]
  __int64 v34; // [rsp+80h] [rbp-51h]
  int v35; // [rsp+88h] [rbp-49h]
  int v36; // [rsp+8Ch] [rbp-45h]
  __int64 v37; // [rsp+90h] [rbp-41h]
  int v38; // [rsp+98h] [rbp-39h]
  __int64 v39; // [rsp+9Ch] [rbp-35h]
  struct D2D_MATRIX_3X2_F v40; // [rsp+B0h] [rbp-21h] BYREF

  v9 = a4;
  *(_QWORD *)&v28.left = a4;
  CD2DContext::FlushDrawList(this);
  if ( !*((_BYTE *)this + 400) )
  {
    v16 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v13, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *))(*(_QWORD *)this[5] + 384LL))(this[5]);
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v17, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 54); v16 = v19 )
    {
      v19 = *((_QWORD *)this[24] + i);
      if ( v16 )
        *(_BYTE *)(v16 + 48) = 0;
      if ( !*(_BYTE *)(v19 + 48) )
      {
        *(_QWORD *)(v19 + 16) = this;
        CD2DContext::D2DSetTargetInternal((CD2DContext *)this, (struct CD2DTarget *)v19);
        *(_BYTE *)(v19 + 48) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v19);
      }
      i = (unsigned int)(i + 1);
    }
    v9 = *(const struct D2D_RECT_F **)&v28.left;
    *((_BYTE *)this + 400) = 1;
  }
  *((_BYTE *)this + 401) = 1;
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v20 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v21, &EVTDESC_ETWGUID_DRAWEVENT_Start, 14LL, v20);
  }
  v14 = *(void (__fastcall **)(CDrawingContext *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)a2 + 8LL);
  if ( v14 == CDrawingContext::GetWorldTransform3x2 )
    CDrawingContext::GetWorldTransform3x2(a2, &v40);
  else
    v14(a2, &v40);
  (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct D2D_MATRIX_3X2_F *))(*(_QWORD *)this[5] + 240LL))(
    this[5],
    &v40);
  if ( a9 != *((_DWORD *)this + 65) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 624LL))(
      this[5],
      (unsigned int)a9);
    *((_DWORD *)this + 65) = a9;
  }
  if ( a7 != *((_DWORD *)this + 64) )
  {
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, _QWORD))(*(_QWORD *)this[5] + 256LL))(
      this[5],
      (unsigned int)a7);
    *((_DWORD *)this + 64) = a7;
  }
  if ( a5 )
  {
    if ( EventEnabled(Microsoft_Windows_Dwm_CoreHandle, &EVTDESC_ETWGUID_DRAWEVENT) )
    {
      v29 = *(_QWORD *)&v40.m11;
      v30 = 0;
      v31 = 0;
      v36 = 0;
      v38 = 0;
      v22 = *a5;
      v39 = 1065353216LL;
      v32 = *(_QWORD *)&v40.m[1][0];
      v28 = v22;
      v33 = 0LL;
      v37 = *(_QWORD *)&v40.m[2][0];
      v34 = 0LL;
      v35 = 1065353216;
      CMILMatrix::Transform2DBoundsHelper<0>((__int64)&v29, (__int64)&v28, &v40.m11);
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
        Template_ffff(
          v23,
          (unsigned int)&EVTDESC_ETWGUID_DRAWEVENT,
          v24,
          v25,
          SLOBYTE(v40.m[1][0]),
          SLOBYTE(v40.m[1][1]));
    }
  }
  if ( CCommonRegistryData::m_fEnableHighColor )
    CD2DContext::DrawBitmapAsCommandList((CD2DContext *)this, a2, a3, v9, a5, a6, a7, a8, a9);
  else
    (*(void (__fastcall **)(struct ID2D1PrivateCompositorRenderer *, struct ID2D1Bitmap1 *, const struct D2D_RECT_F *))(*(_QWORD *)this[5] + 680LL))(
      this[5],
      a3,
      a5);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
  {
    v26 = (*(__int64 (__fastcall **)(const struct ID2DContextOwner *))(*(_QWORD *)a2 + 24LL))(a2);
    Template_qq(v27, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 14LL, v26);
  }
  return 0LL;
}
