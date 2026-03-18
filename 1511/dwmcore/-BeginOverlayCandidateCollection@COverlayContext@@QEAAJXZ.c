/*
 * XREFs of ?BeginOverlayCandidateCollection@COverlayContext@@QEAAJXZ @ 0x18007F5C0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x180065E68 (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x180076D60 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800B6560 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     Template_q @ 0x180111C90 (Template_q.c)
 */

__int64 __fastcall COverlayContext::BeginOverlayCandidateCollection(COverlayContext *this)
{
  __int64 v1; // r9
  unsigned int v2; // r11d
  char v4; // r10
  char v5; // al
  bool v6; // zf
  __int64 v7; // rdx
  unsigned int v8; // r9d
  unsigned int v9; // ecx
  __int64 v10; // r8
  __int64 v11; // rcx
  _DWORD *v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rdx

  v1 = *((_QWORD *)this + 9);
  v2 = 0;
  *((float *)this + 10) = (float)*(int *)(v1 + 88);
  *((float *)this + 11) = (float)*(int *)(v1 + 92);
  *((float *)this + 12) = (float)*(int *)(v1 + 96);
  *((float *)this + 13) = (float)*(int *)(v1 + 100);
  *((_DWORD *)this + 14) = *(_DWORD *)(v1 + 112) - *(_DWORD *)(v1 + 104);
  *((_DWORD *)this + 15) = *(_DWORD *)(v1 + 116) - *(_DWORD *)(v1 + 108);
  if ( !*(_BYTE *)(v1 + 299) || (v4 = 1, !*(_BYTE *)(v1 + 300)) )
    v4 = 0;
  *((_BYTE *)this + 839) = v4;
  if ( *(_QWORD *)(v1 + 104) == *(_QWORD *)(v1 + 72)
    && *(_DWORD *)(v1 + 112) == *(_DWORD *)(v1 + 80)
    && *(_DWORD *)(v1 + 116) == *(_DWORD *)(v1 + 84)
    || TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty((_DWORD *)(v1 + 104))
    && TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v13)
    || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v14)
    && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v15) )
  {
    v5 = v2;
  }
  else
  {
    v5 = 1;
  }
  v6 = CCommonRegistryData::m_dwOverlayTestMode == 5;
  *((_BYTE *)this + 840) = v5;
  *((_BYTE *)this + 845) = *(_BYTE *)(v1 + 298);
  if ( !v6 && *((_DWORD *)this + 23) > 1u && v4
    || CCommonRegistryData::m_fDisableDirectFlip == v2
    || *((_DWORD *)this + 29) > v2 && v4 )
  {
    v7 = *(_QWORD *)(*((_QWORD *)this + 106) + 32LL);
    if ( *(_BYTE *)(v7 + 111) == (_BYTE)v2 )
    {
      if ( qword_1801A39E8 && (v8 = *((_DWORD *)qword_1801A39E8 + 18), v9 = v2, v8) )
      {
        while ( 1 )
        {
          v10 = *(_QWORD *)(*((_QWORD *)qword_1801A39E8 + 6) + 8LL * v9);
          if ( *(_BYTE *)(v10 + 220) != (_BYTE)v2 || *(_DWORD *)(v10 + 216) > v2 )
            break;
          if ( ++v9 >= v8 )
            goto LABEL_16;
        }
      }
      else
      {
LABEL_16:
        if ( *(_DWORD *)(v7 + 60) <= v2 )
        {
          *((_BYTE *)this + 832) = 1;
          goto LABEL_18;
        }
      }
    }
  }
  *((_BYTE *)this + 832) = v2;
LABEL_18:
  **((_DWORD **)this + 90) = v2;
  *((_DWORD *)this + 204) = v2;
  DynArrayImpl<0>::ShrinkToSize((_QWORD *)this + 99, 0x10u);
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    Template_q(v11, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start, *((unsigned __int8 *)this + 832));
  return 0LL;
}
