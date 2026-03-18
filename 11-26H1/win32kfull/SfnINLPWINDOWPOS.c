/*
 * XREFs of SfnINLPWINDOWPOS @ 0x1401B9C00
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
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINLPWINDOWPOS(__int64 *a1, int a2, __int64 a3, __int128 *a4, ULONG_PTR a5, __int64 a6)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  ULONG_PTR result; // rax
  ULONG_PTR BugCheckParameter3[4]; // [rsp+50h] [rbp-A8h] BYREF
  __int128 v22; // [rsp+70h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-78h] BYREF
  int v24; // [rsp+88h] [rbp-70h]
  __int64 v25; // [rsp+90h] [rbp-68h]
  __int128 v26; // [rsp+98h] [rbp-60h]
  __int128 v27; // [rsp+A8h] [rbp-50h]
  __int64 v28; // [rsp+B8h] [rbp-40h]
  ULONG_PTR v29; // [rsp+C0h] [rbp-38h]
  __int64 v30; // [rsp+C8h] [rbp-30h]
  void *Src; // [rsp+100h] [rbp+8h] BYREF
  int v32; // [rsp+108h] [rbp+10h] BYREF

  Src = 0LL;
  v32 = 0;
  v10 = PtiCurrent((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 63);
  else
    v12 = 0LL;
  memset_0(&v23, 0, 0x50uLL);
  v23 = v12;
  v24 = a2;
  v25 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v26 = *a4;
  v27 = a4[1];
  v28 = *((_QWORD *)a4 + 4);
  v29 = a5;
  v30 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *((_QWORD *)v11 + 64);
  v22 = *(_OWORD *)(v13 + 64);
  a6 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v12;
  v14 = 0LL;
  if ( a1 )
    v14 = *a1;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 80LL) = v15;
  LODWORD(a5) = GET_USERCRIT_DISPOSITION(v15);
  HIDWORD(a5) = 1;
  if ( (_DWORD)a5 )
  {
    HIDWORD(a5) = *((_BYTE *)PtiCurrent(v16) + 1708) != 1;
    UserSessionSwitchLeaveCrit(v17);
  }
  EtwTraceBeginCallback(17LL);
  v18 = KeUserModeCallback(17LL, &v23, 80LL, &Src, &v32);
  EtwTraceEndCallback(17LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v19 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v19 + 64) = v22;
  *(_QWORD *)(v19 + 80) = a6;
  if ( v18 < 0 || v32 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  BugCheckParameter3[2] = a5;
  return result;
}
