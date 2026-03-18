/*
 * XREFs of ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470
 * Callers:
 *     ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00A6E90 (-DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkGetDisplayModeList @ 0x1C00A7020 (DxgkGetDisplayModeList.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?Release@COREADAPTERACCESS@@QEAAXXZ @ 0x1C0001AF8 (-Release@COREADAPTERACCESS@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C0095A9C (-GetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z @ 0x1C0095E00 (-GetSessionViewOwner@ADAPTER_DISPLAY@@QEBAPEAVSESSION_VIEW@@I@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00CF1B0 (-CreateModeList@ADAPTER_DISPLAY@@QEAAJEPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     ?SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00CF384 (-SetCachedModeList@ADAPTER_DISPLAY@@QEAAJPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00DC140 (DxgkQueryMonitorTypeLockHeld.c)
 *     _CombineModeList @ 0x1C013B6E0 (_CombineModeList.c)
 *     ?IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ @ 0x1C01569AC (-IsCrossAdapterView@SESSION_VIEW@@QEBAEXZ.c)
 */

__int64 __fastcall DxgkpGetDisplayModeList(
        ADAPTER_DISPLAY **a1,
        struct COREADAPTERACCESS *a2,
        unsigned __int8 a3,
        struct _D3DKMT_GETDISPLAYMODELIST *a4,
        unsigned __int8 *a5)
{
  struct DXGADAPTER *v6; // rax
  int v7; // esi
  int CachedModeList; // eax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v15; // rdx
  ADAPTER_DISPLAY *v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r8
  __int64 v23; // r9
  int **SessionViewOwner; // rax
  int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  int ModeList; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  int v33; // eax
  __int64 v34; // rbx
  __int64 v35; // rax
  SESSION_VIEW *v36; // r11
  const struct DISPLAY_SOURCE *PrimaryDisplaySource; // rax
  SESSION_VIEW *v38; // r11
  __int64 v39; // rbx
  struct DXGADAPTER *v40; // rsi
  int v41; // eax
  D3DDDI_VIDEO_PRESENT_SOURCE_ID *v42; // rbx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  int DisplayModeList; // eax
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _QWORD *v54; // rax
  _QWORD *v55; // rax
  __int64 v56; // rax
  UINT *p_ModeCount; // rsi
  int v58; // eax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  UINT i; // edx
  __int64 v63; // rax
  _QWORD *v64; // rax
  __int64 v65; // rax
  _QWORD *v66; // rax
  __int64 v67; // rax
  unsigned __int8 v68; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v69[15]; // [rsp+49h] [rbp-30h] BYREF
  void *v70; // [rsp+58h] [rbp-21h] BYREF
  _D3DKMT_GETDISPLAYMODELIST v71; // [rsp+60h] [rbp-19h] BYREF
  SESSION_VIEW *v72; // [rsp+78h] [rbp-1h]
  _BYTE v73[72]; // [rsp+80h] [rbp+7h] BYREF

  v6 = (struct DXGADAPTER *)a1;
  while ( 1 )
  {
    v7 = 0;
    v70 = 0LL;
    *(_DWORD *)&v69[3] = 0;
    *a5 = 0;
    CachedModeList = ADAPTER_DISPLAY::GetCachedModeList(*((DXGADAPTER ***)v6 + 247), a4);
    v12 = CachedModeList;
    v13 = CachedModeList + 0x80000000;
    if ( (int)v13 >= 0 && CachedModeList != -1073741275 )
    {
      v66 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
      v66[3] = a4->VidPnSourceId;
      v66[4] = a1;
      v66[5] = v12;
      WdLogEvent5_WdDmmEvent(v66);
      return (unsigned int)v12;
    }
    if ( CachedModeList == -1073741275 )
      break;
LABEL_4:
    if ( (_DWORD)v12 != -1071775483 || a3 )
      return (unsigned int)v12;
    if ( *a5 )
    {
      v65 = WdLogNewEntry5_WdAssertion(v13, v9, v10, v11);
      *(_QWORD *)(v65 + 24) = 4922LL;
      WdLogEvent5_WdAssertion(v65);
    }
    v6 = (struct DXGADAPTER *)a1;
    a3 = 1;
  }
  v15 = 1008LL * a4->VidPnSourceId;
  v16 = a1[247];
  v69[0] = 0;
  v17 = *(_DWORD *)(v15 + *((_QWORD *)v16 + 14) + 956);
  if ( v17 != -1 && (int)DxgkQueryMonitorTypeLockHeld((DXGADAPTER *)a1, v17, 0LL, (__int64)v69, 0LL, 0LL) < 0 )
  {
    v35 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
    *(_QWORD *)(v35 + 24) = 4702LL;
    WdLogEvent5_WdAssertion(v35);
  }
  COREADAPTERACCESS::Release(a2);
  SessionViewOwner = ADAPTER_DISPLAY::GetSessionViewOwner(a1[247], a4->VidPnSourceId, v22, v23);
  v72 = (SESSION_VIEW *)SessionViewOwner;
  if ( !SessionViewOwner
    || *((_DWORD *)SessionViewOwner + 10) <= 1u
    || !SESSION_VIEW::IsCrossAdapterView((SESSION_VIEW *)SessionViewOwner) && !a3
    || (PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(v36),
        PrimaryDisplaySource != (const struct DISPLAY_SOURCE *)(*((_QWORD *)a1[247] + 14) + 1008LL * a4->VidPnSourceId))
    || (*(_QWORD *)&v69[7] = SESSION_VIEW::GetNextDisplaySource(v38, PrimaryDisplaySource),
        (v39 = *(_QWORD *)&v69[7]) == 0) )
  {
LABEL_13:
    v25 = COREADAPTERACCESS::AcquireExclusive(a2);
    v12 = v25;
    if ( v25 < 0 )
    {
      v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v26);
      v55[3] = v12;
    }
    else
    {
      v27 = ADAPTER_DISPLAY::GetCachedModeList((DXGADAPTER **)a1[247], a4);
      v12 = v27;
      if ( v27 >= 0 )
        goto LABEL_21;
      if ( v27 == -1073741275 )
      {
        ModeList = ADAPTER_DISPLAY::CreateModeList(a1[247], a3, a4);
        v12 = ModeList;
        if ( ModeList >= 0 )
        {
          if ( v7 )
          {
            p_ModeCount = &a4->ModeCount;
            v58 = CombineModeList((int)a4 + 16, (int)a4 + 8, *(_DWORD *)&v69[3], (_DWORD)v70, 1);
            v12 = v58;
            if ( v58 < 0 )
            {
              v60 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v59);
              v60[3] = a1;
              v60[4] = a4->VidPnSourceId;
              v60[5] = v12;
              WdLogEvent5_WdDmmEvent(v60);
              pModeList = a4->pModeList;
              *p_ModeCount = 0;
              operator delete(pModeList);
              a4->pModeList = 0LL;
              goto LABEL_21;
            }
            for ( i = 0; i < *p_ModeCount; *((_DWORD *)&a4->pModeList[v63].Flags + 1) &= ~0x80u )
              v63 = i++;
          }
          *a5 = 1;
          v33 = ADAPTER_DISPLAY::SetCachedModeList(a1[247], a4);
          v34 = v33;
          if ( v33 < 0 )
          {
            v64 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
            v64[3] = a4->VidPnSourceId;
            v64[4] = a4;
            v64[5] = v34;
            WdLogEvent5_WdDmmEvent(v64);
          }
          else
          {
            *a5 = 0;
          }
          LODWORD(v12) = 0;
LABEL_21:
          if ( v70 )
            operator delete(v70);
          goto LABEL_4;
        }
        if ( a3 && ModeList == -1071775483 )
        {
          v56 = WdLogNewEntry5_WdAssertion(v30, v29, v31, v32);
          *(_QWORD *)(v56 + 24) = 4849LL;
          WdLogEvent5_WdAssertion(v56);
        }
        v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v30);
        v55[3] = a4->VidPnSourceId;
        v55[4] = v12;
      }
      else
      {
        v55 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v13);
        v55[3] = a4->VidPnSourceId;
        v55[4] = a1;
        v55[5] = v12;
      }
    }
    WdLogEvent5_WdDmmEvent(v55);
    goto LABEL_21;
  }
  while ( 1 )
  {
    v40 = *(struct DXGADAPTER **)(*(_QWORD *)(v39 + 8) + 16LL);
    v68 = 0;
    memset(&v71, 0, sizeof(v71));
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v73, v40, 0LL);
    v41 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v73);
    v12 = v41;
    if ( v41 < 0 )
      break;
    v42 = *(D3DDDI_VIDEO_PRESENT_SOURCE_ID **)&v69[7];
    if ( (int)DxgkQueryMonitorTypeLockHeld(
                v40,
                *(_DWORD *)(*(_QWORD *)&v69[7] + 956LL),
                0LL,
                (__int64)&v69[1],
                0LL,
                0LL) < 0 )
    {
      v47 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
      *(_QWORD *)(v47 + 24) = 4757LL;
      WdLogEvent5_WdAssertion(v47);
    }
    if ( v69[0] == v69[1] )
    {
      v71.VidPnSourceId = v42[4];
      DisplayModeList = DxgkpGetDisplayModeList(v40, (struct COREADAPTERACCESS *)v73, a3, &v71, &v68);
      v12 = DisplayModeList;
      if ( DisplayModeList < 0 )
      {
        if ( DisplayModeList == -1071775483 )
        {
          v53 = WdLogNewEntry5_WdAssertion(v50, v49, v51, v52);
          *(_QWORD *)(v53 + 24) = 4775LL;
          WdLogEvent5_WdAssertion(v53);
        }
LABEL_40:
        v54 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v50);
        v54[3] = v40;
        v54[4] = v71.VidPnSourceId;
        v54[5] = v12;
        WdLogEvent5_WdDmmEvent(v54);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
        goto LABEL_21;
      }
      v12 = (int)CombineModeList((unsigned int)&v69[3], (unsigned int)&v70, v71.ModeCount, v71.pModeList, 1);
      if ( v68 )
        operator delete(v71.pModeList);
      if ( (int)v12 < 0 )
        goto LABEL_40;
      v42 = *(D3DDDI_VIDEO_PRESENT_SOURCE_ID **)&v69[7];
    }
    *(_QWORD *)&v69[7] = SESSION_VIEW::GetNextDisplaySource(v72, (const struct DISPLAY_SOURCE *)v42);
    v39 = *(_QWORD *)&v69[7];
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
    if ( !v39 )
    {
      v7 = *(_DWORD *)&v69[3];
      goto LABEL_13;
    }
  }
  v67 = WdLogNewEntry5_WdDmmEvent(0LL);
  *(_QWORD *)(v67 + 24) = v40;
  *(_QWORD *)(v67 + 32) = v12;
  WdLogEvent5_WdDmmEvent(v67);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v73);
  return (unsigned int)v12;
}
