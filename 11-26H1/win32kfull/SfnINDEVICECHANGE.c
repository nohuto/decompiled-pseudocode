/*
 * XREFs of SfnINDEVICECHANGE @ 0x140007A60
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINDEVICECHANGE(
        __int64 *a1,
        int a2,
        ULONG_PTR a3,
        unsigned int *a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v9; // rbx
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // r13
  __int64 v12; // r15
  unsigned int v13; // r12d
  ULONG_PTR v14; // rcx
  unsigned int *v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rcx
  ULONG_PTR v21; // rsi
  __int64 v23; // rax
  struct tagTHREADINFO *v24; // rax
  ULONG_PTR v25; // [rsp+30h] [rbp-338h] BYREF
  int v26; // [rsp+38h] [rbp-330h] BYREF
  _BYTE *v27; // [rsp+40h] [rbp-328h]
  ULONG_PTR v28[5]; // [rsp+48h] [rbp-320h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2F8h] BYREF
  void *Src; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v31; // [rsp+80h] [rbp-2E8h] BYREF
  void (*v32)(void *); // [rsp+90h] [rbp-2D8h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+98h] [rbp-2D0h] BYREF
  __int128 v34; // [rsp+B8h] [rbp-2B0h]
  _BYTE v35[96]; // [rsp+D0h] [rbp-298h] BYREF
  _BYTE v36[512]; // [rsp+130h] [rbp-238h] BYREF
  int v37; // [rsp+3A0h] [rbp+38h]

  v28[0] = a3;
  LODWORD(v25) = a2;
  v37 = a7 & 1;
  v9 = (unsigned __int16)a3 & 0x8000;
  memset_0(v35, 0, sizeof(v35));
  Src = 0LL;
  v26 = 0;
  v10 = PtiCurrent();
  v11 = v10;
  if ( a1 )
    v12 = a1[5] - *((_QWORD *)v10 + 63);
  else
    v12 = 0LL;
  v13 = 0;
  if ( v9 && a4 && (unsigned __int8)MmIsKernelAddress(a4) )
    v13 = *a4;
  v14 = (v13 + 7LL) & 0xFFFFFFFFFFFFFFF8uLL;
  RegionSize = v14;
  if ( v14 > 0x800 )
  {
    v23 = Win32AllocPoolWithQuotaZInit(104LL, 1667461973LL);
    v15 = (unsigned int *)v23;
    v27 = (_BYTE *)v23;
    if ( v23 )
    {
      *(_QWORD *)(v23 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v23 + 32), 0LL, &RegionSize, 0x1000u, 4u) >= 0 )
      {
        *((_QWORD *)v15 + 2) = *((_QWORD *)v15 + 4);
        *v15 = 104;
        goto LABEL_8;
      }
      Win32FreePool(v15);
    }
    return 0LL;
  }
  if ( v14 + 104 > 0x200 )
  {
    v15 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v14 + 104), 1667461973LL);
    v27 = v15;
    if ( v15 )
      goto LABEL_7;
    return 0LL;
  }
  v15 = (unsigned int *)v36;
  v27 = v36;
  memset_0(v36, 0, sizeof(v36));
LABEL_7:
  *((_QWORD *)v15 + 2) = v15 + 26;
  *((_QWORD *)v15 + 4) = 0LL;
  *v15 = RegionSize + 104;
LABEL_8:
  *(_QWORD *)(v15 + 1) = (unsigned int)RegionSize;
  v15[6] = 96;
  PtiCurrent();
  v31 = 0LL;
  v32 = 0LL;
  if ( v15 != (unsigned int *)v35 && v15 != (unsigned int *)v36 )
  {
    v24 = PtiCurrent();
    *(_QWORD *)&v31 = *((_QWORD *)v24 + 47);
    *((_QWORD *)v24 + 47) = &v31;
    *((_QWORD *)&v31 + 1) = v15;
    v32 = Win32FreePool;
  }
  *((_QWORD *)v15 + 5) = v12;
  v15[12] = v25;
  *((_QWORD *)v15 + 7) = v28[0];
  if ( v13 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, *a4, (void **)v15 + 10) < 0 )
      goto LABEL_31;
  }
  else
  {
    *((_QWORD *)v15 + 10) = a4;
  }
  v15[22] = v37;
  *((_QWORD *)v15 + 8) = a5;
  *((_QWORD *)v15 + 9) = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
  v16 = *((_QWORD *)v11 + 64);
  v34 = *(_OWORD *)(v16 + 64);
  v25 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v12;
  if ( a1 )
    v17 = *a1;
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 64LL) = v17;
  if ( a1 )
    v18 = *(_QWORD *)(a1[5] + 224);
  else
    v18 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 80LL) = v18;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v28);
  EtwTraceBeginCallback(28LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v19 = KeUserModeCallback(28LL, v15, *v15, &Src, &v26);
  EtwTraceEndCallback(28LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v28);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v20 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v20 + 64) = v34;
  *(_QWORD *)(v20 + 80) = v25;
  if ( v19 >= 0 && v26 == 24 )
  {
    v25 = 0LL;
    RtlCopyFromUser(&v25, Src, 8uLL);
    v21 = v25;
    BugCheckParameter3[2] = v25;
    goto LABEL_22;
  }
LABEL_31:
  v21 = 0LL;
LABEL_22:
  if ( v15 != (unsigned int *)v35 && v15 != (unsigned int *)v36 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      v28[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, v28, 0x8000u);
    }
    *((_QWORD *)PtiCurrent() + 47) = v31;
    ((void (__fastcall *)(_QWORD))v32)(*((_QWORD *)&v31 + 1));
  }
  return v21;
}
