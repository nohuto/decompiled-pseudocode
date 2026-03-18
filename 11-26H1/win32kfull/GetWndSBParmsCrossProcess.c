/*
 * XREFs of GetWndSBParmsCrossProcess @ 0x140262F90
 * Callers:
 *     W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___ @ 0x1402AD828 (W32AttachToProcessAndExecute__lambda_735e0558695e6dec8da91e7614b43783___.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     GetScrollbarTypeString @ 0x14012905C (GetScrollbarTypeString.c)
 *     WPP_RECORDER_AND_TRACE_SF_q @ 0x14019025C (WPP_RECORDER_AND_TRACE_SF_q.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1401913D0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     GETCLIENTWNDINFO @ 0x140263574 (GETCLIENTWNDINFO.c)
 *     WPP_RECORDER_AND_TRACE_SF_qsDddddd @ 0x140297508 (WPP_RECORDER_AND_TRACE_SF_qsDddddd.c)
 */

bool __fastcall GetWndSBParmsCrossProcess(__int64 *a1, int a2, unsigned int *a3)
{
  unsigned int *v3; // r13
  char v6; // di
  char v7; // r14
  __int64 v8; // rdx
  bool v9; // r14
  __int64 v10; // rbx
  __int64 UserSessionState; // rax
  int v12; // r8d
  int v13; // edx
  __int64 v15; // rdx
  __int64 CurrentProcessWow64Process; // rax
  unsigned int v17; // r14d
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // rdx
  unsigned int v21; // eax
  __int64 v22; // rax
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // r8d
  int v30; // edx
  int v31; // r9d
  bool v32; // [rsp+80h] [rbp-B8h]
  unsigned int *Address; // [rsp+88h] [rbp-B0h]
  _QWORD *Addressb; // [rsp+88h] [rbp-B0h]
  volatile void **Addressc; // [rsp+88h] [rbp-B0h]
  volatile void *Addressa; // [rsp+88h] [rbp-B0h]
  char v37; // [rsp+94h] [rbp-A4h]
  __int128 v39; // [rsp+C8h] [rbp-70h]
  __int128 v40; // [rsp+D8h] [rbp-60h]

  v3 = a3;
  v6 = 1;
  v37 = 1;
  v7 = 1;
  if ( !GETCLIENTWNDINFO(a1) || !*(_QWORD *)(GETCLIENTWNDINFO(a1) + 32) )
    v7 = 0;
  if ( v7 )
  {
    Address = *(unsigned int **)(GETCLIENTWNDINFO(a1) + 32);
    CurrentProcessWow64Process = PsGetCurrentProcessWow64Process(Address, v15);
    ProbeForRead(Address, 0x24uLL, CurrentProcessWow64Process != 0 ? 1 : 4);
    v39 = *(_OWORD *)Address;
    v40 = *((_OWORD *)Address + 1);
    v17 = Address[8];
    v18 = *((_QWORD *)Address + 2);
    if ( a2 != 1 )
      v18 = *(_QWORD *)Address;
    v19 = HIDWORD(v18);
    v20 = v3[1];
    if ( (v20 & 1) != 0 )
    {
      v3[2] = v19;
      v21 = DWORD2(v40);
      if ( a2 != 1 )
        v21 = DWORD2(v39);
      v3[3] = v21;
    }
    if ( (v20 & 2) != 0 )
    {
      v22 = HIDWORD(*((_QWORD *)&v40 + 1));
      if ( a2 != 1 )
        LODWORD(v22) = HIDWORD(v39);
      v3[4] = v22;
    }
    if ( (v20 & 4) != 0 )
    {
      v23 = v17;
      if ( a2 != 1 )
        v23 = v40;
      v3[5] = v23;
    }
    if ( (v20 & 0x10) != 0 )
    {
      Addressb = *(_QWORD **)(a1[2] + 512);
      v24 = PsGetCurrentProcessWow64Process(Addressb, v20);
      ProbeForRead(Addressb, 0x130uLL, v24 != 0 ? 1 : 4);
      Addressc = (volatile void **)Addressb[35];
      v26 = PsGetCurrentProcessWow64Process(Addressc, v25);
      ProbeForRead(Addressc, 0x10uLL, v26 != 0 ? 1 : 4);
      Addressa = *Addressc;
      v28 = PsGetCurrentProcessWow64Process(Addressa, v27);
      ProbeForRead(Addressa, 0x68uLL, v28 != 0 ? 1 : 4);
      if ( Addressa && *((_DWORD *)Addressa + 22) == a2 && *((__int64 **)Addressa + 1) == a1 )
      {
        v3[6] = *((_DWORD *)Addressa + 21);
      }
      else
      {
        if ( a2 != 1 )
          v17 = v40;
        v3[6] = v17;
      }
    }
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    {
      v6 = 0;
      v37 = 0;
    }
    v32 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v20);
      GetScrollbarTypeString(a2);
      LOBYTE(v29) = v32;
      LOBYTE(v30) = v37;
      WPP_RECORDER_AND_TRACE_SF_qsDddddd(*((_QWORD *)WPP_GLOBAL_Control + 3), v30, v29, v31);
      v3 = a3;
    }
    return (v3[1] & 0x17) != 0;
  }
  else
  {
    UserSetLastError(1447);
    if ( WPP_GLOBAL_Control == (struct MOVESIZEDATA *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x100) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 41) < 2u )
    {
      v6 = 0;
    }
    v9 = *(_QWORD *)&WPP_RECORDER_INITIALIZED != (_QWORD)&WPP_RECORDER_INITIALIZED;
    if ( v6 || *(unsigned int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    {
      v10 = *a1;
      UserSessionState = W32GetUserSessionState(&WPP_RECORDER_INITIALIZED, v8);
      LOBYTE(v12) = v9;
      LOBYTE(v13) = v6;
      WPP_RECORDER_AND_TRACE_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 3),
        v13,
        v12,
        *(_QWORD *)(UserSessionState + 69152),
        2,
        9,
        17,
        (__int64)&WPP_050a6281044d36281c2688598113f136_Traceguids,
        v10);
    }
    return 0;
  }
}
