/*
 * XREFs of SfnINOUTLPUAHMEASUREMENUITEM @ 0x1401A6EB0
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

__int64 __fastcall SfnINOUTLPUAHMEASUREMENUITEM(
        __int64 *a1,
        int a2,
        __int64 a3,
        HDC *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v12; // rax
  struct tagTHREADINFO *v13; // rsi
  __int64 v14; // r14
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r14
  __int64 v24; // rcx
  void *v25; // rbx
  int v26; // [rsp+30h] [rbp-1C8h] BYREF
  _QWORD v27[5]; // [rsp+38h] [rbp-1C0h] BYREF
  void *Src; // [rsp+60h] [rbp-198h] BYREF
  HDC v29; // [rsp+68h] [rbp-190h]
  __int64 v30; // [rsp+70h] [rbp-188h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+78h] [rbp-180h] BYREF
  __int128 v32; // [rsp+A0h] [rbp-158h]
  _OWORD v33[7]; // [rsp+B0h] [rbp-148h] BYREF
  __int64 v34; // [rsp+120h] [rbp-D8h] BYREF
  int v35; // [rsp+128h] [rbp-D0h]
  __int64 v36; // [rsp+130h] [rbp-C8h]
  __int128 v37; // [rsp+138h] [rbp-C0h]
  __int128 v38; // [rsp+148h] [rbp-B0h]
  __int128 v39; // [rsp+158h] [rbp-A0h]
  __int128 v40; // [rsp+168h] [rbp-90h]
  __int128 v41; // [rsp+178h] [rbp-80h]
  __int128 v42; // [rsp+188h] [rbp-70h]
  __int128 v43; // [rsp+198h] [rbp-60h]
  __int64 v44; // [rsp+1A8h] [rbp-50h]
  __int64 v45; // [rsp+1B0h] [rbp-48h]

  Src = 0LL;
  v26 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  memset_0(&v34, 0, 0x98uLL);
  v29 = 0LL;
  v15 = ServerFixupMenuDC(a4[5]);
  if ( v15 )
  {
    v29 = a4[5];
    a4[5] = (HDC)v15;
  }
  v34 = v14;
  v35 = a2 & 0x1FFFF;
  v36 = a3;
  v37 = *(_OWORD *)a4;
  v38 = *((_OWORD *)a4 + 1);
  v39 = *((_OWORD *)a4 + 2);
  v40 = *((_OWORD *)a4 + 3);
  v41 = *((_OWORD *)a4 + 4);
  v42 = *((_OWORD *)a4 + 5);
  v43 = *((_OWORD *)a4 + 6);
  DWORD1(v38) = 0;
  DWORD1(v40) = 0;
  v44 = a5;
  v45 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v16 = *((_QWORD *)v13 + 64);
  v32 = *(_OWORD *)(v16 + 64);
  v30 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 72LL) = v14;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v18;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v27);
  EtwTraceBeginCallback(109LL);
  v19 = KeUserModeCallback(109LL, &v34, 152LL, &Src, &v26);
  EtwTraceEndCallback(109LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v27);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v20 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v20 + 64) = v32;
  *(_QWORD *)(v20 + 80) = v30;
  if ( v19 < 0 || v26 != 24 )
    return 0LL;
  v27[0] = 0LL;
  RtlCopyFromUser(v27, Src, 8uLL);
  v22 = v27[0];
  BugCheckParameter3[2] = v27[0];
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    v24 = *((_QWORD *)PtiCurrent(v21) + 68);
    if ( !v24 || (*(_DWORD *)(v24 + 84) & 1) == 0 || *(HDC **)(v24 + 96) != a4 )
    {
      v25 = (void *)*((_QWORD *)Src + 2);
      memset_0(v33, 0, sizeof(v33));
      RtlCopyFromUser(v33, v25, 0x70uLL);
      *(_OWORD *)a4 = v33[0];
      *((_OWORD *)a4 + 1) = v33[1];
      *((_OWORD *)a4 + 2) = v33[2];
      *((_OWORD *)a4 + 3) = v33[3];
      *((_OWORD *)a4 + 4) = v33[4];
      *((_OWORD *)a4 + 5) = v33[5];
      *((_OWORD *)a4 + 6) = v33[6];
      goto LABEL_15;
    }
    return 0LL;
  }
LABEL_15:
  if ( v15 )
  {
    _ReleaseDC(v15);
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
      a4[5] = v29;
  }
  return v22;
}
