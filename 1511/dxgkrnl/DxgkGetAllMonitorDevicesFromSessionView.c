/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00A9D40
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000C12C (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C001FF24 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00900C8 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C009DB50 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C009DB64 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 *     MonitorIsMonitorConnected @ 0x1C00ABCE0 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z @ 0x1C0145AAC (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        char *a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v5; // r14d
  __int64 v6; // rdi
  unsigned int v7; // r12d
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  __int64 v13; // rcx
  DXGSESSIONDATA **SessionViewFromSource; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rbx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 result; // rax
  __int64 v25; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v27; // rbx
  char v28; // al
  __int64 v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rdi
  __int64 v35; // rax
  _QWORD *v36; // rdx
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // rdi
  _QWORD *v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rcx
  __int64 v48; // rax
  int v49; // eax
  __int64 v50; // rcx
  int IsMonitorConnected; // eax
  __int64 v52; // rdx
  __int64 v53; // rcx
  __int64 v54; // r8
  __int64 v55; // r9
  unsigned int v56; // [rsp+2Ch] [rbp-4Dh] BYREF
  SESSION_VIEW *v57; // [rsp+58h] [rbp-21h]
  _BYTE v58[104]; // [rsp+60h] [rbp-19h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v6);
    v57 = (SESSION_VIEW *)SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdEvent(v16, v15, v17, v18);
      v19[3] = v6;
      v19[4] = a1->HighPart;
      v19[5] = a1->LowPart;
      v19[6] = (unsigned int)PsGetCurrentProcessSessionId(v21, v20, v22, v23);
      WdLogEvent5_WdEvent(v19);
      *a3 = 1;
      result = 0LL;
      *a4 = 0;
      return result;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    if ( !PrimaryDisplaySource )
    {
      v38 = WdLogNewEntry5_WdAssertion(v25);
      *(_QWORD *)(v38 + 24) = 960LL;
      WdLogEvent5_WdAssertion(v38);
    }
    v27 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
    if ( *((_DWORD *)PrimaryDisplaySource + 4) != (_DWORD)v6
      || a1->LowPart != (_DWORD)v27
      || (v28 = 1, a1->HighPart != HIDWORD(v27)) )
    {
      v28 = 0;
    }
    *a3 = v28;
    while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6
         && *a1 == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL) )
    {
LABEL_12:
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v57, PrimaryDisplaySource);
      if ( !PrimaryDisplaySource )
      {
        if ( v7 > *a4 )
          v5 = -2147483643;
        *a4 = v7;
        return v5;
      }
      LODWORD(v6) = a2;
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v58,
      *(struct DXGADAPTER *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
      0LL);
    v39 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v58);
    v44 = v39;
    if ( v39 >= 0 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 158LL) )
      {
        v46 = WdLogNewEntry5_WdAssertion(v41);
        *(_QWORD *)(v46 + 24) = 1006LL;
        WdLogEvent5_WdAssertion(v46);
      }
      if ( !a5 || v7 >= *a4 )
      {
        ++v7;
        goto LABEL_38;
      }
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                  *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                  *((_DWORD *)PrimaryDisplaySource + 4),
                  1uLL,
                  &v56) < 0
        || v56 != -1 )
      {
        v48 = WdLogNewEntry5_WdAssertion(v47);
        *(_QWORD *)(v48 + 24) = 1024LL;
        WdLogEvent5_WdAssertion(v48);
      }
      v49 = DmmEnumClientVidPnPathTargetsFromSource(
              *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
              *((_DWORD *)PrimaryDisplaySource + 4),
              0LL,
              &v56);
      v34 = v49;
      if ( v49 < 0 )
      {
        v35 = WdLogNewEntry5_WdError(v50);
        goto LABEL_20;
      }
      if ( v56 == -1 )
      {
        v35 = WdLogNewEntry5_WdError(v50);
        v34 = -1073741811LL;
LABEL_20:
        v36 = (_QWORD *)v35;
        v37 = *((unsigned int *)PrimaryDisplaySource + 4);
LABEL_21:
        v36[3] = v37;
        v36[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL));
        v36[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
        v36[6] = v34;
        WdLogEvent5_WdError(v36);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
        return (unsigned int)v34;
      }
      IsMonitorConnected = MonitorIsMonitorConnected(
                             *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                             v56,
                             1u);
      v34 = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
      {
        v36 = (_QWORD *)WdLogNewEntry5_WdError(v53);
        v37 = v56;
        goto LABEL_21;
      }
      v45 = (_QWORD *)WdLogNewEntry5_WdEvent(v53, v52, v54, v55);
      v45[3] = v56;
      v45[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL));
      v45[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
      v45[6] = v34;
    }
    else
    {
      v45 = (_QWORD *)WdLogNewEntry5_WdEvent(v41, v40, v42, v43);
      v45[3] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL));
      v45[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
      v45[5] = v44;
    }
    WdLogEvent5_WdEvent(v45);
LABEL_38:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v58);
    goto LABEL_12;
  }
  v29 = WdLogNewEntry5_WdError(v13);
  LODWORD(v34) = -1073741811;
  *(_QWORD *)(v29 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v31, v30, v32, v33);
  *(_QWORD *)(v29 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v29);
  return (unsigned int)v34;
}
