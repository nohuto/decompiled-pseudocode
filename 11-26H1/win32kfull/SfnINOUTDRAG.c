/*
 * XREFs of SfnINOUTDRAG @ 0x1402D5FF0
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
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SfnINOUTDRAG(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rcx
  void *v23; // rdx
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-F8h] BYREF
  __int128 v26; // [rsp+60h] [rbp-E8h] BYREF
  __int128 v27; // [rsp+70h] [rbp-D8h]
  __int128 v28; // [rsp+80h] [rbp-C8h]
  __int64 v29; // [rsp+90h] [rbp-B8h]
  __int128 v30; // [rsp+A8h] [rbp-A0h]
  __int64 v31; // [rsp+C0h] [rbp-88h] BYREF
  int v32; // [rsp+C8h] [rbp-80h]
  __int64 v33; // [rsp+D0h] [rbp-78h]
  __int64 v34; // [rsp+D8h] [rbp-70h]
  __int64 v35; // [rsp+E0h] [rbp-68h]
  __int128 v36; // [rsp+E8h] [rbp-60h]
  __int128 v37; // [rsp+F8h] [rbp-50h]
  __int128 v38; // [rsp+108h] [rbp-40h]
  void *Src; // [rsp+150h] [rbp+8h] BYREF
  int v40; // [rsp+158h] [rbp+10h] BYREF

  Src = 0LL;
  v40 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  memset_0(&v31, 0, 0x58uLL);
  v31 = v14;
  v32 = a2;
  v33 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 11) = 0;
  v36 = *a4;
  v37 = a4[1];
  v38 = a4[2];
  v34 = a5;
  v35 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 64);
  v30 = *(_OWORD *)(v15 + 64);
  a6 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 72LL) = v14;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v17;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(5LL);
  v18 = KeUserModeCallback(5LL, &v31, 88LL, &Src, &v40);
  EtwTraceEndCallback(5LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v19 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v19 + 64) = v30;
  *(_QWORD *)(v19 + 80) = a6;
  if ( v18 >= 0 && v40 == 24 )
  {
    a5 = 0LL;
    RtlCopyFromUser(&a5, Src, 8uLL);
    v21 = a5;
    v29 = a5;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v21;
    v22 = *((_QWORD *)PtiCurrent(v20) + 68);
    if ( !v22 || (*(_DWORD *)(v22 + 84) & 1) == 0 || *(__int128 **)(v22 + 96) != a4 )
    {
      v23 = (void *)*((_QWORD *)Src + 2);
      v26 = 0LL;
      v27 = 0LL;
      v28 = 0LL;
      RtlCopyFromUser(&v26, v23, 0x30uLL);
      *a4 = v26;
      a4[1] = v27;
      a4[2] = v28;
      return v21;
    }
  }
  return 0LL;
}
