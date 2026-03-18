/*
 * XREFs of DxgkUseAdapterViewInCurrentSession @ 0x1C005F3B0
 * Callers:
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z @ 0x1C0001A8C (-AcquireExclusive@COREADAPTERACCESS@@QEAAJW4DXGADAPTER_EXCLUSIVEACCESS_REASON@@@Z.c)
 *     ?ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ @ 0x1C0004D18 (-ReleaseModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAXXZ.c)
 *     ?AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z @ 0x1C0004D38 (-AcquireModeChangeLock@DXGSESSIONMODECHANGELOCK@@QEAAJE@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z @ 0x1C008F13C (-RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@@Z.c)
 *     ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C008F1B0 (-AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C008F454 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 *     ?RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C008F4AC (-RemoveDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 *     ?AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z @ 0x1C008F530 (-AddDisplaySource@SESSION_ADAPTER@@QEAAJPEAVDISPLAY_SOURCE@@@Z.c)
 */

__int64 __fastcall DxgkUseAdapterViewInCurrentSession(struct _LUID *a1, unsigned int a2, char a3)
{
  char v3; // r14
  __int64 v4; // r15
  char v6; // r12
  DXGGLOBAL *Global; // rax
  __int64 v8; // rcx
  DXGSESSIONDATA *SessionData; // r13
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  SESSION_ADAPTER *SessionAdapterFromLuid; // rdi
  struct DXGADAPTER *v18; // r14
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rax
  struct DISPLAY_SOURCE *v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // rax
  _QWORD *v30; // rax
  _QWORD *v31; // rax
  _QWORD *v32; // rax
  __int64 LowPart; // rcx
  SESSION_ADAPTER *v34; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v35[7]; // [rsp+28h] [rbp-38h] BYREF
  char v37; // [rsp+B8h] [rbp+58h] BYREF

  v3 = a3;
  v4 = a2;
  v6 = 0;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v37 = 0;
    v10 = DXGSESSIONMODECHANGELOCK::AcquireModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v37, 1);
    v12 = v10;
    if ( v10 < 0 )
    {
      v28 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v28 + 24) = v12;
      WdLogEvent5_WdError(v28);
      goto LABEL_20;
    }
    if ( v3 )
    {
      LODWORD(v12) = DXGSESSIONDATA::AddAdapterToSession(SessionData, a1, &v34);
      if ( (int)v12 < 0 )
      {
LABEL_20:
        DXGSESSIONMODECHANGELOCK::ReleaseModeChangeLock((DXGSESSIONMODECHANGELOCK *)&v37);
        return (unsigned int)v12;
      }
      SessionAdapterFromLuid = v34;
      v6 = 1;
    }
    else
    {
      SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(SessionData, a1);
      if ( !SessionAdapterFromLuid )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdError(v14);
        v29[3] = a1->HighPart;
        v29[4] = a1->LowPart;
        v29[5] = -1073741811LL;
        WdLogEvent5_WdError(v29);
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
      DXGSESSIONDATA::RemoveAdapterFromSession(SessionData, a1);
      goto LABEL_20;
    }
    v18 = (struct DXGADAPTER *)*((_QWORD *)SessionAdapterFromLuid + 3);
    if ( !v18 )
    {
      LODWORD(v12) = -1073741811;
      v30 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v30[3] = a1->HighPart;
      v30[4] = a1->LowPart;
      v30[5] = v4;
      v30[6] = -1073741811LL;
      WdLogEvent5_WdError(v30);
      goto LABEL_19;
    }
    if ( !*((_QWORD *)v18 + 247) )
    {
      v26 = WdLogNewEntry5_WdAssertion(v14, v13, v15, v16);
      *(_QWORD *)(v26 + 24) = 341LL;
      WdLogEvent5_WdAssertion(v26);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v35, v18, 0LL);
    v19 = COREADAPTERACCESS::AcquireExclusive(v35);
    v12 = v19;
    if ( v19 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v20);
      v31[3] = a1->HighPart;
      v31[4] = a1->LowPart;
      v31[5] = v12;
    }
    else
    {
      v21 = *((_QWORD *)v18 + 247);
      if ( (unsigned int)v4 >= *(_DWORD *)(v21 + 80) )
      {
        LODWORD(v12) = -1073741811;
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v20);
        v32[3] = v4;
        v32[4] = a1->HighPart;
        v32[5] = a1->LowPart;
        v32[6] = -1073741811LL;
        WdLogEvent5_WdError(v32);
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
        goto LABEL_19;
      }
      v22 = (struct DISPLAY_SOURCE *)(*(_QWORD *)(v21 + 112) + 1008 * v4);
      if ( a3 )
        v23 = SESSION_ADAPTER::AddDisplaySource(SessionAdapterFromLuid, v22);
      else
        v23 = SESSION_ADAPTER::RemoveDisplaySource(SessionAdapterFromLuid, v22);
      v12 = v23;
      if ( v23 >= 0 )
        goto LABEL_15;
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v31[3] = v4;
      v31[4] = a1->HighPart;
      LowPart = a1->LowPart;
      v31[6] = v12;
      v31[5] = LowPart;
    }
    WdLogEvent5_WdError(v31);
LABEL_15:
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v35);
    v3 = a3;
    goto LABEL_16;
  }
  v27 = WdLogNewEntry5_WdError(v8);
  *(_QWORD *)(v27 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
  *(_QWORD *)(v27 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v27);
  return 3221225485LL;
}
