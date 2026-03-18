/*
 * XREFs of DxgkGetAllMonitorDevicesFromSessionView @ 0x1C0061BF0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     DmmEnumClientVidPnPathTargetsFromSource @ 0x1C005FDB4 (DmmEnumClientVidPnPathTargetsFromSource.c)
 *     MonitorIsMonitorConnected @ 0x1C005FEF0 (MonitorIsMonitorConnected.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ @ 0x1C008EFF4 (-GetPrimaryDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@XZ.c)
 *     ?GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z @ 0x1C008F008 (-GetNextDisplaySource@SESSION_VIEW@@QEBAPEAVDISPLAY_SOURCE@@PEBV2@@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C008F0B8 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z @ 0x1C013F618 (-FindHashForAdapterAndSource@DXGADAPTERSOURCEHASH@@QEAAJPEAU_LUID@@IPEAI@Z.c)
 */

__int64 __fastcall DxgkGetAllMonitorDevicesFromSessionView(
        struct _LUID *a1,
        unsigned int a2,
        char *a3,
        unsigned int *a4,
        __int64 a5)
{
  unsigned int v5; // esi
  __int64 v6; // r13
  unsigned int v7; // r12d
  unsigned int *v8; // r14
  DXGGLOBAL *Global; // rax
  DXGSESSIONDATA *SessionData; // rax
  __int64 v13; // rcx
  SESSION_VIEW *SessionViewFromSource; // rax
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 result; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  struct DISPLAY_SOURCE *PrimaryDisplaySource; // rdi
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rbx
  char v27; // al
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  _QWORD *v42; // rdx
  __int64 LowPart; // rax
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  int v50; // eax
  __int64 v51; // rcx
  __int64 v52; // r8
  __int64 v53; // rax
  int IsMonitorConnected; // eax
  __int64 v55; // rcx
  __int64 v56; // r14
  struct DXGGLOBAL *v57; // rax
  unsigned int v58; // r8d
  __int64 v59; // rcx
  _QWORD *v60; // rax
  unsigned int v61; // ecx
  _BYTE v62[4]; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v63; // [rsp+24h] [rbp-5Ch] BYREF
  struct _LUID v64; // [rsp+28h] [rbp-58h] BYREF
  int v65; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v66; // [rsp+34h] [rbp-4Ch] BYREF
  SESSION_VIEW *v67; // [rsp+38h] [rbp-48h]
  _BYTE v68[64]; // [rsp+40h] [rbp-40h] BYREF

  v5 = 0;
  v6 = a2;
  v7 = 0;
  v8 = a4;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(SessionData, a1, v6);
    v67 = SessionViewFromSource;
    if ( !SessionViewFromSource )
    {
      v15 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v15[3] = v6;
      v15[4] = a1->HighPart;
      v15[5] = a1->LowPart;
      v15[6] = (unsigned int)PsGetCurrentProcessSessionId(v17, v16, v18, v19);
      WdLogEvent5_WdEvent(v15);
      *a3 = 1;
      result = 0LL;
      *v8 = 0;
      return result;
    }
    PrimaryDisplaySource = SESSION_VIEW::GetPrimaryDisplaySource(SessionViewFromSource);
    if ( !PrimaryDisplaySource )
    {
      v37 = WdLogNewEntry5_WdAssertion(v22, v21, v24, v25);
      *(_QWORD *)(v37 + 24) = 959LL;
      WdLogEvent5_WdAssertion(v37);
    }
    v26 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
    if ( *((_DWORD *)PrimaryDisplaySource + 4) != (_DWORD)v6
      || a1->LowPart != (_DWORD)v26
      || (v27 = 1, a1->HighPart != HIDWORD(v26)) )
    {
      v27 = 0;
    }
    *a3 = v27;
    while ( *((_DWORD *)PrimaryDisplaySource + 4) == a2
         && *a1 == *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL) )
    {
LABEL_12:
      PrimaryDisplaySource = SESSION_VIEW::GetNextDisplaySource(v67, PrimaryDisplaySource);
      if ( !PrimaryDisplaySource )
      {
        if ( v7 > *a4 )
          v5 = -2147483643;
        *a4 = v7;
        return v5;
      }
      v8 = a4;
    }
    COREADAPTERACCESS::COREADAPTERACCESS(
      (COREADAPTERACCESS *)v68,
      *(struct DXGADAPTER *const *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
      0LL);
    v64.LowPart = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v68);
    if ( (v64.LowPart & 0x80000000) != 0 )
    {
      v42 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v42[3] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL));
      v42[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
      LowPart = (int)v64.LowPart;
LABEL_26:
      v42[5] = LowPart;
      WdLogEvent5_WdEvent(v42);
LABEL_42:
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
      goto LABEL_12;
    }
    if ( !*(_BYTE *)(*((_QWORD *)PrimaryDisplaySource + 1) + 133LL) )
    {
      v44 = WdLogNewEntry5_WdAssertion(v39, v38, v40, v41);
      *(_QWORD *)(v44 + 24) = 1005LL;
      WdLogEvent5_WdAssertion(v44);
    }
    if ( a5 && v7 < *v8 )
    {
      if ( (int)DmmEnumClientVidPnPathTargetsFromSource(
                  *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
                  *((_DWORD *)PrimaryDisplaySource + 4),
                  1uLL,
                  &v63) < 0
        || v63 != -1 )
      {
        v49 = WdLogNewEntry5_WdAssertion(v46, v45, v47, v48);
        *(_QWORD *)(v49 + 24) = 1023LL;
        WdLogEvent5_WdAssertion(v49);
      }
      v50 = DmmEnumClientVidPnPathTargetsFromSource(
              *(DXGADAPTER **)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL),
              *((_DWORD *)PrimaryDisplaySource + 4),
              0LL,
              &v63);
      v33 = v50;
      if ( v50 < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v51);
        goto LABEL_20;
      }
      if ( v63 == -1 )
      {
        v34 = WdLogNewEntry5_WdError(v51);
        v33 = -1073741811LL;
LABEL_20:
        v35 = (_QWORD *)v34;
        v36 = *((unsigned int *)PrimaryDisplaySource + 4);
LABEL_21:
        v35[3] = v36;
        v35[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL));
        v35[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
        v35[6] = v33;
        WdLogEvent5_WdError(v35);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v68);
        return (unsigned int)v33;
      }
      v53 = *((_QWORD *)PrimaryDisplaySource + 1);
      LOBYTE(v52) = 1;
      v62[0] = 0;
      IsMonitorConnected = MonitorIsMonitorConnected(*(DXGADAPTER **)(v53 + 16), v63, v52, v62);
      v33 = IsMonitorConnected;
      if ( IsMonitorConnected < 0 )
      {
        v35 = (_QWORD *)WdLogNewEntry5_WdError(v55);
        v36 = v63;
        goto LABEL_21;
      }
      if ( !v62[0] )
      {
        v42 = (_QWORD *)WdLogNewEntry5_WdEvent();
        v42[3] = v63;
        v42[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL));
        LowPart = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
        v42[6] = v33;
        goto LABEL_26;
      }
      DmmGetVideoOutputTechnology(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL), v63, &v65, 0LL);
      v56 = 5LL * v7;
      *(_BYTE *)(a5 + 4 * v56 + 16) = IsInternalVideoOutput(v65);
      *(_DWORD *)(a5 + 4 * v56) = 536870913;
      v57 = DXGGLOBAL::GetGlobal();
      v58 = *((_DWORD *)PrimaryDisplaySource + 4);
      v64 = *(struct _LUID *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
      v64.LowPart = DXGADAPTERSOURCEHASH::FindHashForAdapterAndSource(
                      (struct DXGGLOBAL *)((char *)v57 + 808),
                      &v64,
                      v58,
                      &v66);
      if ( (v64.LowPart & 0x80000000) == 0 )
      {
        v61 = (v63 & 0xFFFFFFF) + (v66 << 28);
        *(_QWORD *)(a5 + 20LL * v7 + 8) = v26;
        *(_DWORD *)(a5 + 20LL * v7 + 4) = v61;
      }
      else
      {
        v60 = (_QWORD *)WdLogNewEntry5_WdError(v59);
        v60[3] = *((unsigned int *)PrimaryDisplaySource + 4);
        v60[4] = (int)HIDWORD(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL));
        v60[5] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
        v60[6] = (int)v64.LowPart;
        WdLogEvent5_WdError(v60);
        *(_QWORD *)(a5 + 20LL * v7 + 8) = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)PrimaryDisplaySource + 1) + 16LL) + 252LL);
        *(_DWORD *)(a5 + 20LL * v7 + 4) = v63;
      }
    }
    ++v7;
    goto LABEL_42;
  }
  v28 = WdLogNewEntry5_WdError(v13);
  LODWORD(v33) = -1073741811;
  *(_QWORD *)(v28 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v30, v29, v31, v32);
  *(_QWORD *)(v28 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v28);
  return (unsigned int)v33;
}
