/*
 * XREFs of ?HaveOverlayCandidatesChanged@COverlayContext@@AEAA_NXZ @ 0x180078BD8
 * Callers:
 *     ?Render@CRenderTargetManager@@QEAAJPEA_N@Z @ 0x180072FD0 (-Render@CRenderTargetManager@@QEAAJPEA_N@Z.c)
 * Callees:
 *     ??$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z @ 0x18005ABF0 (--$IsEqualTo@$0A@@CMILMatrix@@AEBA_NAEBV0@@Z.c)
 *     ??9@YA_NAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x18009BBA8 (--9@YA_NAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z.c)
 *     ?ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z @ 0x1800B7CC0 (-ComparePlaneAttributes@COverlayContext@@CAXPEAUOverlayPlaneInfo@1@0PEA_N1@Z.c)
 *     ??A?$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEBAAEAUOverlayPlaneInfo@COverlayContext@@I@Z @ 0x180126248 (--A-$DynArray@UOverlayPlaneInfo@COverlayContext@@$0A@@@QEBAAEAUOverlayPlaneInfo@COverlayContext@.c)
 *     ?IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z @ 0x180128ECC (-IsEqualTo@CRgnData@Internal@FastRegion@@QEBA_NAEBV123@@Z.c)
 */

char __fastcall COverlayContext::HaveOverlayCandidatesChanged(COverlayContext *this)
{
  char v1; // si
  int v3; // r8d
  unsigned int v4; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdx
  struct COverlayContext::OverlayPlaneInfo *v9; // rax
  bool *v10; // r8
  bool *v11; // r9
  struct COverlayContext::OverlayPlaneInfo *v12; // r10
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // r8
  __int64 v41; // rdx
  FastRegion::Internal::CRgnData *v42; // rcx
  const struct FastRegion::Internal::CRgnData **v43; // r8

  v1 = 0;
  if ( *((_BYTE *)this + 1094) )
  {
    v1 = 1;
    *((_BYTE *)this + 1094) = 0;
  }
  if ( *((_DWORD *)this + 50) != *((_DWORD *)this + 58)
    || *((_BYTE *)this + 1091) != *((_BYTE *)this + 1092)
    || !CMILMatrix::IsEqualTo<0>((float *)this + 132, (float *)this + 166) )
  {
    return 1;
  }
  v4 = 0;
  if ( v3 )
  {
    while ( 1 )
    {
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v4);
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[](v6, v5);
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v7);
      v9 = (struct COverlayContext::OverlayPlaneInfo *)DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[](
                                                         (char *)this + 176,
                                                         v8);
      COverlayContext::ComparePlaneAttributes(v9, v12, v10, v11);
      if ( *(_BYTE *)(DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v4) + 208) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v13);
      v15 = DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v14);
      if ( *(_QWORD *)(v15 + 16) != *(_QWORD *)(v17 + 16) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v16);
      v19 = DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v18);
      if ( *(_QWORD *)(v19 + 32) != *(_QWORD *)(v21 + 32) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v20);
      v23 = DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v22);
      if ( *(_BYTE *)(v23 + 169) != *(_BYTE *)(v25 + 169) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v24);
      v27 = DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v26);
      if ( *(_BYTE *)(v27 + 170) != *(_BYTE *)(v29 + 170) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v28);
      v31 = DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v30);
      if ( *(_BYTE *)(v31 + 171) != *(_BYTE *)(v33 + 171) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v32);
      v35 = DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v34);
      if ( *(_BYTE *)(v35 + 173) != *(_BYTE *)(v37 + 173) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v36);
      v39 = DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 176, v38);
      if ( (unsigned __int8)operator!=(v39 + 144, v40 + 144) )
        break;
      DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[]((char *)this + 208, v4);
      v42 = *(FastRegion::Internal::CRgnData **)(*(_QWORD *)(DynArray<COverlayContext::OverlayPlaneInfo,0>::operator[](
                                                               (char *)this + 176,
                                                               v41)
                                                           + 160)
                                               + 16LL);
      if ( *(_DWORD *)v42 )
      {
        if ( !*(_DWORD *)*v43 || !FastRegion::Internal::CRgnData::IsEqualTo(v42, *v43) )
          return 1;
      }
      else if ( *(_DWORD *)*v43 )
      {
        return 1;
      }
      if ( ++v4 >= *((_DWORD *)this + 50) )
        return v1;
    }
    return 1;
  }
  return v1;
}
