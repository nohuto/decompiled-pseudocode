/*
 * XREFs of SfnOUTLPRECT @ 0x1402078E0
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

__int64 __fastcall SfnOUTLPRECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        _OWORD *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // rax
  __int128 v16; // xmm6
  __int64 v17; // xmm7_8
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rbx
  __int64 v24; // rcx
  void *v25; // rdx
  _DWORD v27[10]; // [rsp+30h] [rbp-D8h] BYREF
  void *Src; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v29; // [rsp+60h] [rbp-A8h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+80h] [rbp-88h] BYREF
  int v32; // [rsp+88h] [rbp-80h]
  int v33; // [rsp+8Ch] [rbp-7Ch]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int64 v35; // [rsp+98h] [rbp-70h]
  __int64 v36; // [rsp+A0h] [rbp-68h]
  __int64 v37; // [rsp+A8h] [rbp-60h]

  Src = 0LL;
  v27[0] = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  v33 = 0;
  v31 = v14;
  v32 = a2;
  v34 = a3;
  v35 = a5;
  v36 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 64);
  v16 = *(_OWORD *)(v15 + 64);
  v17 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(v15 + 72) = v14;
  if ( a1 )
    v18 = *a1;
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v18;
  if ( a1 )
    v19 = *(_QWORD *)(a1[5] + 224);
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v19;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v29);
  EtwTraceBeginCallback(34LL);
  v20 = KeUserModeCallback(34LL, &v31, 40LL, &Src, v27);
  EtwTraceEndCallback(34LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v29);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v21 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v21 + 64) = v16;
  *(_QWORD *)(v21 + 80) = v17;
  if ( v20 < 0 || v27[0] != 24 )
    return 0LL;
  *(_QWORD *)&v29 = 0LL;
  RtlCopyFromUser(&v29, Src, 8uLL);
  v23 = v29;
  v37 = v29;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v23;
  v24 = *((_QWORD *)PtiCurrent(v22) + 68);
  if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(_OWORD **)(v24 + 96) != a4 )
  {
    v25 = (void *)*((_QWORD *)Src + 2);
    v29 = 0LL;
    RtlCopyFromUser(&v29, v25, 0x10uLL);
    *a4 = v29;
    return v23;
  }
  return 0LL;
}
