/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C
 * Callers:
 *     DxgkGetDisplayModeList @ 0x1C00B9A30 (DxgkGetDisplayModeList.c)
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C0910 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C0153DF8 (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0003ADC (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0003B48 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C009A4C0 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C009A63C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C009C02C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C009C080 (MonitorGetMonitorOrientationsFromTarget.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00E7F40 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0126140 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C012C608 (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C012F14C (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     sub_1C0141B0C @ 0x1C0141B0C (sub_1C0141B0C.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C015ACC4 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        DXGADAPTER ***a1,
        struct COREADAPTERACCESS *a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5,
        struct DXGK_STEREO_PARAMS *a6)
{
  __int64 v6; // rbx
  unsigned __int8 *v7; // rax
  DXGADAPTER ***v9; // rsi
  __int64 v10; // rdx
  DXGADAPTER **v11; // rax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  int CachedStereoStates; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  DXGADAPTER **v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  __int64 v19; // rax
  int **SessionViewOwner; // rax
  SESSION_VIEW *v21; // r11
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v23; // r11
  struct DISPLAY_SOURCE *v24; // rbx
  struct DXGADAPTER *v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *v28; // rbx
  char v29; // al
  __int64 v30; // rcx
  __int64 v31; // rax
  int DisplayModeList; // eax
  __int64 v33; // rcx
  int v34; // eax
  __int64 v35; // rcx
  _QWORD *v36; // rax
  __int64 v37; // rax
  _QWORD *v38; // rax
  DXGADAPTER **v39; // rcx
  int CachedModeList; // eax
  int ModeList; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  UINT *p_ModeCount; // rsi
  int v45; // eax
  __int64 v46; // rcx
  _QWORD *v47; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  UINT v49; // edx
  __int64 v50; // rax
  UINT v51; // edx
  __int64 v52; // rax
  PERESOURCE **v53; // rcx
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  unsigned __int8 v59; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v60[11]; // [rsp+59h] [rbp-58h] BYREF
  int v61; // [rsp+64h] [rbp-4Dh]
  int v62; // [rsp+68h] [rbp-49h] BYREF
  void *v63; // [rsp+70h] [rbp-41h] BYREF
  struct DISPLAY_SOURCE *NextDisplaySource; // [rsp+78h] [rbp-39h]
  _D3DKMT_GETDISPLAYMODELIST v65; // [rsp+80h] [rbp-31h] BYREF
  SESSION_VIEW *v66; // [rsp+98h] [rbp-19h]
  _QWORD v67[11]; // [rsp+A0h] [rbp-11h] BYREF
  __int64 v71; // [rsp+120h] [rbp+6Fh] BYREF

  v7 = a5;
  v9 = a1;
  while ( 1 )
  {
    v62 = 0;
    v63 = 0LL;
    LOBYTE(v6) = 0;
    *v7 = 0;
    v10 = 1016LL * a4->VidPnSourceId;
    v11 = v9[248];
    *(_DWORD *)&v60[3] = v6;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(
                (DXGADAPTER *)v9,
                *(_DWORD *)((char *)v11[17] + v10 + 956),
                &v60[7]) >= 0 )
      *(_DWORD *)&v60[3] = *(_DWORD *)&v60[7] != 0;
    if ( a6 )
    {
      VidPnSourceId = a4->VidPnSourceId;
      v61 = 1;
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(v9[248], VidPnSourceId, (bool *)a6, (bool *)a6 + 1);
    }
    else
    {
      v61 = 0;
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedModeList(v9[248], a4);
    }
    v14 = 0x80000000LL;
    LODWORD(v6) = CachedStereoStates;
    if ( (int)(CachedStereoStates + 0x80000000) >= 0 && CachedStereoStates != -1073741275 )
    {
      v56 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(0x80000000LL);
      v56[3] = a4->VidPnSourceId;
      v56[5] = (int)v6;
      v56[4] = v9;
      WdLogEvent5_WdDmmEvent(v56);
      return (unsigned int)v6;
    }
    if ( CachedStereoStates == -1073741275 )
      break;
LABEL_73:
    if ( (_DWORD)v6 != -1071775483 || a3 )
      return (unsigned int)v6;
    v7 = a5;
    if ( *a5 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v55 + 24) = 5071LL;
      WdLogEvent5_WdAssertion(v55);
      v7 = a5;
    }
    a3 = 1;
  }
  v15 = 1016LL * a4->VidPnSourceId;
  v16 = v9[248];
  LOBYTE(v71) = 0;
  v17 = *(_DWORD *)((char *)v16[17] + v15 + 956);
  if ( v17 != -1 && (int)DxgkQueryMonitorTypeLockHeld((DXGADAPTER *)v9, v17, 0LL, 0LL, 0LL, &v71, 0LL, 0LL, 0LL) < 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v19 + 24) = 4806LL;
    WdLogEvent5_WdAssertion(v19);
  }
  COREADAPTERACCESS::Release(a2);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner((ADAPTER_DISPLAY *)v9[248], a4->VidPnSourceId);
  v66 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !a3
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v21),
        PrimaryDisplaySource != (DXGADAPTER *)((char *)v9[248][17] + 1016 * a4->VidPnSourceId))
    || (NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v23, PrimaryDisplaySource),
        (v24 = NextDisplaySource) == 0LL) )
  {
LABEL_34:
    v34 = COREADAPTERACCESS::AcquireExclusive(a2);
    v6 = v34;
    if ( v34 >= 0 )
    {
      v39 = v9[248];
      if ( v61 )
        CachedModeList = ADAPTER_DISPLAY::GetCachedStereoStates(v39, a4->VidPnSourceId, (bool *)a6, (bool *)a6 + 1);
      else
        CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(v39, a4);
      LODWORD(v6) = CachedModeList;
      if ( CachedModeList >= 0 )
        goto LABEL_70;
      if ( CachedModeList == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList((ADAPTER_DISPLAY *)v9[248], a3, a4, a6);
        v6 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( v62 )
          {
            p_ModeCount = &a4->ModeCount;
            v45 = sub_1C0141B0C((int)a4 + 16, (int)a4 + 8, v62, (_DWORD)v63, 1);
            v6 = v45;
            LODWORD(v71) = v45;
            if ( v45 < 0 )
            {
              v47 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v46);
              v47[3] = a1;
              v47[4] = a4->VidPnSourceId;
              v47[5] = v6;
              WdLogEvent5_WdDmmEvent(v47);
              pModeList = a4->pModeList;
              *p_ModeCount = 0;
              operator delete(pModeList);
              a4->pModeList = 0LL;
              goto LABEL_70;
            }
            v49 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v50 = v49++;
                *((_DWORD *)&a4->pModeList[v50].Flags + 1) &= ~0x80u;
              }
              while ( v49 < *p_ModeCount );
              LODWORD(v6) = v71;
            }
            v9 = a1;
          }
          *a5 = 1;
          if ( v60[3] )
          {
            v51 = 0;
            if ( a4->ModeCount )
            {
              do
              {
                v52 = v51++;
                *((_DWORD *)&a4->pModeList[v52].Flags + 1) &= ~0x80u;
              }
              while ( v51 < a4->ModeCount );
              v9 = a1;
            }
          }
          v53 = (PERESOURCE **)v9[248];
          if ( v61 )
            ADAPTER_DISPLAY::SetCachedStereoStates(
              (__int64)v53,
              a4->VidPnSourceId,
              *(_BYTE *)a6 != 0,
              *((_BYTE *)a6 + 1) != 0);
          else
            LODWORD(v6) = ADAPTER_DISPLAY::SetCachedModeList(v53, a4);
          if ( (int)v6 >= 0 )
          {
            *a5 = 0;
          }
          else
          {
            v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v14);
            v54[3] = a4->VidPnSourceId;
            v54[5] = (int)v6;
            v54[4] = a4;
            WdLogEvent5_WdDmmEvent(v54);
          }
          LODWORD(v6) = 0;
          goto LABEL_70;
        }
        if ( a3 && ModeList == -1071775483 )
        {
          v43 = WdLogNewEntry5_WdAssertion(v42);
          *(_QWORD *)(v43 + 24) = 4980LL;
          WdLogEvent5_WdAssertion(v43);
        }
        v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v42);
        v36[3] = a4->VidPnSourceId;
        v36[4] = v6;
      }
      else
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v14);
        v36[3] = a4->VidPnSourceId;
        v36[5] = (int)v6;
        v36[4] = v9;
      }
    }
    else
    {
      v36 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v35);
      v36[3] = v6;
    }
    WdLogEvent5_WdDmmEvent(v36);
LABEL_70:
    if ( v63 )
      operator delete(v63);
    v9 = a1;
    goto LABEL_73;
  }
  while ( 1 )
  {
    v25 = *(struct DXGADAPTER **)(*((_QWORD *)v24 + 1) + 16LL);
    v59 = 0;
    memset(&v65, 0, sizeof(v65));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v67, v25, 0LL);
    v26 = COREADAPTERACCESS::AcquireExclusive(v67);
    v6 = v26;
    if ( v26 < 0 )
      break;
    v28 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v25, *((_DWORD *)NextDisplaySource + 239), &v60[7]) >= 0 )
    {
      v29 = v60[3];
      if ( *(_DWORD *)&v60[7] )
        v29 = 1;
      v60[3] = v29;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v25, v28[239], 0LL, 0LL, 0LL, v60, 0LL, 0LL, 0LL) < 0 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v30);
      *(_QWORD *)(v31 + 24) = 4878LL;
      WdLogEvent5_WdAssertion(v31);
    }
    if ( (_BYTE)v71 == v60[0] )
    {
      v65.VidPnSourceId = v28[4];
      DisplayModeList = DxgkpGetDisplayModeList(v25, (struct COREADAPTERACCESS *)v67, a3, &v65, &v59, a6);
      v6 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v37 = WdLogNewEntry5_WdAssertion(v33);
          *(_QWORD *)(v37 + 24) = 4897LL;
          WdLogEvent5_WdAssertion(v37);
        }
LABEL_39:
        v38 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v33);
        v38[3] = v25;
        v38[4] = v65.VidPnSourceId;
        v38[5] = v6;
        WdLogEvent5_WdDmmEvent(v38);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
        goto LABEL_70;
      }
      v6 = (int)sub_1C0141B0C((unsigned int)&v62, (unsigned int)&v63, v65.ModeCount, v65.pModeList, 1);
      if ( v59 )
        operator delete(v65.pModeList);
      if ( (int)v6 < 0 )
        goto LABEL_39;
      v28 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v66, (const struct DISPLAY_SOURCE *)v28);
    v24 = NextDisplaySource;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
    if ( !v24 )
    {
      v9 = a1;
      goto LABEL_34;
    }
  }
  v57 = WdLogNewEntry5_WdDmmEvent(v27);
  *(_QWORD *)(v57 + 24) = v25;
  *(_QWORD *)(v57 + 32) = v6;
  WdLogEvent5_WdDmmEvent(v57);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v67);
  return (unsigned int)v6;
}
