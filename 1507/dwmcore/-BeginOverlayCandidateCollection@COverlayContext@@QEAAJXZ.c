/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x180012DF0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z @ 0x18004BE00 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@_N@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x18000DD28 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800400E0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18008E020 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     Template_q @ 0x1800F7910 (Template_q.c)
 */

__int64 __fastcall COverlayContext::BeginOverlayCandidateCollection(COverlayContext *this)
{
  __int64 v1; // rdx
  bool v3; // r11
  char v4; // r10
  bool v5; // cc
  __int64 v6; // rdx
  unsigned int v7; // r9d
  unsigned int v8; // ecx
  __int64 v9; // r8
  __int64 v10; // rcx

  v1 = *((_QWORD *)this + 9);
  *((float *)this + 10) = (float)*(int *)(v1 + 96);
  *((float *)this + 11) = (float)*(int *)(v1 + 100);
  *((float *)this + 12) = (float)*(int *)(v1 + 104);
  *((float *)this + 13) = (float)*(int *)(v1 + 108);
  *((_DWORD *)this + 14) = *(_DWORD *)(v1 + 120) - *(_DWORD *)(v1 + 112);
  *((_DWORD *)this + 15) = *(_DWORD *)(v1 + 124) - *(_DWORD *)(v1 + 116);
  v3 = *(_BYTE *)(v1 + 144) && *(_BYTE *)(v1 + 145);
  *((_BYTE *)this + 823) = v3;
  if ( *(_QWORD *)(v1 + 112) == *(_QWORD *)(v1 + 80)
    && *(_DWORD *)(v1 + 120) == *(_DWORD *)(v1 + 88)
    && *(_DWORD *)(v1 + 124) == *(_DWORD *)(v1 + 92)
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v1 + 112))
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v1 + 80))
    || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v1 + 112)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v1 + 80) )
  {
    v4 = 0;
  }
  v5 = *((_DWORD *)this + 23) <= 1u;
  *((_BYTE *)this + 824) = v4;
  *((_BYTE *)this + 829) = *(_BYTE *)(v1 + 902);
  if ( !v5 && v3 || !CCommonRegistryData::m_fDisableDirectFlip || *((_DWORD *)this + 29) && v3 )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 104) + 32LL);
    if ( !*(_BYTE *)(v6 + 118) )
    {
      if ( qword_1801930E8 && (v7 = *((_DWORD *)qword_1801930E8 + 18), v8 = 0, v7) )
      {
        while ( 1 )
        {
          v9 = *(_QWORD *)(*((_QWORD *)qword_1801930E8 + 6) + 8LL * v8);
          if ( *(_BYTE *)(v9 + 288) || *(_DWORD *)(v9 + 284) )
            break;
          if ( ++v8 >= v7 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        if ( !*(_DWORD *)(v6 + 60) )
        {
          *((_BYTE *)this + 816) = 1;
          goto LABEL_18;
        }
      }
    }
  }
  *((_BYTE *)this + 816) = 0;
LABEL_18:
  **((_DWORD **)this + 79) = 0;
  *((_DWORD *)this + 182) = 0;
  DynArrayImpl<0>::ShrinkToSize((char *)this + 704, 16LL);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(v10, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start, *((unsigned __int8 *)this + 816));
  return 0LL;
}
