/*
 * XREFs of NtUserSBGetParms @ 0x1402BAFF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x1400208C4 (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     _SBGetParms @ 0x140128C2C (_SBGetParms.c)
 *     GetScrollbarTypeString @ 0x14012905C (GetScrollbarTypeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_s @ 0x1401A15C0 (WPP_RECORDER_AND_TRACE_SF_s.c)
 *     Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline @ 0x1401D90A0 (Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline.c)
 *     WPP_RECORDER_AND_TRACE_SF_sq @ 0x140299C30 (WPP_RECORDER_AND_TRACE_SF_sq.c)
 *     W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___ @ 0x1402AD828 (W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserSBGetParms(__int64 a1, unsigned int a2, __int128 *a3, __int128 *a4)
{
  char v6; // di
  __int64 v7; // rdx
  struct MOVESIZEDATA *v8; // rcx
  __int64 v9; // rsi
  int v10; // ebx
  bool v11; // si
  const char *ScrollbarTypeString; // rax
  int v13; // r8d
  int v14; // edx
  int v15; // r9d
  __int64 *v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  char v19; // si
  const char *v20; // rax
  __int64 v21; // r9
  int v22; // eax
  __int128 v26; // [rsp+90h] [rbp-78h] BYREF
  __int128 *v27; // [rsp+A0h] [rbp-68h]
  __int64 v28; // [rsp+A8h] [rbp-60h]
  __int128 v29; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-48h]
  int v31; // [rsp+C8h] [rbp-40h]

  v29 = 0LL;
  v30 = 0LL;
  v31 = 0;
  v6 = 1;
  EnterLeaveCritShared::EnterLeaveCritShared(&v26, 1LL);
  v9 = ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    if ( a2 == 2 )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v6 = 0;
      }
      v11 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        W32GetUserSessionState(WPP_GLOBAL_Control, v7);
        ScrollbarTypeString = GetScrollbarTypeString(2);
        LOBYTE(v13) = v11;
        LOBYTE(v14) = v6;
        WPP_RECORDER_AND_TRACE_SF_s(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v14,
          v13,
          v15,
          2,
          9,
          26,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
          (__int64)ScrollbarTypeString);
      }
    }
    else if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline()
           && (v16 = *(__int64 **)(*(_QWORD *)(v9 + 16) + 456LL), v17 = *v16, PsGetCurrentProcess(v16) == v17) )
    {
      v8 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
        || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
        || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
      {
        v6 = 0;
      }
      v19 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
      if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        W32GetUserSessionState(WPP_GLOBAL_Control, v18);
        v20 = GetScrollbarTypeString(a2);
        WPP_RECORDER_AND_TRACE_SF_sq(
          *((_QWORD *)WPP_GLOBAL_Control + 3),
          v6,
          v19,
          v21,
          2u,
          9u,
          0x1Bu,
          (__int64)&WPP_64b62aa5576434412957a1580be92aa2_Traceguids,
          v20,
          v17);
      }
    }
    else
    {
      ProbeForWrite(a4, 0x1CuLL, 1u);
      v29 = *a4;
      v30 = *((_QWORD *)a4 + 2);
      v31 = *((_DWORD *)a4 + 6);
      if ( (unsigned int)Feature_UserModeNonClientScrollBars2__private_IsEnabledDeviceUsageNoInline() )
      {
        *(_QWORD *)&v26 = v9;
        DWORD2(v26) = a2;
        v27 = &v29;
        v22 = W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783_(
                **(PRKPROCESS **)(*(_QWORD *)(v9 + 16) + 456LL),
                (__int64)&v26);
      }
      else
      {
        v28 = 1LL;
        ProbeForRead(a3, 1uLL, 4u);
        v26 = *a3;
        v29 = *a4;
        v30 = *((_QWORD *)a4 + 2);
        v31 = *((_DWORD *)a4 + 6);
        v22 = SBGetParms(v9, a2, &v26, &v29);
      }
      v10 = v22;
      v8 = (struct MOVESIZEDATA *)a4;
      *a4 = v29;
      *((_QWORD *)a4 + 2) = v30;
      *((_DWORD *)a4 + 6) = v31;
    }
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
