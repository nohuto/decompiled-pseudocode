/*
 * XREFs of ?GetContentBounds@CWindowNode@@UEAAJPEAVCContentBounder@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180028D80
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062AD0 (-PreSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?ShiftLeft@?$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z @ 0x180022690 (-ShiftLeft@-$DynArray@PEAVISpriteImage@@$0A@@@QEAAJI@Z.c)
 *     ?GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ @ 0x1800266EC (-GetDxClipShapeNoRef@CWindowNode@@AEBAPEAVCShape@@XZ.c)
 *     ?GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z @ 0x180026748 (-GetSpriteClipShape@CWindowNode@@AEAAJPEAPEAVCShape@@@Z.c)
 *     ?GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N3@Z @ 0x180028FEC (-GetRenderBounds@CWindowNode@@AEBAJPEAVIImageSource@@PEAVCShape@@PEAV-$TMilRect_@MUMilRectF@@UMi.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008E09C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??_GCDxAccumulationContext@@QEAAPEAXI@Z @ 0x18013FE54 (--_GCDxAccumulationContext@@QEAAPEAXI@Z.c)
 *     ?HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1801427B0 (-HasContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 */

__int64 __fastcall CWindowNode::GetContentBounds(CWindowNode *this, __int64 a2, _QWORD *a3)
{
  __int64 v3; // r13
  unsigned int v6; // esi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rcx
  __int64 v13; // rbx
  int SpriteClipShape; // eax
  _QWORD *v16; // r12
  __int64 v17; // rcx
  struct CResource *v18; // rbx
  int v19; // eax
  struct CResource *v20; // rbx
  __int64 v21; // r12
  __int64 i; // r13
  __int64 v23; // rbx
  __int64 v24; // rbp
  unsigned int v25; // ebx
  unsigned int v26; // ebx
  CDxAccumulationContext *v27; // rcx
  int v28; // r9d
  __int64 v29; // rax
  __int64 v30; // rbx
  struct CShape *DxClipShapeNoRef; // rax
  struct CShape *v32; // rax
  unsigned int v33; // [rsp+20h] [rbp-68h]
  struct CShape *v34; // [rsp+30h] [rbp-58h] BYREF
  _BYTE v35[16]; // [rsp+38h] [rbp-50h] BYREF

  v3 = 0LL;
  a3[1] = 0LL;
  *a3 = 0LL;
  v6 = 0;
  v7 = *((_QWORD *)this + 38);
  if ( v7 )
  {
    v19 = (*(__int64 (__fastcall **)(__int64, __int64, char *, _QWORD *))(*(_QWORD *)v7 + 128LL))(
            v7,
            a2,
            (char *)this + 192,
            a3);
    v6 = v19;
    if ( v19 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0xBDDu);
  }
  if ( (v6 & 0x80000000) != 0 )
  {
    v33 = 2848;
    v28 = v6;
    goto LABEL_56;
  }
  v8 = (unsigned int)(*((_DWORD *)this + 208) - 1);
  v9 = (int)v8;
  if ( (int)v8 >= 0 )
  {
    v16 = (_QWORD *)((char *)this + 808);
    while ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)(*v16 + 8 * v9) + 176LL))(*(_QWORD *)(*v16 + 8 * v9))
         && !*((_BYTE *)this + 1004) )
    {
      v8 = (unsigned int)(v8 - 1);
      if ( --v9 < 0 )
        goto LABEL_4;
    }
    v17 = *((_QWORD *)this + 100);
    if ( v17 )
    {
      v18 = (struct CResource *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v17 + 144LL))(v17);
      (*(void (__fastcall **)(_QWORD, CWindowNode *))(**((_QWORD **)this + 100) + 160LL))(*((_QWORD *)this + 100), this);
      CResource::UnRegisterNotifierInternal(this, v18);
    }
    *((_QWORD *)this + 100) = *(_QWORD *)(*v16 + 8 * v8);
    if ( v9 > 0 )
    {
      do
      {
        v20 = (struct CResource *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*v16 + 8 * v3) + 144LL))(*(_QWORD *)(*v16 + 8 * v3));
        (*(void (__fastcall **)(_QWORD, CWindowNode *))(**(_QWORD **)(*v16 + 8 * v3) + 160LL))(
          *(_QWORD *)(*v16 + 8 * v3),
          this);
        CResource::UnRegisterNotifierInternal(this, v20);
        *(_QWORD *)(*v16 + 8 * v3++) = 0LL;
      }
      while ( v3 < v9 );
    }
    DynArray<ISpriteImage *,0>::ShiftLeft((__int64)this + 808, v8 + 1);
  }
LABEL_4:
  v10 = (unsigned int)(*((_DWORD *)this + 248) - 1);
  v11 = (int)v10;
  if ( (int)v10 >= 0 )
  {
    while ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(*(_QWORD *)(*((_QWORD *)this + 121)
                                                                                           + 8 * v11)
                                                                               + 120LL)) )
    {
      v10 = (unsigned int)(v10 - 1);
      if ( --v11 < 0 )
        goto LABEL_5;
    }
    v21 = 0LL;
    for ( i = *(_QWORD *)(*((_QWORD *)this + 121) + 8 * v10); v21 < v11; ++v21 )
    {
      v23 = *((_QWORD *)this + 121);
      CResource::UnRegisterNotifierInternal(this, *(struct CResource **)(v23 + 8 * v21));
      *(_QWORD *)(v23 + 8 * v21) = 0LL;
    }
    v24 = (unsigned int)(v10 + 1);
    if ( (_DWORD)v24 && (v25 = *((_DWORD *)this + 248), (unsigned int)v24 <= v25) )
    {
      v26 = v25 - v24;
      if ( v26 )
        memmove(*((void **)this + 121), (const void *)(*((_QWORD *)this + 121) + 8 * v24), 8LL * v26);
      *((_DWORD *)this + 248) = v26;
    }
    else if ( (_DWORD)v24 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x235u);
    }
    if ( i )
    {
      CResource::UnRegisterNotifierInternal(this, *((struct CResource **)this + 120));
      *((_QWORD *)this + 120) = i;
    }
  }
LABEL_5:
  if ( *((_QWORD *)this + 120) )
  {
    v27 = (CDxAccumulationContext *)*((_QWORD *)this + 126);
    if ( v27 )
    {
      CDxAccumulationContext::`scalar deleting destructor'(v27, a2);
      *((_QWORD *)this + 126) = 0LL;
    }
  }
  if ( !*((_BYTE *)this + 1004) && *((_QWORD *)this + 100) )
  {
    SpriteClipShape = CWindowNode::GetSpriteClipShape((struct D2D_SIZE_F *)this, &v34);
    v6 = SpriteClipShape;
    if ( SpriteClipShape < 0 )
    {
      v33 = 2940;
    }
    else
    {
      SpriteClipShape = CWindowNode::GetRenderBounds(this, *((_QWORD *)this + 100), v34, v35, 0LL, 0LL);
      v6 = SpriteClipShape;
      if ( SpriteClipShape >= 0 )
      {
        TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v35);
        goto LABEL_8;
      }
      v33 = 2944;
    }
LABEL_46:
    v28 = SpriteClipShape;
LABEL_56:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v28, v33);
    return v6;
  }
LABEL_8:
  v12 = *((_QWORD *)this + 120);
  if ( v12 )
  {
    if ( !CCompositionSurfaceBitmap::HasContent((CCompositionSurfaceBitmap *)(v12 + 120)) )
      return v6;
    v29 = *((_QWORD *)this + 120);
    v30 = v29 + 120;
    if ( !v29 )
      v30 = 0LL;
    DxClipShapeNoRef = CWindowNode::GetDxClipShapeNoRef(this);
    SpriteClipShape = CWindowNode::GetRenderBounds(this, v30, DxClipShapeNoRef, v35, 0LL, 0LL);
    v6 = SpriteClipShape;
    if ( SpriteClipShape >= 0 )
    {
LABEL_54:
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(a3, v35);
      return v6;
    }
    v33 = 2955;
    goto LABEL_46;
  }
  v13 = *((_QWORD *)this + 117);
  if ( v13 )
  {
    v32 = CWindowNode::GetDxClipShapeNoRef(this);
    SpriteClipShape = CWindowNode::GetRenderBounds(this, v13 + 8, v32, v35, 0LL, 0LL);
    v6 = SpriteClipShape;
    if ( SpriteClipShape >= 0 )
      goto LABEL_54;
    v33 = 2964;
    goto LABEL_46;
  }
  return v6;
}
