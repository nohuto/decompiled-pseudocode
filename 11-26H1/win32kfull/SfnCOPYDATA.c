/*
 * XREFs of SfnCOPYDATA @ 0x1400082D0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     ?xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z @ 0x14013DE70 (-xxxSendShutdownData@@YA_JPEAUHWND__@@_K@Z.c)
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

ULONG_PTR __fastcall SfnCOPYDATA(__int64 *a1, int a2, ULONG_PTR a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct tagTHREADINFO *v8; // rax
  struct tagTHREADINFO *v9; // r15
  __int64 v10; // r14
  size_t v11; // rcx
  unsigned int *v12; // rbx
  unsigned int v13; // r12d
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  __int64 v22; // rax
  _QWORD *v23; // r12
  int v24; // [rsp+30h] [rbp-348h] BYREF
  ULONG_PTR RegionSize; // [rsp+38h] [rbp-340h] BYREF
  _DWORD *v26; // [rsp+40h] [rbp-338h]
  ULONG_PTR BugCheckParameter3[6]; // [rsp+48h] [rbp-330h] BYREF
  ULONG_PTR v28; // [rsp+78h] [rbp-300h] BYREF
  size_t Size; // [rsp+80h] [rbp-2F8h]
  void *Src; // [rsp+88h] [rbp-2F0h] BYREF
  __int128 v31; // [rsp+90h] [rbp-2E8h] BYREF
  void (*v32)(void *); // [rsp+A0h] [rbp-2D8h]
  ULONG_PTR v33; // [rsp+A8h] [rbp-2D0h]
  __int128 v34; // [rsp+B8h] [rbp-2C0h]
  _DWORD v35[28]; // [rsp+D0h] [rbp-2A8h] BYREF
  _BYTE v36[512]; // [rsp+140h] [rbp-238h] BYREF

  RegionSize = a3;
  LODWORD(BugCheckParameter3[0]) = a2;
  memset_0(v35, 0, sizeof(v35));
  Src = 0LL;
  v24 = 0;
  v8 = PtiCurrent();
  v9 = v8;
  if ( a1 )
    v10 = a1[5] - *((_QWORD *)v8 + 63);
  else
    v10 = 0LL;
  if ( !a4 )
  {
    v13 = 0;
    v12 = v35;
    v26 = v35;
    v35[0] = 112;
    goto LABEL_11;
  }
  Size = *(unsigned int *)(a4 + 8);
  v11 = (Size + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  v28 = v11;
  if ( v11 > 0x800 )
  {
    v22 = Win32AllocPoolWithQuotaZInit(120LL, 1667461973LL);
    v12 = (unsigned int *)v22;
    if ( v22 )
    {
      v23 = (_QWORD *)(v22 + 32);
      *(_QWORD *)(v22 + 32) = 0LL;
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)(v22 + 32), 0LL, &v28, 0x1000u, 4u) >= 0 )
      {
        *((_QWORD *)v12 + 2) = *v23;
        *v12 = 120;
        goto LABEL_8;
      }
      Win32FreePool(v12);
    }
    goto LABEL_32;
  }
  if ( v11 + 120 > 0x200 )
  {
    v12 = (unsigned int *)Win32AllocPoolWithQuotaZInit((unsigned int)(v11 + 120), 1667461973LL);
    if ( v12 )
      goto LABEL_7;
LABEL_32:
    v12 = 0LL;
    goto LABEL_9;
  }
  v12 = (unsigned int *)v36;
  memset_0(v36, 0, sizeof(v36));
LABEL_7:
  *((_QWORD *)v12 + 2) = v12 + 30;
  *((_QWORD *)v12 + 4) = 0LL;
  *v12 = v28 + 120;
LABEL_8:
  *(_QWORD *)(v12 + 1) = (unsigned int)v28;
  v12[6] = 112;
LABEL_9:
  v26 = v12;
  if ( !v12 )
    return 0LL;
  v13 = Size;
LABEL_11:
  PtiCurrent();
  v31 = 0LL;
  v32 = 0LL;
  if ( v12 != v35 && v12 != (unsigned int *)v36 )
  {
    v14 = PtiCurrent();
    *(_QWORD *)&v31 = *((_QWORD *)v14 + 47);
    *((_QWORD *)v14 + 47) = &v31;
    *((_QWORD *)&v31 + 1) = v12;
    v32 = Win32FreePool;
  }
  *((_QWORD *)v12 + 5) = v10;
  v12[12] = BugCheckParameter3[0];
  *((_QWORD *)v12 + 7) = RegionSize;
  if ( a4 )
  {
    v12[16] = 1;
    *(_DWORD *)(a4 + 12) = 0;
    *(_OWORD *)(v12 + 18) = *(_OWORD *)a4;
    *((_QWORD *)v12 + 11) = *(_QWORD *)(a4 + 16);
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v12, *(void **)(a4 + 16), v13, (void **)v12 + 11) < 0 )
      goto LABEL_34;
  }
  else
  {
    v12[16] = 0;
  }
  *((_QWORD *)v12 + 12) = a5;
  *((_QWORD *)v12 + 13) = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
  v15 = *((_QWORD *)v9 + 64);
  v34 = *(_OWORD *)(v15 + 64);
  Size = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v9 + 64) + 72LL) = v10;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v9 + 64) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v9 + 64) + 80LL) = v17;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(0LL);
  *((_QWORD *)v12 + 2) = 0LL;
  v18 = KeUserModeCallback(0LL, v12, *v12, &Src, &v24);
  EtwTraceEndCallback(0LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v19 = *((_QWORD *)v9 + 64);
  *(_OWORD *)(v19 + 64) = v34;
  *(_QWORD *)(v19 + 80) = Size;
  if ( v18 >= 0 && v24 == 24 )
  {
    BugCheckParameter3[0] = 0LL;
    RtlCopyFromUser(BugCheckParameter3, Src, 8uLL);
    v20 = BugCheckParameter3[0];
    v33 = BugCheckParameter3[0];
    goto LABEL_25;
  }
LABEL_34:
  v20 = 0LL;
LABEL_25:
  if ( v12 != v35 && v12 != (unsigned int *)v36 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    *((_QWORD *)PtiCurrent() + 47) = v31;
    ((void (__fastcall *)(_QWORD))v32)(*((_QWORD *)&v31 + 1));
  }
  return v20;
}
