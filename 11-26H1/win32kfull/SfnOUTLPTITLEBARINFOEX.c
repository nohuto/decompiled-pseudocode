/*
 * XREFs of SfnOUTLPTITLEBARINFOEX @ 0x14020B4F0
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

__int64 __fastcall SfnOUTLPTITLEBARINFOEX(
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
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // ebx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 v22; // rcx
  void *v23; // rbx
  int v25; // [rsp+30h] [rbp-208h] BYREF
  _QWORD v26[5]; // [rsp+38h] [rbp-200h] BYREF
  void *Src; // [rsp+60h] [rbp-1D8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-1D0h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+70h] [rbp-1C8h] BYREF
  __int128 v30; // [rsp+98h] [rbp-1A0h]
  _OWORD v31[8]; // [rsp+A8h] [rbp-190h] BYREF
  __int64 v32; // [rsp+128h] [rbp-110h]
  int v33; // [rsp+130h] [rbp-108h]
  __int64 v34; // [rsp+140h] [rbp-F8h] BYREF
  int v35; // [rsp+148h] [rbp-F0h]
  __int64 v36; // [rsp+150h] [rbp-E8h]
  __int128 v37; // [rsp+158h] [rbp-E0h]
  __int128 v38; // [rsp+168h] [rbp-D0h]
  __int128 v39; // [rsp+178h] [rbp-C0h]
  __int128 v40; // [rsp+188h] [rbp-B0h]
  __int128 v41; // [rsp+198h] [rbp-A0h]
  __int128 v42; // [rsp+1A8h] [rbp-90h]
  __int128 v43; // [rsp+1B8h] [rbp-80h]
  __int128 v44; // [rsp+1C8h] [rbp-70h]
  __int64 v45; // [rsp+1D8h] [rbp-60h]
  int v46; // [rsp+1E0h] [rbp-58h]
  __int64 v47; // [rsp+1E8h] [rbp-50h]
  __int64 v48; // [rsp+1F0h] [rbp-48h]

  Src = 0LL;
  v25 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  memset_0(&v34, 0, 0xB8uLL);
  v34 = v14;
  v35 = a2;
  v36 = a3;
  v37 = *a4;
  v38 = a4[1];
  v39 = a4[2];
  v40 = a4[3];
  v41 = a4[4];
  v42 = a4[5];
  v43 = a4[6];
  v44 = a4[7];
  v45 = *((_QWORD *)a4 + 16);
  v46 = *((_DWORD *)a4 + 34);
  v47 = a5;
  v48 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 64);
  v30 = *(_OWORD *)(v15 + 64);
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
  EtwTraceBeginCallback(111LL);
  v18 = KeUserModeCallback(111LL, &v34, 184LL, &Src, &v25);
  EtwTraceEndCallback(111LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v19 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v19 + 64) = v30;
  *(_QWORD *)(v19 + 80) = v28;
  if ( v18 < 0 || v25 != 24 )
    return 0LL;
  v26[0] = 0LL;
  RtlCopyFromUser(v26, Src, 8uLL);
  v21 = v26[0];
  BugCheckParameter3[2] = v26[0];
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v21;
  v22 = *((_QWORD *)PtiCurrent(v20) + 68);
  if ( !v22 || (*(_DWORD *)(v22 + 84) & 1) == 0 || *(__int128 **)(v22 + 96) != a4 )
  {
    v23 = (void *)*((_QWORD *)Src + 2);
    memset_0(v31, 0, 0x8CuLL);
    RtlCopyFromUser(v31, v23, 0x8CuLL);
    *a4 = v31[0];
    a4[1] = v31[1];
    a4[2] = v31[2];
    a4[3] = v31[3];
    a4[4] = v31[4];
    a4[5] = v31[5];
    a4[6] = v31[6];
    a4[7] = v31[7];
    *((_QWORD *)a4 + 16) = v32;
    *((_DWORD *)a4 + 34) = v33;
    return v21;
  }
  return 0LL;
}
