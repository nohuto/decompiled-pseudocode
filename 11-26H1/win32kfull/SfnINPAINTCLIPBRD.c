/*
 * XREFs of SfnINPAINTCLIPBRD @ 0x1402D6840
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
 *     _WindowFromDC @ 0x1401A7A68 (_WindowFromDC.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SfnINPAINTCLIPBRD(__int64 *a1, int a2, __int64 a3, __int128 *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rbx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  __int64 v14; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rax
  int v27; // [rsp+30h] [rbp-118h] BYREF
  _QWORD v28[5]; // [rsp+38h] [rbp-110h] BYREF
  void *Src; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-E0h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v32; // [rsp+90h] [rbp-B8h]
  __int64 v33; // [rsp+A0h] [rbp-A8h] BYREF
  int v34; // [rsp+A8h] [rbp-A0h]
  __int64 v35; // [rsp+B0h] [rbp-98h]
  __int128 v36; // [rsp+B8h] [rbp-90h]
  __int128 v37; // [rsp+C8h] [rbp-80h]
  __int128 v38; // [rsp+D8h] [rbp-70h]
  __int128 v39; // [rsp+E8h] [rbp-60h]
  __int64 v40; // [rsp+F8h] [rbp-50h]
  __int64 v41; // [rsp+100h] [rbp-48h]
  __int64 v42; // [rsp+108h] [rbp-40h]

  v10 = 0LL;
  Src = 0LL;
  v27 = 0;
  v11 = PtiCurrent((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v13 = 0LL;
  memset_0(&v33, 0, 0x70uLL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v14);
  v16 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v16 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)CurrentProcessWin32Process >> 64) & CurrentProcessWin32Process;
  if ( !RtlAreAllAccessesGranted(*(_DWORD *)(v16 + 672), 4u) )
    return v10;
  v33 = v13;
  v34 = a2;
  v35 = a3;
  *((_DWORD *)a4 + 17) = 0;
  v36 = *a4;
  v37 = a4[1];
  v38 = a4[2];
  v39 = a4[3];
  v40 = *((_QWORD *)a4 + 8);
  v41 = a5;
  v42 = a6;
  v20 = WindowFromDC(*(_QWORD *)a4, v17, v18, v19);
  *(_QWORD *)&v36 = _GetDC(v20);
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v21 = *((_QWORD *)v12 + 64);
  v32 = *(_OWORD *)(v21 + 64);
  v30 = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v13;
  v22 = 0LL;
  if ( a1 )
    v22 = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v22;
  if ( a1 )
    v23 = *(_QWORD *)(a1[5] + 224);
  else
    v23 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v23;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v28);
  EtwTraceBeginCallback(23LL);
  v24 = KeUserModeCallback(23LL, &v33, 112LL, &Src, &v27);
  EtwTraceEndCallback(23LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v28);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v25 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v25 + 64) = v32;
  *(_QWORD *)(v25 + 80) = v30;
  if ( v24 >= 0 && v27 == 24 )
  {
    v28[0] = 0LL;
    RtlCopyFromUser(v28, Src, 8uLL);
    v10 = v28[0];
    BugCheckParameter3[2] = v28[0];
    _ReleaseDC(v36);
    return v10;
  }
  return 0LL;
}
