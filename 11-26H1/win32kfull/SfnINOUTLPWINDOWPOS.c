/*
 * XREFs of SfnINOUTLPWINDOWPOS @ 0x1401AC2D0
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

__int64 __fastcall SfnINOUTLPWINDOWPOS(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 *v19; // rax
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rbx
  __int64 *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  void *v28; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v31; // [rsp+60h] [rbp-C8h] BYREF
  __int128 v32; // [rsp+70h] [rbp-B8h]
  __int64 v33; // [rsp+80h] [rbp-A8h]
  __int64 v34; // [rsp+88h] [rbp-A0h]
  __int128 v35; // [rsp+A0h] [rbp-88h]
  __int64 v36; // [rsp+B0h] [rbp-78h] BYREF
  int v37; // [rsp+B8h] [rbp-70h]
  __int64 v38; // [rsp+C0h] [rbp-68h]
  __int128 v39; // [rsp+C8h] [rbp-60h]
  __int128 v40; // [rsp+D8h] [rbp-50h]
  __int64 v41; // [rsp+E8h] [rbp-40h]
  __int64 v42; // [rsp+F0h] [rbp-38h]
  __int64 v43; // [rsp+F8h] [rbp-30h]
  void *Src; // [rsp+130h] [rbp+8h] BYREF
  int v45; // [rsp+138h] [rbp+10h] BYREF

  Src = 0LL;
  v45 = 0;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v13 = *CurrentThreadWin32Thread;
  else
    v13 = 0LL;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(v13 + 504);
  else
    v14 = 0LL;
  memset_0(&v36, 0, 0x50uLL);
  v36 = v14;
  v37 = a2;
  v38 = a3;
  *((_DWORD *)a4 + 9) = 0;
  v39 = *a4;
  v40 = a4[1];
  v41 = *((_QWORD *)a4 + 4);
  v42 = a5;
  v43 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *(_QWORD *)(v13 + 512);
  v35 = *(_OWORD *)(v15 + 64);
  a6 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*(_QWORD *)(v13 + 512) + 72LL) = v14;
  v16 = 0LL;
  if ( a1 )
    v16 = *a1;
  *(_QWORD *)(*(_QWORD *)(v13 + 512) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v13 + 512) + 80LL) = v17;
  LODWORD(a5) = GET_USERCRIT_DISPOSITION(v17);
  HIDWORD(a5) = 1;
  if ( (_DWORD)a5 )
  {
    v19 = (__int64 *)PsGetCurrentThreadWin32Thread(v18);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    HIDWORD(a5) = *(_BYTE *)(v20 + 1708) != 1;
    UserSessionSwitchLeaveCrit(v20);
  }
  EtwTraceBeginCallback(22LL);
  v21 = KeUserModeCallback(22LL, &v36, 80LL, &Src, &v45);
  EtwTraceEndCallback(22LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v22 = *(_QWORD *)(v13 + 512);
  *(_OWORD *)(v22 + 64) = v35;
  *(_QWORD *)(v22 + 80) = a6;
  if ( v21 < 0 || v45 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  v24 = a5;
  v34 = a5;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v24;
  v25 = (__int64 *)PsGetCurrentThreadWin32Thread(v23);
  if ( v25 )
    v26 = *v25;
  else
    v26 = 0LL;
  v27 = *(_QWORD *)(v26 + 544);
  if ( !v27 || (*(_DWORD *)(v27 + 84) & 1) == 0 || *(__int128 **)(v27 + 96) != a4 )
  {
    v28 = (void *)*((_QWORD *)Src + 2);
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    RtlCopyFromUser(&v31, v28, 0x28uLL);
    *a4 = v31;
    a4[1] = v32;
    *((_QWORD *)a4 + 4) = v33;
    return v24;
  }
  return 0LL;
}
