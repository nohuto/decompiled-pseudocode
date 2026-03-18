/*
 * XREFs of SfnEMPTY @ 0x1401BE9D0
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
 */

__int64 __fastcall SfnEMPTY(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rdi
  __int64 v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  int v16; // ebx
  __int64 v17; // rcx
  __int64 result; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v20; // [rsp+60h] [rbp-78h] BYREF
  int v21; // [rsp+68h] [rbp-70h]
  int v22; // [rsp+6Ch] [rbp-6Ch]
  __int64 v23; // [rsp+70h] [rbp-68h]
  __int64 v24; // [rsp+78h] [rbp-60h]
  __int64 v25; // [rsp+80h] [rbp-58h]
  __int64 v26; // [rsp+88h] [rbp-50h]
  __int64 v27; // [rsp+90h] [rbp-48h]
  __int128 v28; // [rsp+A0h] [rbp-38h]
  void *Src; // [rsp+E0h] [rbp+8h] BYREF
  int v30; // [rsp+E8h] [rbp+10h] BYREF

  Src = 0LL;
  v30 = 0;
  v10 = PtiCurrent((__int64)a1);
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 63);
  else
    v12 = 0LL;
  v22 = 0;
  v20 = v12;
  v21 = a2;
  v23 = a3;
  v24 = a4;
  v25 = a5;
  v26 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v13 = *((_QWORD *)v11 + 64);
  v28 = *(_OWORD *)(v13 + 64);
  a6 = *(_QWORD *)(v13 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v12;
  if ( a1 )
    v14 = *a1;
  else
    v14 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 64LL) = v14;
  if ( a1 )
    v15 = *(_QWORD *)(a1[5] + 224);
  else
    v15 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 80LL) = v15;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(117LL);
  v16 = KeUserModeCallback(117LL, &v20, 48LL, &Src, &v30);
  EtwTraceEndCallback(117LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v17 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v17 + 64) = v28;
  *(_QWORD *)(v17 + 80) = a6;
  if ( v16 < 0 || v30 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  v27 = a5;
  return result;
}
