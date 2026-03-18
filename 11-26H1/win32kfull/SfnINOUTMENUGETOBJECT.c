/*
 * XREFs of SfnINOUTMENUGETOBJECT @ 0x1402D62E0
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

ULONG_PTR __fastcall SfnINOUTMENUGETOBJECT(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int128 *a4,
        ULONG_PTR a5,
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
  ULONG_PTR v20; // rdi
  _QWORD *v21; // rbx
  __int128 v23; // [rsp+60h] [rbp-B8h] BYREF
  volatile void *Address; // [rsp+70h] [rbp-A8h]
  ULONG_PTR BugCheckParameter3[5]; // [rsp+78h] [rbp-A0h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-78h] BYREF
  int v27; // [rsp+A8h] [rbp-70h]
  __int64 v28; // [rsp+B0h] [rbp-68h]
  __int128 v29; // [rsp+B8h] [rbp-60h]
  __int128 v30; // [rsp+C8h] [rbp-50h]
  ULONG_PTR v31; // [rsp+D8h] [rbp-40h]
  __int64 v32; // [rsp+E0h] [rbp-38h]
  void *Src; // [rsp+120h] [rbp+8h] BYREF
  int v34; // [rsp+128h] [rbp+10h] BYREF

  Src = 0LL;
  v34 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  memset_0(&v26, 0, 0x48uLL);
  v26 = v14;
  v27 = a2;
  v28 = a3;
  v29 = *a4;
  v30 = a4[1];
  v31 = a5;
  v32 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v15 = *((_QWORD *)v13 + 64);
  v23 = *(_OWORD *)(v15 + 64);
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
  EtwTraceBeginCallback(102LL);
  v18 = KeUserModeCallback(102LL, &v26, 72LL, &Src, &v34);
  EtwTraceEndCallback(102LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v19 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v19 + 64) = v23;
  *(_QWORD *)(v19 + 80) = a6;
  if ( v18 >= 0 && v34 == 24 )
  {
    a5 = 0LL;
    RtlCopyFromUser(&a5, Src, 8uLL);
    v20 = a5;
    BugCheckParameter3[2] = a5;
    if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
      return v20;
    v23 = 0LL;
    Address = 0LL;
    RtlCopyFromUser(&v23, Src, 0x18uLL);
    if ( DWORD2(v23) == 8 )
    {
      v21 = Address;
      ProbeForRead(Address, 8uLL, 4u);
      *((_QWORD *)a4 + 3) = *v21;
      return v20;
    }
  }
  return 0LL;
}
