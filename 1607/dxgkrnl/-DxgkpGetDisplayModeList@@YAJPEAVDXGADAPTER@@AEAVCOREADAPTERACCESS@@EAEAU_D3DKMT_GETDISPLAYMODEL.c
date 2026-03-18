/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00D1310 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z @ 0x1C00D149C (-DxgkpAdapterCheckStereoMode@@YAJU_LUID@@IPEAE1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     DxgkGetDisplayModeList @ 0x1C00DC6F0 (DxgkGetDisplayModeList.c)
 * Callees:
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C00080C8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C0086D44 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@PEAUDXGK_STEREO_PARAMS@@@.c)
 *     ?GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z @ 0x1C0086F2C (-GetCachedStereoStates@ADAPTER_DISPLAY@@QEBAJIPEAE0@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0086FE4 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00870D4 (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0088C0C (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C00D18F0 (MonitorGetMonitorOrientationsFromTarget.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00D1C00 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z @ 0x1C00F6650 (-SetCachedStereoStates@ADAPTER_DISPLAY@@QEAAJIW4_TRISTATE@@0@Z.c)
 *     _CombineModeList @ 0x1C01639B8 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C017FF84 (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        DXGADAPTER ***this,
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
  int CachedStereoStates; // eax
  __int64 v13; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID VidPnSourceId; // edx
  __int64 v16; // rdx
  DXGADAPTER **v17; // rax
  __int64 v18; // rcx
  int **SessionViewOwner; // rax
  int v20; // eax
  __int64 v21; // rcx
  DXGADAPTER **v22; // rcx
  int CachedModeList; // eax
  int ModeList; // eax
  __int64 v25; // rcx
  PERESOURCE **v26; // rcx
  __int64 v27; // rax
  SESSION_VIEW *v28; // r11
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v30; // r11
  struct DISPLAY_SOURCE *v31; // rbx
  struct DXGADAPTER *v32; // rsi
  int v33; // eax
  __int64 v34; // rcx
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *v35; // rbx
  char v36; // al
  __int64 v37; // rcx
  __int64 v38; // rax
  int DisplayModeList; // eax
  __int64 v40; // rcx
  __int64 v41; // rax
  _QWORD *v42; // rax
  _QWORD *v43; // rax
  __int64 v44; // rax
  UINT *p_ModeCount; // rsi
  int v46; // eax
  __int64 v47; // rcx
  _QWORD *v48; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  UINT v50; // edx
  __int64 v51; // rax
  UINT v52; // edx
  __int64 v53; // rax
  _QWORD *v54; // rax
  __int64 v55; // rax
  _QWORD *v56; // rax
  __int64 v57; // rax
  unsigned __int8 v58; // [rsp+58h] [rbp-79h] BYREF
  _BYTE v59[11]; // [rsp+59h] [rbp-78h] BYREF
  int v60; // [rsp+64h] [rbp-6Dh]
  int v61; // [rsp+68h] [rbp-69h] BYREF
  struct DISPLAY_SOURCE *NextDisplaySource; // [rsp+70h] [rbp-61h]
  void *v63; // [rsp+78h] [rbp-59h] BYREF
  struct _D3DKMT_GETDISPLAYMODELIST v64; // [rsp+80h] [rbp-51h] BYREF
  SESSION_VIEW *v65; // [rsp+98h] [rbp-39h]
  _QWORD v66[14]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 v70; // [rsp+140h] [rbp+6Fh] BYREF

  v7 = a5;
  v9 = this;
  while ( 1 )
  {
    v61 = 0;
    v63 = 0LL;
    LOBYTE(v6) = 0;
    *v7 = 0;
    v10 = 1016LL * a4->VidPnSourceId;
    v11 = v9[266];
    *(_DWORD *)&v59[3] = v6;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v9, *(unsigned int *)((char *)v11[14] + v10 + 964), &v59[7]) >= 0 )
      *(_DWORD *)&v59[3] = *(_DWORD *)&v59[7] != 0;
    if ( a6 )
    {
      VidPnSourceId = a4->VidPnSourceId;
      v60 = 1;
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedStereoStates(v9[266], VidPnSourceId, (bool *)a6, (bool *)a6 + 1);
    }
    else
    {
      v60 = 0;
      CachedStereoStates = ADAPTER_DISPLAY::GetCachedModeList(v9[266], a4);
    }
    v13 = 0x80000000LL;
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
LABEL_8:
    if ( (_DWORD)v6 != -1071775483 || a3 )
      return (unsigned int)v6;
    v7 = a5;
    if ( *a5 )
    {
      v55 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v55 + 24) = 5075LL;
      WdLogEvent5_WdAssertion(v55);
      v7 = a5;
    }
    a3 = 1;
  }
  v16 = 1016LL * a4->VidPnSourceId;
  v17 = v9[266];
  LOBYTE(v70) = 0;
  if ( *(_DWORD *)((char *)v17[14] + v16 + 964) != -1
    && (int)DxgkQueryMonitorTypeLockHeld((DXGADAPTER *)v9, 0LL, (__int64)&v70, 0LL, 0LL, 0LL) < 0 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v18);
    *(_QWORD *)(v27 + 24) = 4810LL;
    WdLogEvent5_WdAssertion(v27);
  }
  COREADAPTERACCESS::Release(a2);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner((ADAPTER_DISPLAY *)v9[266], a4->VidPnSourceId);
  v65 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !a3
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v28),
        PrimaryDisplaySource != (DXGADAPTER *)((char *)v9[266][14] + 1016 * a4->VidPnSourceId))
    || (NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v30, PrimaryDisplaySource),
        (v31 = NextDisplaySource) == 0LL) )
  {
LABEL_18:
    v20 = COREADAPTERACCESS::AcquireExclusive(a2);
    v6 = v20;
    if ( v20 < 0 )
    {
      v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v21);
      v43[3] = v6;
    }
    else
    {
      v22 = v9[266];
      if ( v60 )
        CachedModeList = ADAPTER_DISPLAY::GetCachedStereoStates(v22, a4->VidPnSourceId, (bool *)a6, (bool *)a6 + 1);
      else
        CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(v22, a4);
      LODWORD(v6) = CachedModeList;
      if ( CachedModeList >= 0 )
        goto LABEL_31;
      if ( CachedModeList == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList((ADAPTER_DISPLAY *)v9[266], a3, a4, a6);
        v6 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( !v61 )
          {
LABEL_25:
            *a5 = 1;
            if ( v59[3] )
            {
              v52 = 0;
              if ( a4->ModeCount )
              {
                do
                {
                  v53 = v52++;
                  *((_DWORD *)&a4->pModeList[v53].Flags + 1) &= ~0x80u;
                }
                while ( v52 < a4->ModeCount );
                v9 = this;
              }
            }
            v26 = (PERESOURCE **)v9[266];
            if ( v60 )
              ADAPTER_DISPLAY::SetCachedStereoStates(v26, a4->VidPnSourceId, *(_BYTE *)a6 != 0, *((_BYTE *)a6 + 1) != 0);
            else
              LODWORD(v6) = ADAPTER_DISPLAY::SetCachedModeList(v26, a4);
            if ( (int)v6 < 0 )
            {
              v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
              v54[3] = a4->VidPnSourceId;
              v54[5] = (int)v6;
              v54[4] = a4;
              WdLogEvent5_WdDmmEvent(v54);
            }
            else
            {
              *a5 = 0;
            }
            LODWORD(v6) = 0;
            goto LABEL_31;
          }
          p_ModeCount = &a4->ModeCount;
          v46 = CombineModeList((int)a4 + 16, (int)a4 + 8, v61, (_DWORD)v63, 1);
          v6 = v46;
          LODWORD(v70) = v46;
          if ( v46 >= 0 )
          {
            v50 = 0;
            if ( *p_ModeCount )
            {
              do
              {
                v51 = v50++;
                *((_DWORD *)&a4->pModeList[v51].Flags + 1) &= ~0x80u;
              }
              while ( v50 < *p_ModeCount );
              LODWORD(v6) = v70;
            }
            v9 = this;
            goto LABEL_25;
          }
          v48 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v47);
          v48[3] = this;
          v48[4] = a4->VidPnSourceId;
          v48[5] = v6;
          WdLogEvent5_WdDmmEvent(v48);
          pModeList = a4->pModeList;
          *p_ModeCount = 0;
          operator delete(pModeList);
          a4->pModeList = 0LL;
LABEL_31:
          if ( v63 )
            operator delete(v63);
          v9 = this;
          goto LABEL_8;
        }
        if ( a3 && ModeList == -1071775483 )
        {
          v44 = WdLogNewEntry5_WdAssertion(v25);
          *(_QWORD *)(v44 + 24) = 4984LL;
          WdLogEvent5_WdAssertion(v44);
        }
        v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v25);
        v43[3] = a4->VidPnSourceId;
        v43[4] = v6;
      }
      else
      {
        v43 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
        v43[3] = a4->VidPnSourceId;
        v43[5] = (int)v6;
        v43[4] = v9;
      }
    }
    WdLogEvent5_WdDmmEvent(v43);
    goto LABEL_31;
  }
  while ( 1 )
  {
    v32 = *(struct DXGADAPTER **)(*((_QWORD *)v31 + 1) + 16LL);
    v58 = 0;
    memset(&v64, 0, sizeof(v64));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v66, v32, 0LL);
    v33 = COREADAPTERACCESS::AcquireExclusive(v66);
    v6 = v33;
    if ( v33 < 0 )
      break;
    v35 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    if ( (int)MonitorGetMonitorOrientationsFromTarget(v32, *((unsigned int *)NextDisplaySource + 241), &v59[7]) >= 0 )
    {
      v36 = v59[3];
      if ( *(_DWORD *)&v59[7] )
        v36 = 1;
      v59[3] = v36;
    }
    if ( (int)DxgkQueryMonitorTypeLockHeld(v32, 0LL, (__int64)v59, 0LL, 0LL, 0LL) < 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v37);
      *(_QWORD *)(v38 + 24) = 4882LL;
      WdLogEvent5_WdAssertion(v38);
    }
    if ( (_BYTE)v70 == v59[0] )
    {
      v64.VidPnSourceId = v35[4];
      DisplayModeList = DxgkpGetDisplayModeList(v32, (struct COREADAPTERACCESS *)v66, a3, &v64, &v58, a6);
      v6 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v41 = WdLogNewEntry5_WdAssertion(v40);
          *(_QWORD *)(v41 + 24) = 4901LL;
          WdLogEvent5_WdAssertion(v41);
        }
LABEL_57:
        v42 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v40);
        v42[3] = v32;
        v42[4] = v64.VidPnSourceId;
        v42[5] = v6;
        WdLogEvent5_WdDmmEvent(v42);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
        goto LABEL_31;
      }
      v6 = (int)CombineModeList((unsigned int)&v61, (unsigned int)&v63, v64.ModeCount, v64.pModeList, 1);
      if ( v58 )
        operator delete(v64.pModeList);
      if ( (int)v6 < 0 )
        goto LABEL_57;
      v35 = (D3DDDI_VIDEO_PRESENT_SOURCE_ID *)NextDisplaySource;
    }
    NextDisplaySource = SESSION_VIEW::GetNextDisplaySource(v65, (const struct DISPLAY_SOURCE *)v35);
    v31 = NextDisplaySource;
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
    if ( !v31 )
    {
      v9 = this;
      goto LABEL_18;
    }
  }
  v57 = WdLogNewEntry5_WdDmmEvent(v34);
  *(_QWORD *)(v57 + 24) = v32;
  *(_QWORD *)(v57 + 32) = v6;
  WdLogEvent5_WdDmmEvent(v57);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v66);
  return (unsigned int)v6;
}
