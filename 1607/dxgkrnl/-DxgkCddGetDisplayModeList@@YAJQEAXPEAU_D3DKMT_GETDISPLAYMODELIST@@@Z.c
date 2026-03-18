/*
 * XREFs of ?DxgkCddGetDisplayModeList@@YAJQEAXPEAU_D3DKMT_GETDISPLAYMODELIST@@@Z @ 0x1C00D1310
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     memmove @ 0x1C0012480 (memmove.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z @ 0x1C007A348 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODELIST@@PEAEPEAUDXGK_STEREO_PARAMS@@@Z @ 0x1C00D1678 (-DxgkpGetDisplayModeList@@YAJPEAVDXGADAPTER@@AEAVCOREADAPTERACCESS@@EAEAU_D3DKMT_GETDISPLAYMODEL.c)
 *     ?DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z @ 0x1C00D19BC (-DxgkWaitForMonitorEventDoneInternal@@YAJPEAVDXGADAPTER@@@Z.c)
 */

__int64 __fastcall DxgkCddGetDisplayModeList(struct DXGADAPTER *a1, struct _D3DKMT_GETDISPLAYMODELIST *a2, __int64 a3)
{
  int PairingAdapters; // eax
  __int64 v6; // rcx
  __int64 v7; // rsi
  struct DXGADAPTER *v8; // r14
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rcx
  int DisplayModeList; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  D3DKMT_DISPLAYMODE *pModeList; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v23; // rax
  _QWORD *v24; // rbx
  __int64 v25; // rcx
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  _QWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  _D3DKMT_GETDISPLAYMODELIST v33; // [rsp+30h] [rbp-39h] BYREF
  _BYTE v34[112]; // [rsp+50h] [rbp-19h] BYREF
  unsigned __int8 v35; // [rsp+D0h] [rbp+67h] BYREF
  struct DXGADAPTER *v36; // [rsp+E0h] [rbp+77h] BYREF
  unsigned __int64 v37; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)a1, &EventProfilerEnter, a3, 3004);
  memset(&v33, 0, sizeof(v33));
  v35 = 0;
  if ( a1 )
  {
    PairingAdapters = DxgkpGetPairingAdapters(a1, a2->VidPnSourceId, 0LL, 0LL, &v36, &v37);
    v7 = PairingAdapters;
    if ( PairingAdapters < 0 )
    {
      v26 = (_QWORD *)WdLogNewEntry5_WdEvent(v6);
      v26[3] = a1;
      v26[4] = a2->VidPnSourceId;
      v26[5] = v7;
      WdLogEvent5_WdEvent(v26);
    }
    else
    {
      v8 = v36;
      if ( !v36 )
      {
        v27 = WdLogNewEntry5_WdAssertion(v6);
        *(_QWORD *)(v27 + 24) = 1182LL;
        WdLogEvent5_WdAssertion(v27);
      }
      DxgkWaitForMonitorEventDoneInternal(v8);
      LOBYTE(v36) = 0;
      v9 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v36, 0);
      v11 = v9;
      if ( v9 < 0 )
      {
        v28 = WdLogNewEntry5_WdError(v10);
        *(_QWORD *)(v28 + 24) = v11;
        WdLogEvent5_WdError(v28);
        LODWORD(v7) = v11;
      }
      else
      {
        COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v34, v8, 0LL);
        DXGADAPTER::ReleaseReference(v8);
        v12 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v34);
        v7 = v12;
        if ( v12 < 0 )
        {
          v29 = (_QWORD *)WdLogNewEntry5_WdEvent(v13);
          v29[3] = v7;
          v29[4] = PsGetCurrentProcess(v30);
          v29[5] = a2->hAdapter;
          v29[6] = v8;
          WdLogEvent5_WdEvent(v29);
        }
        else
        {
          if ( !*((_QWORD *)v8 + 266) )
          {
            v23 = WdLogNewEntry5_WdAssertion(v13);
            *(_QWORD *)(v23 + 24) = 1222LL;
            WdLogEvent5_WdAssertion(v23);
          }
          v33.VidPnSourceId = a2->VidPnSourceId;
          DisplayModeList = DxgkpGetDisplayModeList(v8, (struct COREADAPTERACCESS *)v34, 0, &v33, &v35, 0LL);
          v7 = DisplayModeList;
          if ( DisplayModeList < 0 )
          {
            v31 = WdLogNewEntry5_WdDmmEvent(v16);
            *(_QWORD *)(v31 + 24) = a2->VidPnSourceId;
            *(_QWORD *)(v31 + 32) = v7;
            WdLogEvent5_WdDmmEvent(v31);
          }
          else
          {
            pModeList = a2->pModeList;
            if ( pModeList )
            {
              if ( a2->ModeCount < v33.ModeCount )
              {
                v32 = WdLogNewEntry5_WdWarning(pModeList, v15, v17, v18);
                *(_QWORD *)(v32 + 24) = a2->ModeCount;
                *(_QWORD *)(v32 + 32) = v33.ModeCount;
                WdLogEvent5_WdWarning(v32);
                LODWORD(v7) = -1073741789;
              }
              else
              {
                memmove(pModeList, v33.pModeList, 44LL * v33.ModeCount);
              }
            }
            else
            {
              a2->ModeCount = v33.ModeCount;
            }
            if ( v35 )
            {
              operator delete(v33.pModeList);
              v33.pModeList = 0LL;
            }
          }
        }
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v34);
      }
      DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v36);
    }
  }
  else
  {
    LODWORD(v7) = -1073741811;
    v24 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v24[3] = -1073741811LL;
    v24[4] = PsGetCurrentProcess(v25);
    v24[5] = a2->hAdapter;
    WdLogEvent5_WdError(v24);
  }
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v20, &EventProfilerExit, v21, 3004);
  return (unsigned int)v7;
}
