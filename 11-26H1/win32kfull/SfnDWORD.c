/*
 * XREFs of SfnDWORD @ 0x140039C80
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1400067DC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     ?xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z @ 0x140037AA0 (-xxxSendMessageToClient@@YAXPEAUtagWND@@I_K_JPEAUtagSMS@@HPEA_J@Z.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     ?xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z @ 0x140044D70 (-xxxFreeWindow_Phase2@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@@Z.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall SfnDWORD(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 *v19; // rax
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v25; // [rsp+60h] [rbp-78h] BYREF
  int v26; // [rsp+68h] [rbp-70h]
  int v27; // [rsp+6Ch] [rbp-6Ch]
  __int64 v28; // [rsp+70h] [rbp-68h]
  __int64 v29; // [rsp+78h] [rbp-60h]
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
    v11 = *CurrentThreadWin32Thread;
  else
    v11 = 0LL;
  if ( a1 )
    v12 = a1[5] - *(_QWORD *)(v11 + 504);
  else
    v12 = 0LL;
  v27 = 0;
  v25 = v12;
  v26 = a2;
  v28 = a3;
  v29 = a4;
  v30 = a5;
  v31 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v14 = *(_QWORD *)(v11 + 512);
  v33 = *(_OWORD *)(v14 + 64);
  a6 = *(_QWORD *)(v14 + 80);
  *(_QWORD *)(*(_QWORD *)(v11 + 512) + 72LL) = v12;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 512) + 64LL) = v15;
  if ( a1 )
    v16 = *(_QWORD *)(a1[5] + 224);
  else
    v16 = 0LL;
  *(_QWORD *)(*(_QWORD *)(v11 + 512) + 80LL) = v16;
  LODWORD(a5) = GET_USERCRIT_DISPOSITION(v16, v13);
  v18 = 1;
  HIDWORD(a5) = 1;
  if ( (_DWORD)a5 )
  {
    v19 = (__int64 *)PsGetCurrentThreadWin32Thread(v17);
    if ( v19 )
      v20 = *v19;
    else
      v20 = 0LL;
    if ( *(_BYTE *)(v20 + 1708) == 1 )
      v18 = 0;
    HIDWORD(a5) = v18;
    UserSessionSwitchLeaveCrit(v20);
  }
  EtwTraceBeginCallback(2LL);
  v21 = KeUserModeCallback(2LL, &v25, 48LL, &Src, &v35);
  EtwTraceEndCallback(2LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v22 = *(_QWORD *)(v11 + 512);
  *(_OWORD *)(v22 + 64) = v33;
  *(_QWORD *)(v22 + 80) = a6;
  if ( v21 < 0 || v35 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  v32 = a5;
  return result;
}
