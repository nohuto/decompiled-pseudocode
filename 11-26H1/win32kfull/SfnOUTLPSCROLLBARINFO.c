/*
 * XREFs of SfnOUTLPSCROLLBARINFO @ 0x1402164F0
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
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SfnOUTLPSCROLLBARINFO(
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
  int v25; // [rsp+30h] [rbp-168h] BYREF
  _QWORD v26[5]; // [rsp+38h] [rbp-160h] BYREF
  void *Src; // [rsp+60h] [rbp-138h] BYREF
  __int64 v28; // [rsp+68h] [rbp-130h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+70h] [rbp-128h] BYREF
  __int128 v30; // [rsp+80h] [rbp-118h] BYREF
  __int128 v31; // [rsp+90h] [rbp-108h]
  __int128 v32; // [rsp+A0h] [rbp-F8h]
  __int64 v33; // [rsp+B0h] [rbp-E8h]
  int v34; // [rsp+B8h] [rbp-E0h]
  __int64 v35; // [rsp+C0h] [rbp-D8h]
  __int128 v36; // [rsp+D8h] [rbp-C0h]
  __int64 v37; // [rsp+F0h] [rbp-A8h] BYREF
  int v38; // [rsp+F8h] [rbp-A0h]
  __int64 v39; // [rsp+100h] [rbp-98h]
  __int128 v40; // [rsp+108h] [rbp-90h]
  __int128 v41; // [rsp+118h] [rbp-80h]
  __int128 v42; // [rsp+128h] [rbp-70h]
  __int64 v43; // [rsp+138h] [rbp-60h]
  int v44; // [rsp+140h] [rbp-58h]
  __int64 v45; // [rsp+148h] [rbp-50h]
  __int64 v46; // [rsp+150h] [rbp-48h]

  Src = 0LL;
  v25 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  memset_0(&v37, 0, 0x68uLL);
  v37 = v14;
  v38 = a2;
  v39 = a3;
  v40 = *a4;
  v41 = a4[1];
  v42 = a4[2];
  v43 = *((_QWORD *)a4 + 6);
  v44 = *((_DWORD *)a4 + 14);
  v45 = a5;
  v46 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 64);
  v36 = *(_OWORD *)(v15 + 64);
  v28 = *(_QWORD *)(v15 + 80);
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
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
  EtwTraceBeginCallback(105LL);
  v18 = KeUserModeCallback(105LL, &v37, 104LL, &Src, &v25);
  EtwTraceEndCallback(105LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v19 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v19 + 64) = v36;
  *(_QWORD *)(v19 + 80) = v28;
  if ( v18 < 0 || v25 != 24 )
    return 0LL;
  v26[0] = 0LL;
  RtlCopyFromUser(v26, Src, 8uLL);
  v21 = v26[0];
  v35 = v26[0];
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v21;
  v22 = *((_QWORD *)PtiCurrent(v20) + 68);
  if ( !v22 || (*(_DWORD *)(v22 + 84) & 1) == 0 || *(__int128 **)(v22 + 96) != a4 )
  {
    v23 = (void *)*((_QWORD *)Src + 2);
    v30 = 0LL;
    v31 = 0LL;
    v32 = 0LL;
    v33 = 0LL;
    v34 = 0;
    RtlCopyFromUser(&v30, v23, 0x3CuLL);
    *a4 = v30;
    a4[1] = v31;
    a4[2] = v32;
    *((_QWORD *)a4 + 6) = v33;
    *((_DWORD *)a4 + 14) = v34;
    return v21;
  }
  return 0LL;
}
