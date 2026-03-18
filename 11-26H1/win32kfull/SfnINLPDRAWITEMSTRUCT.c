/*
 * XREFs of SfnINLPDRAWITEMSTRUCT @ 0x1401E8830
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
 *     _WindowFromDC @ 0x1401A7A68 (_WindowFromDC.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINLPDRAWITEMSTRUCT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // r14
  __int64 v14; // r12
  unsigned int CurrentProcessId; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ebx
  __int64 v23; // rcx
  ULONG_PTR v24; // rbx
  __int64 v26; // rcx
  __int64 v27; // rax
  ULONG_PTR v28; // [rsp+30h] [rbp-118h] BYREF
  int v29[10]; // [rsp+38h] [rbp-110h] BYREF
  void *Src; // [rsp+60h] [rbp-E8h] BYREF
  __int64 v31; // [rsp+68h] [rbp-E0h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+70h] [rbp-D8h] BYREF
  __int128 v33; // [rsp+90h] [rbp-B8h]
  __int64 v34; // [rsp+A0h] [rbp-A8h] BYREF
  int v35; // [rsp+A8h] [rbp-A0h]
  __int64 v36; // [rsp+B0h] [rbp-98h]
  __int128 v37; // [rsp+B8h] [rbp-90h]
  __int128 v38; // [rsp+C8h] [rbp-80h]
  __int128 v39; // [rsp+D8h] [rbp-70h]
  __int128 v40; // [rsp+E8h] [rbp-60h]
  __int64 v41; // [rsp+F8h] [rbp-50h]
  __int64 v42; // [rsp+100h] [rbp-48h]

  LODWORD(v28) = a2;
  Src = 0LL;
  v29[0] = 0;
  v11 = PtiCurrent((__int64)a1);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v13 = 0LL;
  memset_0(&v34, 0, 0x68uLL);
  v14 = 0LL;
  CurrentProcessId = (unsigned int)PsGetCurrentProcessId();
  if ( (unsigned int)GreGetObjectOwner(*((_QWORD *)a4 + 4), 1LL) != (CurrentProcessId & 0xFFFFFFFC) )
  {
    v26 = *((_QWORD *)a4 + 4);
    if ( v26 )
    {
      v27 = WindowFromDC(v26, v16, v17, v18);
      if ( v27 )
      {
        v14 = *((_QWORD *)a4 + 4);
        *((_QWORD *)a4 + 4) = _GetDC(v27);
      }
    }
  }
  v34 = v13;
  v35 = v28;
  v36 = a3;
  *((_DWORD *)a4 + 5) = 0;
  v37 = *a4;
  v38 = a4[1];
  v39 = a4[2];
  v40 = a4[3];
  v41 = a5;
  v42 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v19 = *((_QWORD *)v12 + 64);
  v33 = *(_OWORD *)(v19 + 64);
  v31 = *(_QWORD *)(v19 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v13;
  if ( a1 )
    v20 = *a1;
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v20;
  if ( a1 )
    v21 = *(_QWORD *)(a1[5] + 224);
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v21;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v28);
  EtwTraceBeginCallback(12LL);
  v22 = KeUserModeCallback(12LL, &v34, 104LL, &Src, v29);
  EtwTraceEndCallback(12LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v28);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v23 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v23 + 64) = v33;
  *(_QWORD *)(v23 + 80) = v31;
  if ( v22 < 0 || v29[0] != 24 )
    return 0LL;
  v28 = 0LL;
  RtlCopyFromUser(&v28, Src, 8uLL);
  v24 = v28;
  BugCheckParameter3[2] = v28;
  if ( v14 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    _ReleaseDC(*((_QWORD *)a4 + 4));
    *((_QWORD *)a4 + 4) = v14;
  }
  return v24;
}
