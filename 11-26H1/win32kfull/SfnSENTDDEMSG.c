/*
 * XREFs of SfnSENTDDEMSG @ 0x1402D77F0
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
 *     xxxDDETrackGetMessageHook @ 0x140290AA0 (xxxDDETrackGetMessageHook.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall SfnSENTDDEMSG(__int64 *a1, int a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, char a7)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  signed int v14; // edi
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rbx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 result; // rax
  _QWORD v24[5]; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v25; // [rsp+58h] [rbp-D0h] BYREF
  int v26; // [rsp+60h] [rbp-C8h]
  int v27; // [rsp+64h] [rbp-C4h]
  __int64 v28; // [rsp+68h] [rbp-C0h]
  __int64 v29; // [rsp+70h] [rbp-B8h]
  __int128 v30; // [rsp+78h] [rbp-B0h]
  __int64 v31; // [rsp+88h] [rbp-A0h] BYREF
  signed int v32; // [rsp+90h] [rbp-98h]
  int v33; // [rsp+94h] [rbp-94h]
  __int64 v34; // [rsp+98h] [rbp-90h]
  __int64 v35; // [rsp+A0h] [rbp-88h]
  __int64 v36; // [rsp+A8h] [rbp-80h]
  __int64 v37; // [rsp+B0h] [rbp-78h]
  BOOL v38; // [rsp+B8h] [rbp-70h]
  int v39; // [rsp+BCh] [rbp-6Ch]
  ULONG_PTR BugCheckParameter3[8]; // [rsp+C0h] [rbp-68h] BYREF
  void *Src; // [rsp+130h] [rbp+8h] BYREF
  int v42; // [rsp+138h] [rbp+10h] BYREF

  v27 = 0;
  v30 = 0LL;
  Src = 0LL;
  v42 = 0;
  v11 = PtiCurrent((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v13 = 0LL;
  v33 = 0;
  v39 = 0;
  v14 = a2 & 0xBFFFFFFF;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v12 + 64);
  v16 = *(_OWORD *)(v15 + 64);
  v17 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v13;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v19;
  if ( v14 >= 0 )
  {
    v31 = v13;
    v32 = v14;
    v34 = a3;
    v35 = a4;
  }
  else
  {
    if ( a1 )
      v25 = *a1;
    else
      v25 = 0LL;
    v26 = v14 & 0x7FFFFFFF;
    v28 = a3;
    v29 = a4;
    xxxDDETrackGetMessageHook((__int64)&v25);
    v20 = *((_QWORD *)v12 + 63);
    v31 = _HMObjectFromHandle(v25) - v20;
    v32 = v26;
    v34 = v28;
    v35 = v29;
  }
  v36 = a5;
  v37 = a6;
  v38 = (a7 & 1) == 0;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v24);
  EtwTraceBeginCallback(38LL);
  v21 = KeUserModeCallback(38LL, &v31, 56LL, &Src, &v42);
  EtwTraceEndCallback(38LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v24);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v22 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v22 + 64) = v16;
  *(_QWORD *)(v22 + 80) = v17;
  if ( v21 < 0 || v42 != 24 )
    return 0LL;
  v24[0] = 0LL;
  RtlCopyFromUser(v24, Src, 8uLL);
  result = v24[0];
  BugCheckParameter3[2] = v24[0];
  return result;
}
