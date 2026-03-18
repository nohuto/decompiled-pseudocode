/*
 * XREFs of SfnSHELLSYNCDISPLAYCHANGED @ 0x140211740
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

__int64 __fastcall SfnSHELLSYNCDISPLAYCHANGED(
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
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rsi
  _OWORD *v15; // rax
  char *v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rsi
  __int64 v26; // rcx
  void *v27; // rbx
  _OWORD *v28; // rax
  int v30; // [rsp+30h] [rbp-A48h] BYREF
  _QWORD v31[5]; // [rsp+38h] [rbp-A40h] BYREF
  void *Src; // [rsp+60h] [rbp-A18h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A10h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+70h] [rbp-A08h] BYREF
  __int128 v35; // [rsp+98h] [rbp-9E0h]
  _BYTE v36[1208]; // [rsp+A8h] [rbp-9D0h] BYREF
  __int64 v37; // [rsp+560h] [rbp-518h] BYREF
  int v38; // [rsp+568h] [rbp-510h]
  __int64 v39; // [rsp+570h] [rbp-508h]
  char v40; // [rsp+578h] [rbp-500h] BYREF
  __int64 v41; // [rsp+A30h] [rbp-48h]
  __int64 v42; // [rsp+A38h] [rbp-40h]

  Src = 0LL;
  v30 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  memset_0(&v37, 0, 0x4E0uLL);
  v37 = v14;
  v38 = a2 & 0x1FFFF;
  v39 = a3;
  v15 = a4;
  v16 = &v40;
  v17 = 9LL;
  v18 = 9LL;
  do
  {
    *(_OWORD *)v16 = *v15;
    *((_OWORD *)v16 + 1) = v15[1];
    *((_OWORD *)v16 + 2) = v15[2];
    *((_OWORD *)v16 + 3) = v15[3];
    *((_OWORD *)v16 + 4) = v15[4];
    *((_OWORD *)v16 + 5) = v15[5];
    *((_OWORD *)v16 + 6) = v15[6];
    v16 += 128;
    *((_OWORD *)v16 - 1) = v15[7];
    v15 += 8;
    --v18;
  }
  while ( v18 );
  *(_OWORD *)v16 = *v15;
  *((_OWORD *)v16 + 1) = v15[1];
  *((_OWORD *)v16 + 2) = v15[2];
  *((_DWORD *)v16 + 12) = *((_DWORD *)v15 + 12);
  v41 = a5;
  v42 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v19 = *((_QWORD *)v13 + 64);
  v35 = *(_OWORD *)(v19 + 64);
  v33 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 72LL) = v14;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v21;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v31);
  EtwTraceBeginCallback(129LL);
  v22 = KeUserModeCallback(129LL, &v37, 1248LL, &Src, &v30);
  EtwTraceEndCallback(129LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v31);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v23 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v23 + 64) = v35;
  *(_QWORD *)(v23 + 80) = v33;
  if ( v22 < 0 || v30 != 24 )
    return 0LL;
  v31[0] = 0LL;
  RtlCopyFromUser(v31, Src, 8uLL);
  v25 = v31[0];
  BugCheckParameter3[2] = v31[0];
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    return v25;
  v26 = *((_QWORD *)PtiCurrent(v24) + 68);
  if ( !v26 || (*(_DWORD *)(v26 + 84) & 1) == 0 || *(_OWORD **)(v26 + 96) != a4 )
  {
    v27 = (void *)*((_QWORD *)Src + 2);
    memset_0(v36, 0, 0x4B4uLL);
    RtlCopyFromUser(v36, v27, 0x4B4uLL);
    v28 = v36;
    do
    {
      *a4 = *v28;
      a4[1] = v28[1];
      a4[2] = v28[2];
      a4[3] = v28[3];
      a4[4] = v28[4];
      a4[5] = v28[5];
      a4[6] = v28[6];
      a4 += 8;
      *(a4 - 1) = v28[7];
      v28 += 8;
      --v17;
    }
    while ( v17 );
    *a4 = *v28;
    a4[1] = v28[1];
    a4[2] = v28[2];
    *((_DWORD *)a4 + 12) = *((_DWORD *)v28 + 12);
    return v25;
  }
  return 0LL;
}
