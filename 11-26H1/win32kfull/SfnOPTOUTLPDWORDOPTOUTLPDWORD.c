/*
 * XREFs of SfnOPTOUTLPDWORDOPTOUTLPDWORD @ 0x1401A7C80
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
 *     RtlReadULongFromUser @ 0x1403E2204 (RtlReadULongFromUser.c)
 */

__int64 __fastcall SfnOPTOUTLPDWORDOPTOUTLPDWORD(
        __int64 *a1,
        int a2,
        _DWORD *a3,
        _DWORD *a4,
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
  int v19; // ebx
  __int64 *v20; // rax
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v27; // [rsp+70h] [rbp-68h] BYREF
  int v28; // [rsp+78h] [rbp-60h]
  int v29; // [rsp+7Ch] [rbp-5Ch]
  __int64 v30; // [rsp+80h] [rbp-58h]
  __int64 v31; // [rsp+88h] [rbp-50h]
  __int64 v32; // [rsp+90h] [rbp-48h]
  __int128 v33; // [rsp+A0h] [rbp-38h]
  void *Src; // [rsp+E0h] [rbp+8h] BYREF
  int v35; // [rsp+E8h] [rbp+10h] BYREF

  Src = 0LL;
  v35 = 0;
  CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v13 = *CurrentThreadWin32Thread;
  else
    v13 = 0LL;
  if ( a1 )
    v14 = a1[5] - *(_QWORD *)(v13 + 504);
  else
    v14 = 0LL;
  v29 = 0;
  v27 = v14;
  v28 = a2;
  v30 = a5;
  v31 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *(_QWORD *)(v13 + 512);
  v33 = *(_OWORD *)(v15 + 64);
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
  v19 = 1;
  HIDWORD(a5) = 1;
  if ( (_DWORD)a5 )
  {
    v20 = (__int64 *)PsGetCurrentThreadWin32Thread(v18);
    if ( v20 )
      v21 = *v20;
    else
      v21 = 0LL;
    if ( *(_BYTE *)(v21 + 1708) == 1 )
      v19 = 0;
    HIDWORD(a5) = v19;
    UserSessionSwitchLeaveCrit(v21);
  }
  EtwTraceBeginCallback(31LL);
  v22 = KeUserModeCallback(31LL, &v27, 32LL, &Src, &v35);
  EtwTraceEndCallback(31LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v23 = *(_QWORD *)(v13 + 512);
  *(_OWORD *)(v23 + 64) = v33;
  *(_QWORD *)(v23 + 80) = a6;
  if ( v22 < 0 || v35 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  v24 = a5;
  v32 = a5;
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    if ( a3 )
      *a3 = RtlReadULongFromUser(*((_QWORD *)Src + 2));
    if ( a4 )
      *a4 = RtlReadULongFromUser(*((_QWORD *)Src + 2) + 4LL);
  }
  return v24;
}
