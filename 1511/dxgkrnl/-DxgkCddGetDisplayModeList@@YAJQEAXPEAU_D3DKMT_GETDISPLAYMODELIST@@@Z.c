/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00C0910
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0007070 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0007098 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     memmove @ 0x1C00120C0 (memmove.c)
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00C0A9C (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C014034C (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
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
  _QWORD *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  _QWORD *v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rax
  struct _D3DKMT_GETDISPLAYMODELIST v37; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v38[56]; // [rsp+48h] [rbp-38h] BYREF
  unsigned __int8 v39; // [rsp+A0h] [rbp+20h] BYREF
  struct DXGADAPTER *v40; // [rsp+B0h] [rbp+30h] BYREF

  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3004);
  memset(&v37, 0, sizeof(v37));
  v39 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, &v40);
    v10 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdEvent(v7, v6, v8, v9);
      v31[3] = a1;
      v31[4] = a2->VidPnSourceId;
      v31[5] = v10;
      WdLogEvent5_WdEvent(v31);
    }
    else
    {
      v11 = v40;
      if ( !v40 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v7);
        *(_QWORD *)(v32 + 24) = 1182LL;
        WdLogEvent5_WdAssertion(v32);
      }
      DxgkWaitForMonitorEventDoneInternal(v11);
      LOBYTE(v40) = 0;
      v12 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40, 0);
      v14 = v12;
      if ( v12 < 0 )
      {
        v33 = WdLogNewEntry5_WdError(v13);
        *(_QWORD *)(v33 + 24) = v14;
        WdLogEvent5_WdError(v33);
        LODWORD(v10) = v14;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v38, v11, 0LL);
        DXGADAPTER::ReleaseReference(v11);
        v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v38);
        v10 = v15;
        if ( v15 < 0 )
        {
          v34 = (_QWORD *)WdLogNewEntry5_WdEvent(v17, v16, v18, v19);
          v34[3] = v10;
          v34[4] = PsGetCurrentProcess();
          v34[5] = a2->hAdapter;
          v34[6] = v11;
          WdLogEvent5_WdEvent(v34);
        }
        else
        {
          if ( !*((_QWORD *)v11 + 248) )
          {
            v29 = WdLogNewEntry5_WdAssertion(v17);
            *(_QWORD *)(v29 + 24) = 1222LL;
            WdLogEvent5_WdAssertion(v29);
          }
          v37.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v11, (struct COREADAPTERACCESS *)v38, 0, &v37, &v39, 0LL);
          v10 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v35 = WdLogNewEntry5_WdDmmEvent(v22);
            *(_QWORD *)(v35 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v35 + 32) = v10;
            WdLogEvent5_WdDmmEvent(v35);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v37.ModeCount )
              {
                v36 = WdLogNewEntry5_WdWarning(pModeList, v21, v23, v24);
                *(_QWORD *)(v36 + 24) = a2->ModeCount;
                *(_QWORD *)(v36 + 32) = v37.ModeCount;
                WdLogEvent5_WdWarning(v36);
                LODWORD(v10) = -1073741789;
              }
              else
              {
                memmove(pModeList, v37.pModeList, 44LL * v37.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v37.ModeCount;
            }
            if ( v39 )
            {
              operator delete(v37.pModeList);
              v37.pModeList = 0LL;
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v38);
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v40);
    }
  }
  else
  {
    LODWORD(v10) = -1073741811;
    v30 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v30[3] = -1073741811LL;
    v30[4] = PsGetCurrentProcess();
    v30[5] = a2->hAdapter;
    WdLogEvent5_WdError(v30);
  }
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v26, &EventProfilerExit, v27, 3004);
  return (unsigned int)v10;
}
