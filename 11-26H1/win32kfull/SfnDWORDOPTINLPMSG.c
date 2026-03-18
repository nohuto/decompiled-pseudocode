/*
 * XREFs of SfnDWORDOPTINLPMSG @ 0x1401B4A10
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnDWORDOPTINLPMSG(__int64 *a1, int a2, __int64 a3, __int128 *a4, ULONG_PTR a5, __int64 a6)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v11; // rsi
  __int64 v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  int v17; // ebx
  __int64 *v18; // rax
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  ULONG_PTR result; // rax
  ULONG_PTR BugCheckParameter3[4]; // [rsp+50h] [rbp-B8h] BYREF
  __int128 v24; // [rsp+70h] [rbp-98h]
  __int64 v25; // [rsp+80h] [rbp-88h] BYREF
  int v26; // [rsp+88h] [rbp-80h]
  __int64 v27; // [rsp+90h] [rbp-78h]
  BOOL v28; // [rsp+98h] [rbp-70h]
  ULONG_PTR v29; // [rsp+A0h] [rbp-68h]
  __int64 v30; // [rsp+A8h] [rbp-60h]
  __int128 v31; // [rsp+B0h] [rbp-58h]
  __int128 v32; // [rsp+C0h] [rbp-48h]
  __int128 v33; // [rsp+D0h] [rbp-38h]
  void *Src; // [rsp+110h] [rbp+8h] BYREF
  int v35; // [rsp+118h] [rbp+10h] BYREF

  Src = 0LL;
  v35 = 0;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v11 = *CurrentThreadWin32Thread;
  else
    v11 = 0LL;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v11 + 504);
  else
    v12 = 0LL;
  memset_0(&v25, 0, 0x60uLL);
  v25 = v12;
  v26 = a2;
  v27 = a3;
  if ( a4 )
  {
    *((_DWORD *)a4 + 3) = 0;
    *((_DWORD *)a4 + 11) = 0;
  }
  v28 = a4 != 0LL;
  if ( a4 )
  {
    v31 = *a4;
    v32 = a4[1];
    v33 = a4[2];
  }
  v29 = a5;
  v30 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *(_QWORD *)(v11 + 512);
  v24 = *(_OWORD *)(v13 + 64);
  a6 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(*(_QWORD *)(v11 + 512) + 72LL) = v12;
  v14 = 0LL;
  if ( a1 )
    v14 = *a1;
  *(_QWORD *)(*(_QWORD *)(v11 + 512) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 512) + 80LL) = v15;
  LODWORD(a5) = GET_USERCRIT_DISPOSITION(v15);
  v17 = 1;
  HIDWORD(a5) = 1;
  if ( (_DWORD)a5 )
  {
    v18 = (__int64 *)PsGetCurrentThreadWin32Thread(v16);
    if ( v18 )
      v19 = *v18;
    else
      v19 = 0LL;
    if ( *(_BYTE *)(v19 + 1708) == 1 )
      v17 = 0;
    HIDWORD(a5) = v17;
    UserSessionSwitchLeaveCrit(v19);
  }
  EtwTraceBeginCallback(4LL);
  v20 = KeUserModeCallback(4LL, &v25, 96LL, &Src, &v35);
  EtwTraceEndCallback(4LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v21 = *(_QWORD *)(v11 + 512);
  *(_OWORD *)(v21 + 64) = v24;
  *(_QWORD *)(v21 + 80) = a6;
  if ( v20 < 0 || v35 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  BugCheckParameter3[2] = a5;
  return result;
}
