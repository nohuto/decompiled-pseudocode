/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00C1D80
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C000A750 (-GetHashBitMask@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     IsInternalVideoOutput @ 0x1C000B478 (IsInternalVideoOutput.c)
 *     ?GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ @ 0x1C0026954 (-GetHashBitShift@DXGADAPTERSOURCEHASH@@QEAAIXZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C007AC74 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C007AC88 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C00C3B08 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorIsMonitorConnected @ 0x1C00C3C08 (MonitorIsMonitorConnected.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z @ 0x1C01695CC (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEBU_LUID@@IPEAI@Z.c)
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
  __int64 v15; // rcx
  _QWORD *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 result; // rax
  __int64 v22; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rsi
  __int64 v24; // rbx
  char v25; // al
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rax
  _QWORD *v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v39; // rdi
  _QWORD *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  int IsMonitorConnected; // eax
  __int64 v47; // rcx
  unsigned int v48; // [rsp+2Ch] [rbp-5Dh] BYREF
  SESSION_VIEW *v49; // [rsp+50h] [rbp-39h]
  _BYTE v50[128]; // [rsp+58h] [rbp-31h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v6);
    v49 = (SESSION_VIEW *)SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v15);
      v16[3] = v6;
      v16[4] = a1->HighPart;
      v16[5] = a1->LowPart;
      v16[6] = (unsigned int)PsGetCurrentProcessSessionId(v18, v17, v19, v20);
      WdLogEvent5_WdEvent(v16);
      result = 0LL;
      *a3 = 1;
      *a4 = 0;
      return result;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource((SESSION_VIEW *)SessionViewFromSource);
    if ( !PrimaryDisplaySource )
    {
      v36 = WdLogNewEntry5_WdAssertion(v22);
      *(_QWORD *)(v36 + 24) = 993LL;
      WdLogEvent5_WdAssertion(v36);
    }
    v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
    if ( *((_DWORD *)PrimaryDisplaySource + 4) != (_DWORD)v6
      || a1->LowPart != (_DWORD)v24
      || (v25 = 1, a1->HighPart != HIDWORD(v24)) )
    {
      v25 = 0;
    }
    *a3 = v25;
    while ( *((_DWORD *)PrimaryDisplaySource + 4) == (_DWORD)v6 )
    {
      v26 = *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL);
      if ( a1->LowPart != *(_DWORD *)(v26 + 268) || a1->HighPart != *(_DWORD *)(v26 + 272) )
        break;
LABEL_13:
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v49, PrimaryDisplaySource);
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
      (COREADAPTERACCESS *)v50,
      *(struct DXGADAPTER *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
      0LL);
    v37 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v50);
    v39 = v37;
    if ( v37 >= 0 )
    {
      if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 134LL) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v38);
        *(_QWORD *)(v41 + 24) = 1039LL;
        WdLogEvent5_WdAssertion(v41);
      }
      if ( !a5 || v7 >= *a4 )
      {
        ++v7;
        goto LABEL_39;
      }
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                  *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                  *((unsigned int *)PrimaryDisplaySource + 4),
                  1LL,
                  &v48) < 0
        || v48 != -1 )
      {
        v43 = WdLogNewEntry5_WdAssertion(v42);
        *(_QWORD *)(v43 + 24) = 1057LL;
        WdLogEvent5_WdAssertion(v43);
      }
      v44 = DmmEnumClientVidPnPathTargetsFromSource(
              *(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
              *((unsigned int *)PrimaryDisplaySource + 4),
              0LL,
              &v48);
      v32 = v44;
      if ( v44 < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v45);
        goto LABEL_21;
      }
      if ( v48 == -1 )
      {
        v33 = WdLogNewEntry5_WdError(v45);
        v32 = -1073741811LL;
LABEL_21:
        v34 = (_QWORD *)v33;
        v35 = *((unsigned int *)PrimaryDisplaySource + 4);
LABEL_22:
        v34[3] = v35;
        v34[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
        v34[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
        v34[6] = v32;
        WdLogEvent5_WdError(v34);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
        return (unsigned int)v32;
      }
      IsMonitorConnected = MonitorIsMonitorConnected(
                             *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                             v48,
                             1u);
      v32 = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdError(v47);
        v35 = v48;
        goto LABEL_22;
      }
      v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v47);
      v40[3] = v48;
      v40[4] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
      v40[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
      v40[6] = v32;
    }
    else
    {
      v40 = (_QWORD *)WdLogNewEntry5_WdEvent(v38);
      v40[3] = *(int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 272LL);
      v40[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 268LL);
      v40[5] = v39;
    }
    WdLogEvent5_WdEvent(v40);
LABEL_39:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v50);
    goto LABEL_13;
  }
  v27 = WdLogNewEntry5_WdError(v13);
  LODWORD(v32) = -1073741811;
  *(_QWORD *)(v27 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v29, v28, v30, v31);
  *(_QWORD *)(v27 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v27);
  return (unsigned int)v32;
}
