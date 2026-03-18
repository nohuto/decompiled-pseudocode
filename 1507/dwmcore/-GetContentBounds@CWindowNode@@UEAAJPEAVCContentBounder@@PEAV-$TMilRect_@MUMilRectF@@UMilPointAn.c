/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007C1A0
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18003A510 (-PreSubgraph@CPreComputeContext@@MEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180008F80 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x180048420 (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?ShiftLeft@?$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z @ 0x18005F08C (-ShiftLeft@-$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z @ 0x180079B20 (-ProcessReadyFlipExImages@CWindowNode@@AEAAXPEAPEAVCCompositionSurfaceBitmap@@@Z.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180079C3C (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x18007C46C (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x180104CD4 (--_GCDxAccumulationContext@@QEAAPEAXI@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x180105094 (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, struct CShape *a3)
{
  float *v3; // r12
  __int64 v4; // rsi
  unsigned int v6; // r14d
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned int v9; // edx
  struct CCompositionSurfaceBitmap *v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  int SpriteClipShape; // eax
  _QWORD *v15; // rsi
  __int64 v16; // rdi
  struct CResource *v17; // rsi
  __int64 i; // r12
  struct CResource *v19; // rsi
  int v20; // eax
  CDxAccumulationContext *v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rbx
  struct CShape *DxClipShapeNoRef; // rax
  struct CShape *v25; // rax
  unsigned int v26; // [rsp+20h] [rbp-78h]
  struct CShape *v27; // [rsp+30h] [rbp-68h] BYREF
  struct CCompositionSurfaceBitmap *v28; // [rsp+38h] [rbp-60h] BYREF
  float v29[4]; // [rsp+40h] [rbp-58h] BYREF

  v27 = a3;
  *((_QWORD *)a3 + 1) = 0LL;
  v3 = (float *)a3;
  *(_QWORD *)a3 = 0LL;
  v4 = *((_QWORD *)this + 47);
  v28 = 0LL;
  v6 = 0;
  if ( v4 )
  {
    v20 = (*(__int64 (__fastcall **)(__int64, __int64, char *, struct CShape *))(*(_QWORD *)v4 + 112LL))(
            v4,
            a2,
            (char *)this + 148,
            a3);
    v6 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xB68u);
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0xB1Fu);
    return v6;
  }
  v7 = (unsigned int)(*((_DWORD *)this + 268) - 1);
  v8 = (int)v7;
  if ( (int)v7 >= 0 )
  {
    v15 = (_QWORD *)((char *)this + 1048);
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*v15 + 8 * v8) + 264LL))(*(_QWORD *)(*v15 + 8 * v8))
         && !*((_BYTE *)this + 1244) )
    {
      v7 = (unsigned int)(v7 - 1);
      if ( --v8 < 0 )
        goto LABEL_4;
    }
    v16 = *((_QWORD *)this + 130);
    if ( v16 )
    {
      v17 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v16 + 232LL))(*((_QWORD *)this + 130));
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 130) + 248LL))(*((_QWORD *)this + 130), this);
      CResource::UnRegisterNotifierInternal(this, v17);
      v15 = (_QWORD *)((char *)this + 1048);
    }
    *((_QWORD *)this + 130) = *(_QWORD *)(*v15 + 8 * v7);
    if ( v8 > 0 )
    {
      for ( i = 0LL; i < v8; ++i )
      {
        v19 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v15 + 8 * i) + 232LL))(*(_QWORD *)(*v15 + 8 * i));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(*((_QWORD *)this + 131) + 8 * i) + 248LL))(
          *(_QWORD *)(*((_QWORD *)this + 131) + 8 * i),
          this);
        CResource::UnRegisterNotifierInternal(this, v19);
        v15 = (_QWORD *)((char *)this + 1048);
        *(_QWORD *)(*((_QWORD *)this + 131) + 8 * i) = 0LL;
      }
      v3 = (float *)v27;
    }
    DynArray<ISpriteImage *,0>::ShiftLeft((__int64)v15, v7 + 1);
  }
LABEL_4:
  CWindowNode::ProcessReadyFlipExImages(this, &v28);
  v10 = v28;
  if ( v28 )
  {
    CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 150));
    *((_QWORD *)this + 150) = v10;
  }
  if ( *((_QWORD *)this + 150) )
  {
    v21 = (CDxAccumulationContext *)*((_QWORD *)this + 156);
    if ( v21 )
    {
      CDxAccumulationContext::`scalar deleting destructor'(v21, v9);
      *((_QWORD *)this + 156) = 0LL;
    }
  }
  if ( !*((_BYTE *)this + 1244) && *((_QWORD *)this + 130) )
  {
    SpriteClipShape = CWindowNode::GetSpriteClipShape(this, &v27);
    v6 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      v26 = 2939;
      goto LABEL_41;
    }
    SpriteClipShape = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 130), v27, v29, 0LL, 0LL);
    v6 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      v26 = 2943;
      goto LABEL_41;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, v29);
  }
  v11 = *((_QWORD *)this + 150);
  if ( v11 )
  {
    if ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v11 + 40)) )
      return v6;
    v22 = *((_QWORD *)this + 150);
    v23 = v22 + 40;
    if ( !v22 )
      v23 = 0LL;
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    SpriteClipShape = CWindowNode::GetRenderBounds(this, v23, DxClipShapeNoRef, v29, 0LL, 0LL);
    v6 = SpriteClipShape;
    if ( SpriteClipShape >= 0 )
      goto LABEL_42;
    v26 = 2954;
LABEL_41:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, SpriteClipShape, v26);
    return v6;
  }
  v12 = *((_QWORD *)this + 147);
  if ( v12 )
  {
    v25 = CWindowNode::GetDxClipShapeNoRef(this);
    SpriteClipShape = CWindowNode::GetRenderBounds(this, v12 + 8, v25, v29, 0LL, 0LL);
    v6 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      v26 = 2963;
      goto LABEL_41;
    }
LABEL_42:
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v3, v29);
  }
  return v6;
}
