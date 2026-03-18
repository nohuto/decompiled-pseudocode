/*
 * XREFs of SfnINSTRINGNULL @ 0x140007400
 * Callers:
 *     ?_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z @ 0x1400067DC (-_SfnINBOXSTRING@@YA_JJPEAUtagWND@@I_K_J1P6A_JXZKPEAUtagSMS@@@Z.c)
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ?CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400057D4 (-CaptureUnicodeCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z @ 0x1400059EC (-CaptureAnsiCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAXH@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
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

ULONG_PTR __fastcall SfnINSTRINGNULL(__int64 *a1, int a2, ULONG_PTR a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int *v9; // rdi
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // r13
  unsigned int v12; // r12d
  unsigned __int64 v13; // r14
  ULONG_PTR v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // esi
  __int64 v20; // rcx
  ULONG_PTR v21; // rsi
  void **v23; // r9
  unsigned int v24; // r8d
  CHAR *v25; // rdx
  size_t v26; // r8
  int v27; // eax
  struct tagTHREADINFO *v28; // rax
  ULONG_PTR v29; // [rsp+30h] [rbp-338h] BYREF
  int v30; // [rsp+38h] [rbp-330h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-328h] BYREF
  int *v32; // [rsp+48h] [rbp-320h]
  int v33; // [rsp+50h] [rbp-318h]
  void *Src; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v35; // [rsp+80h] [rbp-2E8h] BYREF
  void (*v36)(void *); // [rsp+90h] [rbp-2D8h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+98h] [rbp-2D0h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-2B0h]
  int v39; // [rsp+D0h] [rbp-298h] BYREF
  char v40[92]; // [rsp+D4h] [rbp-294h] BYREF
  unsigned __int8 v41[512]; // [rsp+130h] [rbp-238h] BYREF
  int v42; // [rsp+3A0h] [rbp+38h]

  RegionSize = a3;
  v33 = a2;
  v42 = a7 & 1;
  memset_0(&v39, 0, 0x58uLL);
  v9 = &v39;
  Src = 0LL;
  v30 = 0;
  v10 = PtiCurrent();
  v11 = v10;
  if ( a1 )
    v29 = a1[5] - *((_QWORD *)v10 + 63);
  else
    v29 = 0LL;
  v12 = 0;
  LODWORD(v13) = 0;
  if ( a4 && ((unsigned __int8)MmIsKernelAddress(*((_QWORD *)a4 + 1)) || (unsigned int)a4[1] >> 31 != v42) )
  {
    v12 = 1;
    v13 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v13 < *a4 )
      goto LABEL_40;
    if ( a4[1] < 0 && !v42 )
    {
      v13 *= 2LL;
      if ( v13 > 0xFFFFFFFF )
        goto LABEL_40;
    }
  }
  if ( v12 )
  {
    v9 = (int *)AllocCallbackMessage(0x58u, v12, (unsigned int)v13, v41, 1, 0x200uLL);
    v32 = v9;
    if ( !v9 )
      return 0LL;
  }
  else
  {
    v9 = &v39;
    v32 = &v39;
    memset_0(v40, 0, 0x54uLL);
    v39 = 88;
  }
  PtiCurrent();
  v35 = 0LL;
  v36 = 0LL;
  if ( v9 != &v39 && v9 != (int *)v41 )
  {
    v28 = PtiCurrent();
    *(_QWORD *)&v35 = *((_QWORD *)v28 + 47);
    *((_QWORD *)v28 + 47) = &v35;
    *((_QWORD *)&v35 + 1) = v9;
    v36 = Win32FreePool;
  }
  v14 = v29;
  *((_QWORD *)v9 + 5) = v29;
  v9[12] = v33;
  *((_QWORD *)v9 + 7) = RegionSize;
  if ( v12 )
  {
    v23 = (void **)(v9 + 20);
    v24 = *a4;
    v25 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( v42 )
      {
        v26 = v24 + 1;
        goto LABEL_28;
      }
      v27 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v25, 2 * v24 + 2, v23);
    }
    else
    {
      if ( !v42 )
      {
        v26 = v24 + 2;
LABEL_28:
        v27 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v25, v26, v23);
        goto LABEL_29;
      }
      v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v25, (PCWCH)((v24 >> 1) + 1), v23, 0);
    }
LABEL_29:
    if ( v27 < 0 )
      goto LABEL_40;
    goto LABEL_14;
  }
  if ( a4 )
    v15 = *((_QWORD *)a4 + 1);
  else
    v15 = 0LL;
  *((_QWORD *)v9 + 10) = v15;
LABEL_14:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
  v16 = *((_QWORD *)v11 + 64);
  v38 = *(_OWORD *)(v16 + 64);
  v29 = *(_QWORD *)(v16 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v14;
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
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(27LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v19 = KeUserModeCallback(27LL, v9, (unsigned int)*v9, &Src, &v30);
  EtwTraceEndCallback(27LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v20 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v20 + 64) = v38;
  *(_QWORD *)(v20 + 80) = v29;
  if ( v19 >= 0 && v30 == 24 )
  {
    v29 = 0LL;
    RtlCopyFromUser(&v29, Src, 8uLL);
    v21 = v29;
    BugCheckParameter3[2] = v29;
    goto LABEL_23;
  }
LABEL_40:
  v21 = 0LL;
LABEL_23:
  if ( v9 != &v39 && v9 != (int *)v41 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    *((_QWORD *)PtiCurrent() + 47) = v35;
    ((void (__fastcall *)(_QWORD))v36)(*((_QWORD *)&v35 + 1));
  }
  return v21;
}
