/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800629E0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180050490 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C0D0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x18005EE4C (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x18005EEA8 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180062CA8 (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ShiftLeft@?$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z @ 0x1800B086C (-ShiftLeft@-$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x18012357C (--_GCDxAccumulationContext@@QEAAPEAXI@Z.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, struct CShape *a3)
{
  unsigned int v3; // r14d
  float *v4; // r12
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rbx
  int SpriteClipShape; // eax
  __int64 *v15; // rsi
  __int64 v16; // rdi
  __int64 v17; // rax
  struct CResource *v18; // rsi
  __int64 v19; // r12
  struct CResource *v20; // rsi
  int v21; // eax
  __int64 v22; // r15
  __int64 i; // r13
  __int64 v24; // rbx
  __int64 v25; // rdi
  unsigned int v26; // ebx
  unsigned int v27; // ebx
  CDxAccumulationContext *v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rbx
  struct CShape *DxClipShapeNoRef; // rax
  struct CShape *v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-68h]
  struct CShape *v34; // [rsp+30h] [rbp-58h] BYREF
  float v35[4]; // [rsp+38h] [rbp-50h] BYREF

  v3 = 0;
  v34 = a3;
  *((_DWORD *)a3 + 3) = 0;
  v4 = (float *)a3;
  *((_DWORD *)a3 + 2) = 0;
  *((_DWORD *)a3 + 1) = 0;
  *(_DWORD *)a3 = 0;
  v6 = *((_QWORD *)this + 45);
  if ( v6 )
  {
    v21 = (*(__int64 (__fastcall **)(_QWORD, __int64, char *, struct CShape *))(*(_QWORD *)v6 + 120LL))(
            *((_QWORD *)this + 45),
            a2,
            (char *)this + 132,
            a3);
    v3 = v21;
    if ( v21 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xACEu);
  }
  if ( (v3 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xB20u);
    return v3;
  }
  v7 = (unsigned int)(*((_DWORD *)this + 256) - 1);
  v8 = (int)v7;
  if ( (int)v7 >= 0 )
  {
    v15 = (__int64 *)((char *)this + 1000);
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*v15 + 8 * v8) + 168LL))(*(_QWORD *)(*v15 + 8 * v8))
         && !*((_BYTE *)this + 1196) )
    {
      v7 = (unsigned int)(v7 - 1);
      if ( --v8 < 0 )
        goto LABEL_4;
    }
    v16 = *((_QWORD *)this + 124);
    if ( v16 )
    {
      v18 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 136LL))(*((_QWORD *)this + 124));
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 124) + 152LL))(*((_QWORD *)this + 124), this);
      CResource::UnRegisterNotifierInternal(this, v18);
      v15 = (__int64 *)((char *)this + 1000);
    }
    v17 = *v15;
    *(_QWORD *)v35 = 0LL;
    *((_QWORD *)this + 124) = *(_QWORD *)(v17 + 8 * v7);
    if ( v8 > 0 )
    {
      v19 = *(_QWORD *)v35;
      do
      {
        v20 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v15 + 8 * v19) + 136LL))(*(_QWORD *)(*v15 + 8 * v19));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(*((_QWORD *)this + 125) + 8 * v19) + 152LL))(
          *(_QWORD *)(*((_QWORD *)this + 125) + 8 * v19),
          this);
        CResource::UnRegisterNotifierInternal(this, v20);
        v15 = (__int64 *)((char *)this + 1000);
        *(_QWORD *)(*((_QWORD *)this + 125) + 8 * v19++) = 0LL;
      }
      while ( v19 < v8 );
      v4 = (float *)v34;
    }
    DynArray<ISpriteImage *,0>::ShiftLeft(v15, (unsigned int)(v7 + 1));
  }
LABEL_4:
  v9 = (unsigned int)(*((_DWORD *)this + 296) - 1);
  v10 = (int)v9;
  if ( (int)v9 >= 0 )
  {
    while ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 145)
                                                                                           + 8 * v10)
                                                                               + 48LL)) )
    {
      v9 = (unsigned int)(v9 - 1);
      if ( --v10 < 0 )
        goto LABEL_5;
    }
    v22 = 0LL;
    for ( i = *(_QWORD *)(*((_QWORD *)this + 145) + 8 * v9); v22 < v10; ++v22 )
    {
      v24 = *((_QWORD *)this + 145);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v24 + 8 * v22));
      *(_QWORD *)(v24 + 8 * v22) = 0LL;
    }
    v25 = (unsigned int)(v9 + 1);
    if ( (_DWORD)v25 && (v26 = *((_DWORD *)this + 296), (unsigned int)v25 <= v26) )
    {
      v27 = v26 - v25;
      if ( v27 )
        memmove(*((void **)this + 145), (const void *)(*((_QWORD *)this + 145) + 8 * v25), 8LL * v27);
      *((_DWORD *)this + 296) = v27;
    }
    else if ( (_DWORD)v25 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x236u);
    }
    if ( i )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 144));
      *((_QWORD *)this + 144) = i;
    }
  }
LABEL_5:
  if ( *((_QWORD *)this + 144) )
  {
    v28 = (CDxAccumulationContext *)*((_QWORD *)this + 150);
    if ( v28 )
    {
      CDxAccumulationContext::`scalar deleting destructor'(v28, a2);
      *((_QWORD *)this + 150) = 0LL;
    }
  }
  if ( !*((_BYTE *)this + 1196) && *((_QWORD *)this + 124) )
  {
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, &v34);
    v3 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      v33 = 2940;
      goto LABEL_55;
    }
    SpriteClipShape = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 124), v34, v35, 0LL, 0LL);
    v3 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      v33 = 2944;
      goto LABEL_55;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v4, v35);
  }
  v11 = *((_QWORD *)this + 144);
  if ( v11 )
  {
    if ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v11 + 48)) )
      return v3;
    v29 = *((_QWORD *)this + 144);
    if ( v29 )
      v30 = v29 + 48;
    else
      v30 = 0LL;
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    SpriteClipShape = CWindowNode::GetRenderBounds(this, v30, DxClipShapeNoRef, v35, 0LL, 0LL);
    v3 = SpriteClipShape;
    if ( SpriteClipShape >= 0 )
      goto LABEL_56;
    v33 = 2955;
LABEL_55:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SpriteClipShape, v33);
    return v3;
  }
  v12 = *((_QWORD *)this + 141);
  if ( v12 )
  {
    v32 = CWindowNode::GetDxClipShapeNoRef(this);
    SpriteClipShape = CWindowNode::GetRenderBounds(this, v12 + 8, v32, v35, 0LL, 0LL);
    v3 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      v33 = 2964;
      goto LABEL_55;
    }
LABEL_56:
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v4, v35);
  }
  return v3;
}
