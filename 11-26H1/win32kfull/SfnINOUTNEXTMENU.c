/*
 * XREFs of SfnINOUTNEXTMENU @ 0x1402D6590
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

__int64 __fastcall SfnINOUTNEXTMENU(
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
  struct tagTHREADINFO *v13; // rdi
  __int64 v14; // rsi
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
  ULONG_PTR BugCheckParameter3[2]; // [rsp+50h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+60h] [rbp-B8h]
  __int64 v29; // [rsp+70h] [rbp-A8h] BYREF
  int v30; // [rsp+78h] [rbp-A0h]
  int v31; // [rsp+7Ch] [rbp-9Ch]
  __int64 v32; // [rsp+80h] [rbp-98h]
  _BYTE v33[24]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v34; // [rsp+A0h] [rbp-78h]
  __int64 v35; // [rsp+A8h] [rbp-70h]
  __int64 v36; // [rsp+B0h] [rbp-68h]
  void *Src; // [rsp+120h] [rbp+8h] BYREF
  int v38; // [rsp+128h] [rbp+10h] BYREF

  Src = 0LL;
  v38 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  v31 = 0;
  memset(v33, 0, sizeof(v33));
  v29 = v14;
  v30 = a2;
  v32 = a3;
  v34 = a5;
  v35 = a6;
  *(_OWORD *)v33 = *(_OWORD *)a4;
  *(_QWORD *)&v33[16] = *(_QWORD *)(a4 + 16);
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
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(30LL);
  v20 = KeUserModeCallback(30LL, &v29, 64LL, &Src, &v38);
  EtwTraceEndCallback(30LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v21 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v21 + 64) = v16;
  *(_QWORD *)(v21 + 80) = v17;
  if ( v20 >= 0 && v38 == 24 )
  {
    a5 = 0LL;
    RtlCopyFromUser(&a5, Src, 8uLL);
    v23 = a5;
    v36 = a5;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v23;
    v24 = *((_QWORD *)PtiCurrent(v22) + 68);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(_QWORD *)(v24 + 96) != a4 )
    {
      v25 = (void *)*((_QWORD *)Src + 2);
      *(_OWORD *)BugCheckParameter3 = 0LL;
      v28 = 0LL;
      RtlCopyFromUser(BugCheckParameter3, v25, 0x18uLL);
      *(_OWORD *)a4 = *(_OWORD *)BugCheckParameter3;
      *(_QWORD *)(a4 + 16) = v28;
      return v23;
    }
  }
  return 0LL;
}
