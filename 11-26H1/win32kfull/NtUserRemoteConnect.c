/*
 * XREFs of NtUserRemoteConnect @ 0x140233DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??$wcsncpycch@PEAGV?$UserModePointer@G@@@@YAKPEAGV?$UserModePointer@G@@K@Z @ 0x14029073C (--$wcsncpycch@PEAGV-$UserModePointer@G@@@@YAKPEAGV-$UserModePointer@G@@K@Z.c)
 *     ??4?$SGRDPgptiTSRequest@PEAUtagTHREADINFO@@@@QEAAAEAPEAUtagTHREADINFO@@AEBQEAU1@@Z @ 0x140296634 (--4-$SGRDPgptiTSRequest@PEAUtagTHREADINFO@@@@QEAAAEAPEAUtagTHREADINFO@@AEBQEAU1@@Z.c)
 *     __report_rangecheckfailure @ 0x140297D70 (__report_rangecheckfailure.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall NtUserRemoteConnect(void *Src, unsigned int a2, __int64 a3)
{
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v6; // r12
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rcx
  __int64 v10; // rcx
  _OWORD *v11; // rax
  _OWORD *v12; // rcx
  __int64 v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // rcx
  struct tagTHREADINFO *v17; // rbx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  unsigned __int8 v25[8]; // [rsp+30h] [rbp-2F8h] BYREF
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v26; // [rsp+38h] [rbp-2F0h] BYREF
  unsigned int v27; // [rsp+40h] [rbp-2E8h]
  _BYTE v28[320]; // [rsp+50h] [rbp-2D8h] BYREF
  GUID ActivityId; // [rsp+190h] [rbp-198h] BYREF
  _BYTE v30[320]; // [rsp+1A0h] [rbp-188h] BYREF
  _WORD v31[12]; // [rsp+2E0h] [rbp-48h] BYREF

  v25[0] = 0;
  ActivityId = 0LL;
  EtwActivityIdControl(3u, &ActivityId);
  DisplayScenarioContextEnsureAndAssociate(&ActivityId, 0x1Fu, 0, &v26, v25);
  v6 = v26;
  memset_0(v30, 0, sizeof(v30));
  EnterCrit(0LL, 0LL);
  v8 = *(_QWORD *)(W32GetUserGdiSessionState(v7) + 40);
  if ( PsGetCurrentProcess(v9) == v8 )
  {
    memset_0(v28, 0, sizeof(v28));
    RtlCopyFromUser(v28, Src, 0x140uLL);
    v11 = v30;
    v12 = v28;
    v13 = 2LL;
    do
    {
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11 += 8;
      *(v11 - 1) = v12[7];
      v12 += 8;
      --v13;
    }
    while ( v13 );
    *v11 = *v12;
    v11[1] = v12[1];
    v11[2] = v12[2];
    v11[3] = v12[3];
    v14 = a2;
    if ( a2 && (a3 & 1) != 0 )
      ExRaiseDatatypeMisalignment();
    if ( a2 > 9 )
      v14 = 9;
    v15 = v14;
    v27 = v14;
    wcsncpycch<unsigned short *,UserModePointer<unsigned short>>(v31, a3, v14);
    if ( 2 * (unsigned __int64)v15 >= 0x14 )
      _report_rangecheckfailure();
    v31[v15] = 0;
    v17 = PtiCurrent(v16);
    *(_QWORD *)(W32GetUserSessionState(v19, v18) + 68448) = v17;
    W32GetUserSessionState(v21, v20);
    v22 = xxxRemoteConnect(v30, v15, v31, v6);
    v23 = v22;
    if ( v22 < 0 )
    {
      *(_QWORD *)&ActivityId.Data1 = 0LL;
      SGRDPgptiTSRequest<tagTHREADINFO *>::operator=(v10, &ActivityId);
    }
  }
  else
  {
    v23 = -1073741790;
  }
  UserSessionSwitchLeaveCrit(v10);
  if ( v25[0] )
    DisplayScenarioContextDissociate(&v26);
  return v23;
}
