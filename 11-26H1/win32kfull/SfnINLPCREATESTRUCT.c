/*
 * XREFs of SfnINLPCREATESTRUCT @ 0x14027BFE0
 * Callers:
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
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z @ 0x140205750 (-GetProcessACP@@YAGPEAUtagPROCESSINFO@@@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     ?GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z @ 0x1402D4CD0 (-GetMultiByteSizeFromUnicodeString@@YAHU_LARGE_STRING@@PEAK@Z.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPCREATESTRUCT(
        __int64 a1,
        int a2,
        int *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  int *v8; // r15
  unsigned int v9; // r12d
  int v10; // r14d
  __int16 ProcessACP; // r13
  int *v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // ecx
  unsigned int v16; // edx
  unsigned __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // rcx
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // r8
  unsigned __int8 *result; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  struct tagTHREADINFO *v28; // rax
  ULONG_PTR v29; // r12
  CHAR *v30; // rdx
  void **v31; // r9
  struct _CAPTUREBUF *v32; // rcx
  size_t v33; // r8
  unsigned int v34; // r8d
  BOOL v35; // r15d
  int v36; // r8d
  void **v37; // r9
  unsigned int v38; // r8d
  CHAR *v39; // rdx
  int v40; // eax
  size_t v41; // r8
  _QWORD *v42; // rsi
  ULONG_PTR v43; // r14
  __int64 v44; // rax
  __int128 v45; // xmm6
  __int64 v46; // xmm7_8
  __int64 v47; // rcx
  __int64 v48; // rsi
  unsigned int v49; // [rsp+34h] [rbp-3E4h] BYREF
  unsigned int v50; // [rsp+38h] [rbp-3E0h] BYREF
  int *v51; // [rsp+40h] [rbp-3D8h]
  int v52; // [rsp+48h] [rbp-3D0h] BYREF
  CHAR v53; // [rsp+4Ch] [rbp-3CCh]
  int v54; // [rsp+50h] [rbp-3C8h] BYREF
  _QWORD *v55; // [rsp+58h] [rbp-3C0h] BYREF
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-3B8h] BYREF
  __int16 v57; // [rsp+68h] [rbp-3B0h]
  __int128 v58; // [rsp+C0h] [rbp-358h] BYREF
  void (*v59)(void *); // [rsp+D0h] [rbp-348h]
  void *Src; // [rsp+E0h] [rbp-338h] BYREF
  ULONG_PTR BugCheckParameter3[5]; // [rsp+E8h] [rbp-330h] BYREF
  int v62; // [rsp+110h] [rbp-308h] BYREF
  _BYTE v63[172]; // [rsp+114h] [rbp-304h] BYREF
  unsigned __int8 v64[512]; // [rsp+1C0h] [rbp-258h] BYREF

  v8 = a3;
  v51 = a3;
  v52 = a2;
  v55 = (_QWORD *)a1;
  v49 = 0;
  v50 = 0;
  v9 = 0;
  v10 = a7 & 1;
  ProcessACP = GetProcessACP(*(struct tagPROCESSINFO **)(*(_QWORD *)(a1 + 16) + 456LL));
  memset_0(&v62, 0, 0xA8uLL);
  v12 = &v62;
  Src = 0LL;
  v54 = 0;
  RegionSize = (ULONG_PTR)PtiCurrent(v13);
  BugCheckParameter3[0] = v55[5] - *(_QWORD *)(RegionSize + 504);
  if ( a4 )
  {
    v14 = *(_QWORD *)(a4 + 56);
    if ( v14 && (*(_DWORD *)(a4 + 84) >> 31 != v10 || (unsigned __int8)MmIsKernelAddress(v14)) )
    {
      if ( (a7 & 1) != 0 && *(int *)(a4 + 84) >= 0 && ProcessACP == -535 )
      {
        v58 = *(_OWORD *)(a4 + 80);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v58, &v49) )
          goto LABEL_81;
      }
      else
      {
        v15 = *(_DWORD *)(a4 + 80);
        v16 = -1;
        if ( v15 + 2 >= v15 )
          v16 = v15 + 2;
        v49 = v16;
        if ( v15 + 2 < v15 )
          goto LABEL_81;
        if ( *(int *)(a4 + 84) < 0 && (a7 & 1) == 0 )
        {
          v17 = 2LL * v16;
          v18 = -1;
          if ( v17 <= 0xFFFFFFFF )
            v18 = 2 * v16;
          v49 = v18;
          if ( v17 > 0xFFFFFFFF )
            goto LABEL_81;
        }
      }
      v9 = 1;
    }
    v19 = *(_QWORD *)(a4 + 64);
    if ( (v19 & 0xFFFFFFFFFFFF0000uLL) != 0
      && (*(_DWORD *)(a4 + 100) >> 31 != v10 || (unsigned __int8)MmIsKernelAddress(v19)) )
    {
      if ( (a7 & 1) != 0 && *(int *)(a4 + 100) >= 0 && ProcessACP == -535 )
      {
        v58 = *(_OWORD *)(a4 + 96);
        if ( !(unsigned int)GetMultiByteSizeFromUnicodeString(&v58, &v50) )
          goto LABEL_81;
      }
      else
      {
        v20 = *(_DWORD *)(a4 + 96);
        v21 = -1;
        if ( v20 + 2 >= v20 )
          v21 = v20 + 2;
        v50 = v21;
        if ( v20 + 2 < v20 )
          goto LABEL_81;
        if ( *(int *)(a4 + 100) < 0 && (a7 & 1) == 0 )
        {
          v22 = 2LL * v21;
          v23 = -1;
          if ( v22 <= 0xFFFFFFFF )
            v23 = 2 * v21;
          v50 = v23;
          if ( v22 > 0xFFFFFFFF )
            goto LABEL_81;
        }
      }
      ++v9;
    }
    v8 = v51;
  }
  v24 = v49 + v50;
  if ( (unsigned int)v24 < v49 || (unsigned int)v24 >= 0x7FFFFFFF )
    goto LABEL_81;
  if ( v9 )
  {
    result = AllocCallbackMessage(168, v9, v24, v64, 1, 0x200uLL);
    v12 = (int *)result;
    v51 = (int *)result;
    if ( !result )
      return result;
  }
  else
  {
    v12 = &v62;
    v51 = &v62;
    memset_0(v63, 0, 0xA4uLL);
    v62 = 168;
  }
  PtiCurrent(v26);
  v58 = 0LL;
  v59 = 0LL;
  if ( v12 != &v62 && v12 != (int *)v64 )
  {
    v28 = PtiCurrent(v27);
    *(_QWORD *)&v58 = *((_QWORD *)v28 + 47);
    *((_QWORD *)v28 + 47) = &v58;
    *((_QWORD *)&v58 + 1) = v12;
    v59 = Win32FreePool;
  }
  v29 = BugCheckParameter3[0];
  *((_QWORD *)v12 + 5) = BugCheckParameter3[0];
  v12[12] = v52;
  *((_QWORD *)v12 + 7) = v8;
  *((_QWORD *)v12 + 8) = a4 != 0;
  if ( !a4 )
    goto LABEL_78;
  *(_DWORD *)(a4 + 52) = 0;
  *(_DWORD *)(a4 + 76) = 0;
  *(_OWORD *)(v12 + 18) = *(_OWORD *)a4;
  *(_OWORD *)(v12 + 22) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(v12 + 26) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(v12 + 30) = *(_OWORD *)(a4 + 48);
  *(_OWORD *)(v12 + 34) = *(_OWORD *)(a4 + 64);
  if ( !v49 )
    goto LABEL_67;
  if ( *(int *)(a4 + 84) < 0 )
  {
    v30 = *(CHAR **)(a4 + 56);
    v53 = *v30;
    if ( v53 == -1 )
    {
      if ( (a7 & 1) != 0 )
      {
        v33 = 3LL;
      }
      else
      {
        v52 = 0;
        v52 = ((unsigned __int16)(*(_DWORD *)v30 >> 8) << 16) | 0xFFFF;
        v33 = 4LL;
        v30 = (CHAR *)&v52;
      }
      v31 = (void **)(v12 + 32);
      v32 = (struct _CAPTUREBUF *)v12;
    }
    else
    {
      v31 = (void **)(v12 + 32);
      v36 = *(_DWORD *)(a4 + 80);
      v30 = *(CHAR **)(a4 + 88);
      v32 = (struct _CAPTUREBUF *)v12;
      if ( (a7 & 1) == 0 )
      {
        if ( (int)CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v30, 2 * v36 + 2, v31) < 0 )
          goto LABEL_81;
LABEL_67:
        v35 = ProcessACP == -535;
        goto LABEL_68;
      }
      v33 = (unsigned int)(v36 + 1);
    }
LABEL_52:
    if ( (int)CaptureCallbackData(v32, v30, v33, v31) < 0 )
      goto LABEL_81;
    goto LABEL_67;
  }
  v30 = *(CHAR **)(a4 + 56);
  v57 = *(_WORD *)v30;
  v31 = (void **)(v12 + 32);
  v32 = (struct _CAPTUREBUF *)v12;
  if ( v57 == -1 )
  {
    if ( (a7 & 1) != 0 )
    {
      ++v30;
      v33 = 3LL;
    }
    else
    {
      v33 = 4LL;
    }
    goto LABEL_52;
  }
  v34 = *(_DWORD *)(a4 + 80);
  v30 = *(CHAR **)(a4 + 88);
  if ( (a7 & 1) == 0 )
  {
    v33 = v34 + 2;
    goto LABEL_52;
  }
  v35 = ProcessACP == -535;
  if ( (int)CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v30, (PCWCH)((v34 >> 1) + 1), v31, v35) < 0 )
    goto LABEL_81;
LABEL_68:
  if ( v50 )
  {
    v37 = (void **)(v12 + 34);
    v38 = *(_DWORD *)(a4 + 96);
    v39 = *(CHAR **)(a4 + 104);
    if ( *(int *)(a4 + 100) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v40 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v39, 2 * v38 + 2, v37);
LABEL_77:
        if ( v40 < 0 )
          goto LABEL_81;
        goto LABEL_78;
      }
      v41 = v38 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v40 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v39, (PCWCH)((v38 >> 1) + 1), v37, v35);
        goto LABEL_77;
      }
      v41 = v38 + 2;
    }
    v40 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v39, v41, v37);
    goto LABEL_77;
  }
LABEL_78:
  *((_QWORD *)v12 + 19) = a5;
  *((_QWORD *)v12 + 20) = a6;
  v42 = v55;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v55);
  v43 = RegionSize;
  v44 = *(_QWORD *)(RegionSize + 512);
  v45 = *(_OWORD *)(v44 + 64);
  v46 = *(_QWORD *)(v44 + 80);
  *(_QWORD *)(v44 + 72) = v29;
  *(_QWORD *)(*(_QWORD *)(v43 + 512) + 64LL) = *v42;
  *(_QWORD *)(*(_QWORD *)(v43 + 512) + 80LL) = *(_QWORD *)(v42[5] + 224LL);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(10LL);
  *((_QWORD *)v12 + 2) = 0LL;
  LODWORD(v42) = KeUserModeCallback(10LL, v12, (unsigned int)*v12, &Src, &v54);
  EtwTraceEndCallback(10LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v47 = *(_QWORD *)(v43 + 512);
  *(_OWORD *)(v47 + 64) = v45;
  *(_QWORD *)(v47 + 80) = v46;
  if ( (int)v42 >= 0 && v54 == 24 )
  {
    v55 = 0LL;
    RtlCopyFromUser(&v55, Src, 8uLL);
    v48 = (__int64)v55;
    BugCheckParameter3[2] = (ULONG_PTR)v55;
    goto LABEL_82;
  }
LABEL_81:
  v48 = 0LL;
LABEL_82:
  if ( v12 != &v62 && v12 != (int *)v64 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v58);
  }
  return (unsigned __int8 *)v48;
}
