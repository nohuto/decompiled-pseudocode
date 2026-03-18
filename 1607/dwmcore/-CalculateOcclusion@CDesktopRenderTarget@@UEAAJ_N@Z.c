/*
 * XREFs of ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0
 * Callers:
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x180074CC0 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 *     ?PreRender@CDesktopRenderTarget@@UEAAJXZ @ 0x180075FA0 (-PreRender@CDesktopRenderTarget@@UEAAJXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 * Callees:
 *     ??1CDisplaySet@@AEAA@XZ @ 0x180036280 (--1CDisplaySet@@AEAA@XZ.c)
 *     ?Release@CDisplaySet@@QEBAXXZ @ 0x18003653C (-Release@CDisplaySet@@QEBAXXZ.c)
 *     ?DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateComparison@@_N@Z @ 0x1800382E4 (-DeriveCurrentDisplaySet@CDisplayManager@@AEAAJPEAPEAVCDisplaySet@@PEAW4Enum@DisplayStateCompari.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x180038B54 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18004B800 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@_NPEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@PEBV?$DynArray@PEAVCOverlayContext@@$0A@@@@Z @ 0x18005BE84 (-Compute@COcclusionContext@@AEAAJPEBVCVisualTree@@IPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF.c)
 *     ??_GCOcclusionContext@@QEAAPEAXI@Z @ 0x18005C138 (--_GCOcclusionContext@@QEAAPEAXI@Z.c)
 *     ?SetFullDirty@CDirtyRegion@@QEAAXXZ @ 0x180070E8C (-SetFullDirty@CDirtyRegion@@QEAAXXZ.c)
 *     ?CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z @ 0x1800774A0 (-CalculateOcclusion@CDesktopRenderTarget@@UEAAJ_N@Z.c)
 *     ?EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcclusionContext@@PEA_N@Z @ 0x1800780E0 (-EndOverlayCandidateCollection@COverlayContext@@QEAAJPEBVCVisualTree@@PEBVCDirtyRegion@@PEAVCOcc.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z @ 0x18009A5B0 (-AddMultipleAndSet@-$DynArray@PEAVCOverlayContext@@$0A@@@QEAAJPEFBQEAVCOverlayContext@@I@Z.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x18009A900 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 *     ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800A30CC (-IsEmpty@-$TMilRect@HUtagRECT@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?FreeTableData@?$CGenericTableMap@IVPropertyMapEntry@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1800AD800 (-FreeTableData@-$CGenericTableMap@IVPropertyMapEntry@@@@CAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z.c)
 *     ?Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800B17DC (-Create@COcclusionContext@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_xd @ 0x180106D50 (Template_xd.c)
 *     ?SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z @ 0x180107A80 (-SetOcclusionContext@CHwndRenderTarget@@QEAAJPEAVCOcclusionContext@@@Z.c)
 *     ?SetToInverse@?$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEAAHAEBV?$CMatrix@UPageInPixels@CoordinateSpace@@UDeviceHPC@2@@@@Z @ 0x180110A58 (-SetToInverse@-$CMatrix@UDeviceHPC@CoordinateSpace@@UPageInPixels@2@@@QEAAHAEBV-$CMatrix@UPageIn.c)
 *     ?IsIdentity@CMILMatrix@@QEBA_NXZ @ 0x180110B44 (-IsIdentity@CMILMatrix@@QEBA_NXZ.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?IsInfinite@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x18011C700 (-IsInfinite@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ @ 0x180129B54 (-Reset@OverlayPlaneInfo@COverlayContext@@QEAAXXZ.c)
 *     Template_q @ 0x180129F68 (Template_q.c)
 */

__int64 __fastcall CDesktopRenderTarget::CalculateOcclusion(CDesktopRenderTarget *this, char a2, __int64 a3)
{
  CDisplaySet *v3; // rdi
  int v4; // ebx
  char v5; // r9
  CDesktopRenderTarget *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  unsigned int v10; // ebx
  bool v11; // zf
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  bool v15; // al
  __int64 v16; // rdx
  __int64 v17; // r8
  char v18; // r10
  char v19; // al
  const GUID *v20; // r8
  const GUID *v21; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // rdx
  __int64 v27; // r8
  struct _RTL_GENERIC_TABLE *v28; // rcx
  __int64 v29; // r10
  unsigned int v30; // r8d
  __int64 v31; // rcx
  __int64 v32; // rdx
  CMILMatrix *v33; // rcx
  __int64 v34; // rcx
  __int128 v35; // xmm1
  int v36; // eax
  __int128 v37; // xmm0
  __int128 v38; // xmm1
  int v39; // eax
  struct COcclusionContext **v40; // rsi
  int v41; // r9d
  int v42; // edx
  CDesktopRenderTarget *v43; // r10
  __int64 v44; // rax
  __int64 v45; // rdx
  unsigned int v46; // r8d
  unsigned int v47; // r11d
  __int64 v48; // rcx
  unsigned int v49; // eax
  __int64 v50; // r9
  __int128 v51; // xmm1
  __int128 v52; // xmm0
  __int128 v53; // xmm0
  _BYTE *v54; // r9
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int128 v57; // xmm0
  int v58; // eax
  COcclusionContext *v59; // rcx
  unsigned int v60; // eax
  struct _RTL_CRITICAL_SECTION *v61; // rcx
  __int64 v62; // rax
  _QWORD *v63; // rsi
  int v64; // eax
  COcclusionContext *v65; // rcx
  COverlayContext *v66; // rcx
  struct COcclusionContext *v67; // r9
  const struct CDirtyRegion *v68; // r8
  const struct CVisualTree *v69; // rdx
  CDirtyRegion *v70; // rcx
  UINT32 cData[2]; // [rsp+20h] [rbp-E0h]
  char v73; // [rsp+40h] [rbp-C0h]
  bool v74; // [rsp+41h] [rbp-BFh] BYREF
  unsigned int v75; // [rsp+44h] [rbp-BCh]
  CDisplaySet *v76; // [rsp+48h] [rbp-B8h] BYREF
  CDesktopRenderTarget *v77; // [rsp+50h] [rbp-B0h]
  unsigned int v78; // [rsp+58h] [rbp-A8h]
  int v79; // [rsp+5Ch] [rbp-A4h]
  struct _RTL_CRITICAL_SECTION *v80; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v81; // [rsp+68h] [rbp-98h] BYREF
  __int128 v82; // [rsp+70h] [rbp-90h] BYREF
  __int64 v83; // [rsp+80h] [rbp-80h]
  int v84; // [rsp+88h] [rbp-78h]
  _OWORD v85[4]; // [rsp+90h] [rbp-70h] BYREF
  int v86; // [rsp+D0h] [rbp-30h]
  CMILMatrix *v87[2]; // [rsp+E0h] [rbp-20h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  GUID *v89; // [rsp+110h] [rbp+10h]
  __int64 v90; // [rsp+118h] [rbp+18h]
  _BYTE v91[8]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v92[8]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v93[8]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v94[104]; // [rsp+138h] [rbp+38h] BYREF

  v3 = 0LL;
  v73 = a2;
  v4 = 0;
  v77 = this;
  LOBYTE(a3) = 0;
  v83 = 0LL;
  v5 = a2;
  v6 = this;
  v84 = 0;
  v82 = 0LL;
  v78 = a3;
  LOBYTE(v79) = 0;
  if ( !*((_QWORD *)this - 3) || !*((_DWORD *)this + 8) )
    return (unsigned int)v4;
  v7 = 0LL;
  v75 = 0;
  do
  {
    v8 = *(_QWORD *)(*((_QWORD *)v6 + 1) + 8 * v7);
    if ( (*(_DWORD *)(v8 + 344) & 0x10000) != 0 )
    {
      a3 = (unsigned __int8)a3;
      if ( !*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 32LL) + 111LL) )
        a3 = 1LL;
      v78 = a3;
    }
    if ( v5 )
    {
      v9 = *(_QWORD *)(v8 + 736);
      v81 = v9;
      if ( !v9 )
      {
LABEL_82:
        v6 = v77;
        goto LABEL_83;
      }
      v10 = 0;
      v11 = *(_DWORD *)(v9 + 200) == 0;
      v87[0] = (CMILMatrix *)(v8 + 204);
      if ( !v11 )
      {
        do
          COverlayContext::OverlayPlaneInfo::Reset((COverlayContext::OverlayPlaneInfo *)(*(_QWORD *)(v9 + 176)
                                                                                       + 232LL * v10++));
        while ( v10 < *(_DWORD *)(v9 + 200) );
      }
      *(_DWORD *)(v9 + 200) = 0;
      DynArrayImpl<0>::ShrinkToSize(v9 + 176, 232LL);
      v14 = *(_QWORD *)(v9 + 72);
      *(float *)(v9 + 40) = (float)*(int *)(v14 + 88);
      *(float *)(v9 + 44) = (float)*(int *)(v14 + 92);
      *(float *)(v9 + 48) = (float)*(int *)(v14 + 96);
      *(float *)(v9 + 52) = (float)*(int *)(v14 + 100);
      *(_DWORD *)(v9 + 56) = *(_DWORD *)(v14 + 112) - *(_DWORD *)(v14 + 104);
      *(_DWORD *)(v9 + 60) = *(_DWORD *)(v14 + 116) - *(_DWORD *)(v14 + 108);
      v15 = *(_BYTE *)(v14 + 299) && *(_BYTE *)(v14 + 300);
      *(_BYTE *)(v9 + 1087) = v15;
      if ( *(_DWORD *)(v14 + 104) == *(_DWORD *)(v14 + 72)
        && *(_DWORD *)(v14 + 108) == *(_DWORD *)(v14 + 76)
        && *(_DWORD *)(v14 + 112) == *(_DWORD *)(v14 + 80)
        && *(_DWORD *)(v14 + 116) == *(_DWORD *)(v14 + 84)
        || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v14 + 104, v12, v13, v14)
        && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMilRectL_>::IsEmpty(v14 + 72, v16, v17, v14)
        || (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v14 + 104)
        && (unsigned __int8)TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsInfinite(v14 + 72) )
      {
        v19 = 0;
      }
      else
      {
        v19 = v18;
      }
      *(_BYTE *)(v9 + 1088) = v19;
      *(_BYTE *)(v9 + 1093) = *(_BYTE *)(v14 + 298);
      v4 = 0;
      v76 = 0LL;
      v80 = &g_DisplayManager;
      EnterCriticalSection(&g_DisplayManager);
      if ( !qword_1801EFD30 )
      {
        if ( hProvider > 5u
          && (qword_1801EA750 & 0x400000000000LL) != 0
          && (qword_1801EA758 & 0x400000000000LL) == qword_1801EA758 )
        {
          v90 = 16LL;
          v89 = &gDwmCoreTelemetryActivityId;
          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1801C503D, v20, v21, 3u, &pData);
        }
        v4 = -2003304442;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304442, 0x158u);
        CGuard<CDwmCS>::~CGuard<CDwmCS>(&v80);
        goto LABEL_50;
      }
      if ( qword_1801EFD28 )
      {
        v76 = qword_1801EFD28;
        _InterlockedIncrement((volatile signed __int32 *)qword_1801EFD28);
      }
      else
      {
        LeaveCriticalSection(&g_DisplayManager);
        v23 = CDisplayManager::DeriveCurrentDisplaySet(&g_DisplayManager, &v76, 0LL, 0);
        v4 = v23;
        if ( v23 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, 0x163u);
          EnterCriticalSection(&g_DisplayManager);
          CGuard<CDwmCS>::~CGuard<CDwmCS>(&v80);
          if ( v76 )
            CDisplaySet::Release(v76, v26, v27);
LABEL_49:
          if ( v4 >= 0 )
          {
            *(_BYTE *)(v9 + 1095) = *((_DWORD *)v3 + 18) == 1;
            goto LABEL_52;
          }
LABEL_50:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x13Eu);
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xDCDu);
LABEL_52:
          if ( v3 && _InterlockedExchangeAdd((volatile signed __int32 *)v3, 0xFFFFFFFF) == 1 )
          {
            CDisplaySet::~CDisplaySet(v3, v26, v27);
            CGenericTableMap<unsigned int,PropertyMapEntry>::FreeTableData(v28, v3);
          }
          if ( v4 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x12Fu);
            v3 = 0LL;
LABEL_78:
            if ( v4 < 0 )
            {
              cData[0] = 2051;
              v41 = v4;
              goto LABEL_139;
            }
            if ( *(_BYTE *)(v81 + 1080) )
            {
              v39 = DynArray<COverlayContext *,0>::AddMultipleAndSet(&v82, &v81);
              v4 = v39;
              if ( v39 < 0 )
              {
                cData[0] = 2055;
                goto LABEL_138;
              }
            }
            v5 = v73;
            a3 = v78;
            goto LABEL_82;
          }
          if ( CCommonRegistryData::m_dwOverlayTestMode != 5 && *(_DWORD *)(v9 + 128) > 1u
            || !CCommonRegistryData::m_fDisableDirectFlip
            || *(_DWORD *)(v9 + 152) )
          {
            v29 = *(_QWORD *)(*(_QWORD *)(v9 + 1104) + 32LL);
            if ( !*(_BYTE *)(v29 + 111) )
            {
              if ( qword_1801EFD28 && (v30 = *((_DWORD *)qword_1801EFD28 + 18), v31 = 0LL, v30) )
              {
                while ( 1 )
                {
                  v32 = *(_QWORD *)(*((_QWORD *)qword_1801EFD28 + 6) + 8 * v31);
                  if ( *(_BYTE *)(v32 + 220) || *(_DWORD *)(v32 + 216) )
                    break;
                  v31 = (unsigned int)(v31 + 1);
                  if ( (unsigned int)v31 >= v30 )
                    goto LABEL_66;
                }
              }
              else
              {
LABEL_66:
                if ( !*(_DWORD *)(v29 + 60) )
                {
                  *(_BYTE *)(v9 + 1080) = 1;
                  goto LABEL_69;
                }
              }
            }
          }
          *(_BYTE *)(v9 + 1080) = 0;
LABEL_69:
          v3 = 0LL;
          **(_DWORD **)(v9 + 968) = 0;
          *(_DWORD *)(v9 + 1064) = 0;
          DynArrayImpl<0>::ShrinkToSize(v9 + 1040, 16LL);
          v33 = v87[0];
          *(_OWORD *)(v9 + 528) = *(_OWORD *)v87[0];
          *(_OWORD *)(v9 + 544) = *((_OWORD *)v33 + 1);
          *(_OWORD *)(v9 + 560) = *((_OWORD *)v33 + 2);
          *(_OWORD *)(v9 + 576) = *((_OWORD *)v33 + 3);
          *(_DWORD *)(v9 + 592) = *((_DWORD *)v33 + 16);
          if ( CMILMatrix::IsIdentity(v33) )
          {
            *(_OWORD *)(v9 + 596) = CMILMatrix::Identity;
            *(_OWORD *)(v9 + 612) = xmmword_1801EAD20;
            *(_OWORD *)(v9 + 628) = xmmword_1801EAD30;
            *(_OWORD *)(v9 + 644) = xmmword_1801EAD40;
            v36 = dword_1801EAD50;
          }
          else
          {
            v86 = 0;
            if ( !(unsigned int)CMatrix<CoordinateSpace::DeviceHPC,CoordinateSpace::PageInPixels>::SetToInverse(
                                  v85,
                                  v34) )
            {
              v4 = -2003304441;
              MilInstrumentationCheckHR(0x14u, 0LL, 0, -2003304441, 0x14Cu);
              goto LABEL_75;
            }
            v35 = v85[1];
            v36 = v86;
            *(_OWORD *)(v9 + 596) = v85[0];
            v37 = v85[2];
            *(_OWORD *)(v9 + 612) = v35;
            v38 = v85[3];
            *(_OWORD *)(v9 + 628) = v37;
            *(_OWORD *)(v9 + 644) = v38;
          }
          *(_DWORD *)(v9 + 660) = v36;
LABEL_75:
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_q(v34, &EVTDESC_OVERLAY_CANDIDATECOLLECTION_Start, *(unsigned __int8 *)(v9 + 1080));
          goto LABEL_78;
        }
        EnterCriticalSection(&g_DisplayManager);
        v3 = qword_1801EFD28;
        if ( qword_1801EFD28 )
        {
          if ( v76 )
          {
            CDisplaySet::Release(v76, v24, v25);
            v3 = qword_1801EFD28;
          }
          v76 = v3;
          if ( !v3 )
            goto LABEL_48;
          _InterlockedIncrement((volatile signed __int32 *)v3);
        }
        else
        {
          v3 = v76;
          qword_1801EFD28 = v76;
          if ( !v76 )
          {
LABEL_48:
            LeaveCriticalSection(&g_DisplayManager);
            goto LABEL_49;
          }
          _InterlockedIncrement((volatile signed __int32 *)v76);
        }
      }
      v3 = v76;
      goto LABEL_48;
    }
LABEL_83:
    v7 = v75 + 1;
    v75 = v7;
  }
  while ( (unsigned int)v7 < *((_DWORD *)v6 + 8) );
  if ( (_BYTE)a3 )
  {
    a3 = *((_QWORD *)v6 + 37);
    if ( *(_BYTE *)(a3 + 2724) )
      goto LABEL_88;
    if ( *(_BYTE *)(a3 + 2726) )
    {
      if ( *(_DWORD *)(a3 + 576) )
        goto LABEL_88;
    }
    else
    {
      LODWORD(v8) = 0;
      while ( TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty((float *)(a3 + 16LL * (unsigned int)v8 + 24)) )
      {
        v8 = (unsigned int)(v42 + 1);
        if ( (unsigned int)v8 >= 8 )
          goto LABEL_113;
      }
LABEL_88:
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xd(v7, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Start, (char *)v6 - 152, 0LL);
      v40 = (struct COcclusionContext **)((char *)v6 + 304);
      if ( !*v40 )
      {
        v39 = COcclusionContext::Create(*((struct CComposition **)v77 - 17), v40);
        v4 = v39;
        if ( v39 < 0 )
        {
          cData[0] = 2074;
          goto LABEL_138;
        }
      }
      v43 = v77;
      v44 = *((_QWORD *)v77 + 37);
      v45 = v44 + 2708;
      if ( !*(_BYTE *)(v44 + 2724) )
        v45 = v44 + 416;
      v46 = *(_DWORD *)(v44 + 576);
      v47 = 0;
      if ( v46 >= 4 )
      {
        v87[0] = (CMILMatrix *)&v93[-v45];
        v48 = v45 + 24;
        v80 = (struct _RTL_CRITICAL_SECTION *)&v92[-v45];
        v76 = (CDisplaySet *)&v94[-v45];
        v49 = ((v46 - 4) >> 2) + 1;
        v50 = v49;
        v47 = 4 * v49;
        do
        {
          v51 = *(_OWORD *)(v48 - 8);
          v52 = *(_OWORD *)(v48 - 24);
          *(_OWORD *)&v93[v48 - v45 - 24] = v51;
          *(_OWORD *)&v91[v48 - v45 - 24] = v52;
          v48 += 64LL;
          *(_OWORD *)v87 = v51;
          *(_OWORD *)v87 = *(_OWORD *)(v48 - 56);
          *(_OWORD *)&v92[v48 - v45 - 64] = *(_OWORD *)v87;
          v53 = *(_OWORD *)(v48 - 40);
          *(_OWORD *)&v94[v48 - v45 - 64] = v53;
          *(_OWORD *)v87 = v53;
          --v50;
        }
        while ( v50 );
        v43 = v77;
        v40 = (struct COcclusionContext **)((char *)v77 + 304);
      }
      if ( v47 < v46 )
      {
        v54 = &v91[-v45];
        v55 = 16LL * v47 + v45 + 8;
        v56 = v46 - v47;
        do
        {
          v57 = *(_OWORD *)(v55 - 8);
          v55 += 16LL;
          *(_OWORD *)&v54[v55 - 24] = v57;
          *(_OWORD *)v87 = v57;
          --v56;
        }
        while ( v56 );
      }
      v58 = COcclusionContext::Compute((__int64)*v40, *((_QWORD *)v43 - 3), v46, (__int64)v91, 0, 0LL, (__int64)&v82);
      if ( v58 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x835u);
        v59 = *v40;
        if ( *v40 )
        {
          COcclusionContext::`scalar deleting destructor'(v59, v8, a3);
          *v40 = 0LL;
        }
      }
      v4 = 0;
      v6 = v77;
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
        Template_xd(v59, &EVTDESC_ETWGUID_OCCLUSIONEVENT_Stop, (char *)v77 - 152, 0LL);
    }
  }
LABEL_113:
  v11 = *((_DWORD *)v6 + 8) == 0;
  v60 = 0;
  v75 = 0;
  if ( !v11 )
  {
    while ( 1 )
    {
      v4 = 0;
      v87[0] = *((CMILMatrix **)v6 + 38);
      v61 = (struct _RTL_CRITICAL_SECTION *)v60;
      v62 = *((_QWORD *)v6 + 1);
      v80 = v61;
      v63 = *(_QWORD **)(v62 + 8LL * (_QWORD)v61);
      if ( v63[18]
        || (v64 = (*(__int64 (__fastcall **)(_QWORD))(*v63 + 40LL))(*(_QWORD *)(v62 + 8LL * (_QWORD)v61)),
            v4 = v64,
            v64 >= 0) )
      {
        v3 = (CDisplaySet *)v63[18];
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v64, 0x60u);
      }
      if ( v4 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x2C0u);
      }
      else
      {
        v65 = (COcclusionContext *)*((_QWORD *)v3 + 809);
        if ( v65 )
        {
          COcclusionContext::`scalar deleting destructor'(v65, v8, a3);
          *((_QWORD *)v3 + 809) = 0LL;
        }
        *((CMILMatrix **)v3 + 808) = v87[0];
      }
      if ( v4 < 0 )
        break;
      v6 = v77;
      if ( v73 )
      {
        v66 = *(COverlayContext **)(*(_QWORD *)(*((_QWORD *)v77 + 1) + 8LL * (_QWORD)v80) + 736LL);
        if ( v66 )
        {
          v67 = (struct COcclusionContext *)*((_QWORD *)v77 + 38);
          v68 = (const struct CDirtyRegion *)*((_QWORD *)v77 + 37);
          v69 = (const struct CVisualTree *)*((_QWORD *)v77 - 3);
          v74 = 0;
          v39 = COverlayContext::EndOverlayCandidateCollection(v66, v69, v68, v67, &v74);
          v4 = v39;
          if ( v39 < 0 )
          {
            cData[0] = 2139;
            goto LABEL_138;
          }
          v8 = (unsigned __int8)v79;
          if ( v74 )
            v8 = 1LL;
          v79 = v8;
        }
      }
      v3 = 0LL;
      v60 = v75 + 1;
      v75 = v60;
      if ( v60 >= *((_DWORD *)v6 + 8) )
        goto LABEL_131;
    }
    cData[0] = 2122;
    v41 = v4;
    goto LABEL_139;
  }
LABEL_131:
  if ( *((_DWORD *)v6 + 20) )
  {
    while ( 1 )
    {
      v39 = CHwndRenderTarget::SetOcclusionContext(
              *(CHwndRenderTarget **)(*((_QWORD *)v6 + 7) + 8LL * (unsigned int)v3),
              0LL);
      v4 = v39;
      if ( v39 < 0 )
        break;
      LODWORD(v3) = (_DWORD)v3 + 1;
      if ( (unsigned int)v3 >= *((_DWORD *)v6 + 20) )
        goto LABEL_134;
    }
    cData[0] = 2153;
LABEL_138:
    v41 = v39;
LABEL_139:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v41, cData[0]);
    goto LABEL_140;
  }
LABEL_134:
  if ( (_BYTE)v79 )
  {
    v70 = (CDirtyRegion *)*((_QWORD *)v6 + 37);
    if ( !*((_BYTE *)v70 + 2724) )
    {
      CDirtyRegion::SetFullDirty(v70);
      v39 = CDesktopRenderTarget::CalculateOcclusion(v6, 0);
      v4 = v39;
      if ( v39 < 0 )
      {
        cData[0] = 2167;
        goto LABEL_138;
      }
    }
  }
LABEL_140:
  if ( (_QWORD)v82 != *((_QWORD *)&v82 + 1) )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(WPF::g_pProcessHeap);
  return (unsigned int)v4;
}
