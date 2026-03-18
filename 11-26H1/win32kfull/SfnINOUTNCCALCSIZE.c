/*
 * XREFs of SfnINOUTNCCALCSIZE @ 0x1401B6510
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
 *     ?GetCount@AtomicExecutionCheck@@SAIXZ @ 0x1401B68F4 (-GetCount@AtomicExecutionCheck@@SAIXZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall SfnINOUTNCCALCSIZE(
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
  struct tagTHREADINFO *v13; // r14
  __int64 v14; // rdi
  unsigned int v15; // r15d
  __int64 v16; // rax
  __int128 v17; // xmm6
  __int64 v18; // xmm7_8
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int Count; // eax
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v24; // rdi
  _OWORD *v25; // rbx
  __int128 v26; // xmm0
  __int64 v27; // rax
  int v29; // [rsp+30h] [rbp-178h] BYREF
  _QWORD v30[7]; // [rsp+38h] [rbp-170h] BYREF
  void *Src; // [rsp+70h] [rbp-138h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+78h] [rbp-130h] BYREF
  volatile void *Address; // [rsp+88h] [rbp-120h]
  __int64 v34; // [rsp+90h] [rbp-118h]
  __int128 v35; // [rsp+A0h] [rbp-108h]
  volatile void *v36; // [rsp+B0h] [rbp-F8h]
  __int64 v37; // [rsp+C0h] [rbp-E8h] BYREF
  int v38; // [rsp+C8h] [rbp-E0h]
  __int64 v39; // [rsp+D0h] [rbp-D8h]
  __int64 v40; // [rsp+D8h] [rbp-D0h]
  __int64 v41; // [rsp+E0h] [rbp-C8h]
  __int128 v42; // [rsp+E8h] [rbp-C0h]
  __int128 v43; // [rsp+F8h] [rbp-B0h]
  __int128 v44; // [rsp+108h] [rbp-A0h]
  __int128 *v45; // [rsp+118h] [rbp-90h]
  __int128 v46; // [rsp+120h] [rbp-88h]
  __int128 v47; // [rsp+130h] [rbp-78h]
  __int64 v48; // [rsp+140h] [rbp-68h]

  Src = 0LL;
  v29 = 0;
  v12 = PtiCurrent((__int64)a1);
  v13 = v12;
  if ( a1 )
    v14 = a1[5] - *((_QWORD *)v12 + 63);
  else
    v14 = 0LL;
  v15 = 136;
  memset_0(&v37, 0, 0x88uLL);
  v37 = v14;
  v38 = a2;
  v39 = a3;
  v40 = a5;
  v41 = a6;
  v42 = *a4;
  if ( a3 )
  {
    v43 = a4[1];
    v44 = a4[2];
    v45 = (__int128 *)*((_QWORD *)a4 + 6);
    *((_DWORD *)v45 + 9) = 0;
    v46 = *v45;
    v47 = v45[1];
    v48 = *((_QWORD *)v45 + 4);
    v45 = 0LL;
  }
  else
  {
    v15 = 56;
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v16 = *((_QWORD *)v13 + 64);
  v17 = *(_OWORD *)(v16 + 64);
  v18 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(v16 + 72) = v14;
  v19 = 0LL;
  if ( a1 )
    v19 = *a1;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 64LL) = v19;
  if ( a1 )
    v20 = *(_QWORD *)(a1[5] + 224);
  else
    v20 = 0LL;
  *(_QWORD *)(*((_QWORD *)v13 + 64) + 80LL) = v20;
  Count = AtomicExecutionCheck::GetCount();
  if ( Count )
    KeBugCheckEx(0x160u, Count, 0LL, 0LL, 0LL);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
  EtwTraceBeginCallback(21LL);
  v22 = KeUserModeCallback(21LL, &v37, v15, &Src, &v29);
  EtwTraceEndCallback(21LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v30);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v23 = *((_QWORD *)v13 + 64);
  *(_OWORD *)(v23 + 64) = v17;
  *(_QWORD *)(v23 + 80) = v18;
  if ( v22 < 0 || v29 != 24 )
    return 0LL;
  v30[0] = 0LL;
  RtlCopyFromUser(v30, Src, 8uLL);
  v24 = v30[0];
  v34 = v30[0];
  if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
  {
    *(_OWORD *)BugCheckParameter3 = 0LL;
    Address = 0LL;
    RtlCopyFromUser(BugCheckParameter3, Src, 0x18uLL);
    v35 = *(_OWORD *)BugCheckParameter3;
    v36 = Address;
    v25 = Address;
    ProbeForRead(Address, 0x60uLL, 4u);
    v26 = *v25;
    if ( a3 )
    {
      v27 = *((_QWORD *)a4 + 6);
      *a4 = v26;
      a4[1] = v25[1];
      a4[2] = v25[2];
      *((_QWORD *)a4 + 6) = *((_QWORD *)v25 + 6);
      *(_OWORD *)v27 = *(_OWORD *)((char *)v25 + 56);
      *(_OWORD *)(v27 + 16) = *(_OWORD *)((char *)v25 + 72);
      *(_QWORD *)(v27 + 32) = *((_QWORD *)v25 + 11);
      *((_QWORD *)a4 + 6) = v27;
    }
    else
    {
      *a4 = v26;
    }
  }
  return v24;
}
