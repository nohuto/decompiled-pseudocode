/*
 * XREFs of SfnINLPUAHDRAWMENU @ 0x1401A6BF0
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
 *     _ServerFixupMenuDC @ 0x1401A78A8 (_ServerFixupMenuDC.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall SfnINLPUAHDRAWMENU(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // rdi
  __int64 v15; // r15
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 v18; // xmm7_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rcx
  __int64 v23; // rbx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v26; // [rsp+60h] [rbp-A8h] BYREF
  int v27; // [rsp+68h] [rbp-A0h]
  int v28; // [rsp+6Ch] [rbp-9Ch]
  __int64 v29; // [rsp+70h] [rbp-98h]
  _BYTE v30[24]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v31; // [rsp+90h] [rbp-78h]
  __int64 v32; // [rsp+98h] [rbp-70h]
  __int64 v33; // [rsp+A0h] [rbp-68h]
  void *Src; // [rsp+110h] [rbp+8h] BYREF
  int v35; // [rsp+118h] [rbp+10h] BYREF
  __int64 v36; // [rsp+120h] [rbp+18h]

  Src = 0LL;
  v35 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  v28 = 0;
  memset(v30, 0, sizeof(v30));
  v36 = 0LL;
  v15 = ServerFixupMenuDC(*(HDC *)(a4 + 8));
  if ( v15 )
  {
    v36 = *(_QWORD *)(a4 + 8);
    *(_QWORD *)(a4 + 8) = v15;
  }
  v26 = v14;
  v27 = a2 & 0x1FFFF;
  v29 = a3;
  *(_DWORD *)(a4 + 20) = 0;
  *(_OWORD *)v30 = *(_OWORD *)a4;
  *(_QWORD *)&v30[16] = *(_QWORD *)(a4 + 16);
  v31 = a5;
  v32 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v16 = *((_QWORD *)v13 + 64);
  v17 = *(_OWORD *)(v16 + 64);
  v18 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  if ( a1 )
    v19 = *a1;
  else
    v19 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v20;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(106LL);
  v21 = KeUserModeCallback(106LL, &v26, 64LL, &Src, &v35);
  EtwTraceEndCallback(106LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v22 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v22 + 64) = v17;
  *(_QWORD *)(v22 + 80) = v18;
  if ( v21 < 0 || v35 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  v23 = a5;
  v33 = a5;
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      *(_QWORD *)(a4 + 8) = v36;
  }
  return v23;
}
