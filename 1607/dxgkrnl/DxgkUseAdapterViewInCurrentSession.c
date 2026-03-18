/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C00C4860
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00C1860 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C00017E4 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C00017FC (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C00080F0 (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C007B938 (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C007B9AC (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C007C060 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C007C134 (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C007C1B8 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // r14
  __int64 v4; // r15
  char v6; // r12
  DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  DXGSESSIONDATA ***SessionData; // r13
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v15; // r14
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rax
  struct DISPLAY_SOURCE *v19; // rdx
  int v20; // eax
  __int64 v21; // rcx
  __int64 v23; // rax
  __int64 v24; // rbx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  _QWORD *v33; // rax
  __int64 LowPart; // rcx
  SESSION_ADAPTER *v35; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v36[10]; // [rsp+30h] [rbp-50h] BYREF
  char v38; // [rsp+D8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  Global = DXGGLOBAL::GetGlobal((__int64)a1);
  SessionData = (DXGSESSIONDATA ***)DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v38 = 0;
    v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v38, 1);
    v12 = v10;
    if ( v10 < 0 )
    {
      v29 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v29 + 24) = v12;
      WdLogEvent5_WdError(v29);
      goto LABEL_20;
    }
    if ( v3 )
    {
      LODWORD(v12) = DXGSESSIONDATA::AddAdapterToSession(SessionData, a1, (DXGSESSIONDATA *****)&v35);
      if ( (int)v12 < 0 )
      {
LABEL_20:
        DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v38);
        return (unsigned int)v12;
      }
      SessionAdapterFromLuid = v35;
      v6 = 1;
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)SessionData, a1);
      if ( !SessionAdapterFromLuid )
      {
        v30 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v30[3] = a1->HighPart;
        v30[4] = a1->LowPart;
        v30[5] = -1073741811LL;
        WdLogEvent5_WdError(v30);
        LODWORD(v12) = -1073741811;
        goto LABEL_20;
      }
    }
    if ( (_DWORD)v4 == -1 )
    {
LABEL_16:
      if ( (int)v12 >= 0 )
      {
        if ( !v3 )
          goto LABEL_24;
        v6 = 0;
      }
LABEL_19:
      if ( !v6 )
        goto LABEL_20;
LABEL_24:
      DXGSESSIONDATA::RemoveAdapterFromSession((DXGSESSIONDATA *)SessionData, a1);
      goto LABEL_20;
    }
    v15 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 3);
    if ( !v15 )
    {
      LODWORD(v12) = -1073741811;
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v31[3] = a1->HighPart;
      v31[4] = a1->LowPart;
      v31[5] = v4;
      v31[6] = -1073741811LL;
      WdLogEvent5_WdError(v31);
      goto LABEL_19;
    }
    if ( !*((_QWORD *)v15 + 266) )
    {
      v23 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v23 + 24) = 341LL;
      WdLogEvent5_WdAssertion(v23);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v36, v15, 0LL);
    v16 = COREADAPTERACCESS::AcquireExclusive(v36);
    v12 = v16;
    if ( v16 < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v32[3] = a1->HighPart;
      v32[4] = a1->LowPart;
      v32[5] = v12;
    }
    else
    {
      v18 = *((_QWORD *)v15 + 266);
      if ( (unsigned int)v4 >= *(_DWORD *)(v18 + 80) )
      {
        LODWORD(v12) = -1073741811;
        v33 = (_QWORD *)WdLogNewEntry5_WdError(v17);
        v33[3] = v4;
        v33[4] = a1->HighPart;
        v33[5] = a1->LowPart;
        v33[6] = -1073741811LL;
        WdLogEvent5_WdError(v33);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
        goto LABEL_19;
      }
      v19 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v18 + 112) + 1016 * v4);
      if ( a3 )
        v20 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v19);
      else
        v20 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v19);
      v12 = v20;
      if ( v20 >= 0 )
        goto LABEL_15;
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v21);
      v32[3] = v4;
      v32[4] = a1->HighPart;
      LowPart = a1->LowPart;
      v32[6] = v12;
      v32[5] = LowPart;
    }
    WdLogEvent5_WdError(v32);
LABEL_15:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v36);
    v3 = a3;
    goto LABEL_16;
  }
  v24 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v24 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v26, v25, v27, v28);
  *(_QWORD *)(v24 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v24);
  return 3221225485LL;
}
