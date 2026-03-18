/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00A6E90
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     memmove @ 0x1C0010940 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAE@Z @ 0x1C00A7470 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00A7628 (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  int PairingAdapters; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  struct DXGADAPTER *v11; // r14
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rbx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  int DisplayModeList; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v29; // rax
  _QWORD *v30; // rbx
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  _QWORD *v35; // rbx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // rax
  struct _D3DKMT_GETDISPLAYMODELIST v39; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v40[56]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 v41; // [rsp+A0h] [rbp+20h] BYREF
  struct DXGADAPTER *v42; // [rsp+B0h] [rbp+30h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3004);
  memset(&v39, 0, sizeof(v39));
  v41 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, &v42);
    v10 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      v32[3] = a1;
      v32[4] = a2->VidPnSourceId;
      v32[5] = v10;
      WdLogEvent5_WdEvent(v32);
    }
    else
    {
      v11 = v42;
      if ( !v42 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
        *(_QWORD *)(v33 + 24) = 1176LL;
        WdLogEvent5_WdAssertion(v33);
      }
      DxgkWaitForMonitorEventDoneInternal(v11);
      LOBYTE(v42) = 0;
      v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v42, 0);
      v14 = v12;
      if ( v12 < 0 )
      {
        v34 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v34 + 24) = v14;
        WdLogEvent5_WdError(v34);
        LODWORD(v10) = v14;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v40, v11, 0LL);
        DXGADAPTER::ReleaseReference(v11);
        v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v40);
        v10 = v15;
        if ( v15 < 0 )
        {
          v35 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
          v35[3] = v10;
          v35[4] = PsGetCurrentProcess(v36);
          v35[5] = a2->hAdapter;
          v35[6] = v11;
          WdLogEvent5_WdEvent(v35);
        }
        else
        {
          if ( !*((_QWORD *)v11 + 247) )
          {
            v29 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
            *(_QWORD *)(v29 + 24) = 1216LL;
            WdLogEvent5_WdAssertion(v29);
          }
          v39.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v11, (struct COREADAPTERACCESS *)v40, 0, &v39, &v41);
          v10 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v37 = WdLogNewEntry5_WdDmmEvent(v22);
            *(_QWORD *)(v37 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v37 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v37);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v39.ModeCount )
              {
                v38 = WdLogNewEntry5_WdWarning(pModeList, v21, v23, v24);
                *(_QWORD *)(v38 + 24) = a2->ModeCount;
                *(_QWORD *)(v38 + 32) = v39.ModeCount;
                WdLogEvent5_WdWarning(v38);
                LODWORD(v10) = -1073741789;
              }
              else
              {
                memmove(pModeList, v39.pModeList, 44LL * v39.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v39.ModeCount;
            }
            if ( v41 )
            {
              operator delete(v39.pModeList);
              v39.pModeList = 0LL;
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v40);
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v42);
    }
  }
  else
  {
    LODWORD(v10) = -1073741811;
    v30 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v30[3] = -1073741811LL;
    v30[4] = PsGetCurrentProcess(v31);
    v30[5] = a2->hAdapter;
    WdLogEvent5_WdError(v30);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 3004);
  return (unsigned int)v10;
}
