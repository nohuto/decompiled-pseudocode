/*
 * XREFs of SfnINLPUAHDRAWMENUITEM @ 0x1401A7590
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
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINLPUAHDRAWMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        HDC *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  HDC v14; // r12
  __int64 v15; // rax
  __int64 v16; // r15
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  ULONG_PTR v22; // rdi
  ULONG_PTR v24; // [rsp+30h] [rbp-168h] BYREF
  int v25[10]; // [rsp+38h] [rbp-160h] BYREF
  void *Src; // [rsp+60h] [rbp-138h] BYREF
  __int64 v27; // [rsp+68h] [rbp-130h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+70h] [rbp-128h] BYREF
  __int128 v29; // [rsp+90h] [rbp-108h]
  __int64 v30; // [rsp+A0h] [rbp-F8h] BYREF
  int v31; // [rsp+A8h] [rbp-F0h]
  __int64 v32; // [rsp+B0h] [rbp-E8h]
  __int128 v33; // [rsp+B8h] [rbp-E0h]
  __int128 v34; // [rsp+C8h] [rbp-D0h]
  __int128 v35; // [rsp+D8h] [rbp-C0h]
  __int128 v36; // [rsp+E8h] [rbp-B0h]
  __int128 v37; // [rsp+F8h] [rbp-A0h]
  __int128 v38; // [rsp+108h] [rbp-90h]
  __int128 v39; // [rsp+118h] [rbp-80h]
  __int128 v40; // [rsp+128h] [rbp-70h]
  __int128 v41; // [rsp+138h] [rbp-60h]
  __int64 v42; // [rsp+148h] [rbp-50h]
  __int64 v43; // [rsp+150h] [rbp-48h]

  LODWORD(v24) = a2;
  Src = 0LL;
  v25[0] = 0;
  v11 = PtiCurrent((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v13 = 0LL;
  memset_0(&v30, 0, 0xB8uLL);
  v14 = 0LL;
  v15 = ServerFixupMenuDC(a4[4]);
  v16 = v15;
  if ( v15 )
  {
    v14 = a4[4];
    a4[4] = (HDC)v15;
    a4[9] = (HDC)v15;
  }
  v30 = v13;
  v31 = v24;
  v32 = a3;
  *((_DWORD *)a4 + 5) = 0;
  *((_DWORD *)a4 + 21) = 0;
  v33 = *(_OWORD *)a4;
  v34 = *((_OWORD *)a4 + 1);
  v35 = *((_OWORD *)a4 + 2);
  v36 = *((_OWORD *)a4 + 3);
  v37 = *((_OWORD *)a4 + 4);
  v38 = *((_OWORD *)a4 + 5);
  v39 = *((_OWORD *)a4 + 6);
  v40 = *((_OWORD *)a4 + 7);
  v41 = *((_OWORD *)a4 + 8);
  v42 = a5;
  v43 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v17 = *((_QWORD *)v12 + 64);
  v29 = *(_OWORD *)(v17 + 64);
  v27 = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v13;
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
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v24);
  EtwTraceBeginCallback(107LL);
  v20 = KeUserModeCallback(107LL, &v30, 184LL, &Src, v25);
  EtwTraceEndCallback(107LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v24);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v21 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v21 + 64) = v29;
  *(_QWORD *)(v21 + 80) = v27;
  if ( v20 < 0 || v25[0] != 24 )
    return 0LL;
  v24 = 0LL;
  RtlCopyFromUser(&v24, Src, 8uLL);
  v22 = v24;
  BugCheckParameter3[2] = v24;
  if ( v16 )
  {
    _ReleaseDC(v16);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      a4[4] = v14;
      a4[9] = v14;
    }
  }
  return v22;
}
