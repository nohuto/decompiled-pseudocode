/*
 * XREFs of SfnINSIZECLIPBRD @ 0x1402D6B20
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall SfnINSIZECLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int128 v18; // xmm6
  __int64 v19; // xmm7_8
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rax
  int v25; // [rsp+30h] [rbp-E8h] BYREF
  _QWORD v26[5]; // [rsp+38h] [rbp-E0h] BYREF
  void *Src; // [rsp+60h] [rbp-B8h] BYREF
  ULONG_PTR BugCheckParameter3[4]; // [rsp+68h] [rbp-B0h] BYREF
  __int64 v29; // [rsp+88h] [rbp-90h] BYREF
  int v30; // [rsp+90h] [rbp-88h]
  int v31; // [rsp+94h] [rbp-84h]
  __int64 v32; // [rsp+98h] [rbp-80h]
  __int128 v33; // [rsp+A0h] [rbp-78h]
  __int64 v34; // [rsp+B0h] [rbp-68h]
  __int64 v35; // [rsp+B8h] [rbp-60h]

  v10 = 0LL;
  Src = 0LL;
  v25 = 0;
  v11 = PtiCurrent((__int64)a1);
  v13 = v11;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v14 = 0LL;
  v31 = 0;
  v33 = 0LL;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v12);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  if ( RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 672), 4u) )
  {
    v29 = v14;
    v30 = a2;
    v32 = a3;
    v33 = *a4;
    v34 = a5;
    v35 = a6;
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
    v17 = *((_QWORD *)v13 + 64);
    v18 = *(_OWORD *)(v17 + 64);
    v19 = *(_QWORD *)(v17 + 80);
    *(_QWORD *)(v17 + 72) = v14;
    v20 = 0LL;
    if ( a1 )
      v20 = *a1;
    *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v20;
    if ( a1 )
      v21 = *(_QWORD *)(a1[5] + 224);
    else
      v21 = 0LL;
    *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v21;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
    EtwTraceBeginCallback(24LL);
    v22 = KeUserModeCallback(24LL, &v29, 56LL, &Src, &v25);
    EtwTraceEndCallback(24LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    v23 = *((_QWORD *)v13 + 64);
    *(_OWORD *)(v23 + 64) = v18;
    *(_QWORD *)(v23 + 80) = v19;
    if ( v22 < 0 || v25 != 24 )
      return 0LL;
    v26[0] = 0LL;
    RtlCopyFromUser(v26, Src, 8uLL);
    v10 = v26[0];
    BugCheckParameter3[2] = v26[0];
  }
  return v10;
}
