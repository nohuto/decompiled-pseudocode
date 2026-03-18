/*
 * XREFs of SfnINLPMDICREATESTRUCT @ 0x1402D5A80
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
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnINLPMDICREATESTRUCT(
        __int64 a1,
        int a2,
        ULONG_PTR a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  unsigned __int64 v9; // r15
  unsigned int v10; // r13d
  int v11; // r14d
  int *v12; // rdi
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rcx
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned __int64 v18; // rcx
  unsigned __int8 *result; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // r12
  void **v24; // r9
  unsigned int v25; // r8d
  CHAR *v26; // rdx
  int v27; // eax
  size_t v28; // r8
  void **v29; // r9
  unsigned int v30; // r8d
  CHAR *v31; // rdx
  int v32; // eax
  size_t v33; // r8
  __int64 *v34; // rsi
  ULONG_PTR v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  int v39; // esi
  __int64 v40; // rcx
  __int64 v41; // rsi
  int v42; // [rsp+30h] [rbp-368h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-360h]
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-358h] BYREF
  int *v45; // [rsp+48h] [rbp-350h]
  int v46; // [rsp+50h] [rbp-348h]
  __int128 v47; // [rsp+78h] [rbp-320h] BYREF
  __int64 *v48; // [rsp+88h] [rbp-310h]
  void *Src; // [rsp+90h] [rbp-308h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+98h] [rbp-300h] BYREF
  __int128 v51; // [rsp+A8h] [rbp-2F0h] BYREF
  void (*v52)(void *); // [rsp+B8h] [rbp-2E0h]
  __int64 v53; // [rsp+C0h] [rbp-2D8h]
  int v54; // [rsp+D0h] [rbp-2C8h] BYREF
  char v55[140]; // [rsp+D4h] [rbp-2C4h] BYREF
  unsigned __int8 v56[512]; // [rsp+160h] [rbp-238h] BYREF

  BugCheckParameter3[0] = a3;
  v46 = a2;
  v48 = (__int64 *)a1;
  LODWORD(v9) = 0;
  v43 = 0LL;
  v10 = 0;
  v11 = a7 & 1;
  memset_0(&v54, 0, 0x90uLL);
  v12 = &v54;
  Src = 0LL;
  v42 = 0;
  v14 = PtiCurrent(v13);
  RegionSize = (ULONG_PTR)v14;
  if ( a1 )
    *(_QWORD *)&v47 = *(_QWORD *)(a1 + 40) - *((_QWORD *)v14 + 63);
  else
    *(_QWORD *)&v47 = 0LL;
  v15 = *(_QWORD *)(a4 + 8);
  if ( v15 && ((unsigned __int8)MmIsKernelAddress(v15) || *(_DWORD *)(a4 + 60) >> 31 != v11) )
  {
    v16 = *(_DWORD *)(a4 + 56);
    v9 = v16 + 2;
    if ( (unsigned int)v9 < v16 )
      goto LABEL_58;
    if ( *(int *)(a4 + 60) < 0 && (a7 & 1) == 0 )
    {
      v9 *= 2LL;
      if ( v9 > 0xFFFFFFFF )
        goto LABEL_58;
    }
    v10 = 1;
  }
  if ( (*(_QWORD *)a4 & 0xFFFFFFFFFFFF0000uLL) != 0
    && ((unsigned __int8)MmIsKernelAddress(*(_QWORD *)a4) || *(_DWORD *)(a4 + 76) >> 31 != v11) )
  {
    v17 = *(_DWORD *)(a4 + 72);
    v18 = v17 + 2;
    v43 = v18;
    if ( (unsigned int)v18 < v17 )
      goto LABEL_58;
    if ( *(int *)(a4 + 76) < 0 && (a7 & 1) == 0 )
    {
      v18 *= 2LL;
      v43 = v18;
      if ( v18 > 0xFFFFFFFF )
        goto LABEL_58;
    }
    ++v10;
  }
  else
  {
    LODWORD(v18) = v43;
  }
  if ( (int)v18 + (int)v9 >= (unsigned int)v9 )
  {
    if ( v10 )
    {
      result = AllocCallbackMessage(144, v10, (unsigned int)(v18 + v9), v56, 1, 0x200uLL);
      v12 = (int *)result;
      v45 = (int *)result;
      if ( !result )
        return result;
    }
    else
    {
      v12 = &v54;
      v45 = &v54;
      memset_0(v55, 0, sizeof(v55));
      v54 = 144;
    }
    PtiCurrent(v20);
    v51 = 0LL;
    v52 = 0LL;
    if ( v12 != &v54 && v12 != (int *)v56 )
    {
      v22 = PtiCurrent(v21);
      *(_QWORD *)&v51 = *((_QWORD *)v22 + 47);
      *((_QWORD *)v22 + 47) = &v51;
      *((_QWORD *)&v51 + 1) = v12;
      v52 = Win32FreePool;
    }
    v23 = v47;
    *((_QWORD *)v12 + 5) = v47;
    v12[12] = v46;
    *((_QWORD *)v12 + 7) = BugCheckParameter3[0];
    *(_DWORD *)(a4 + 44) = 0;
    *((_OWORD *)v12 + 4) = *(_OWORD *)a4;
    *((_OWORD *)v12 + 5) = *(_OWORD *)(a4 + 16);
    *((_OWORD *)v12 + 6) = *(_OWORD *)(a4 + 32);
    *((_QWORD *)v12 + 14) = *(_QWORD *)(a4 + 48);
    if ( !(_DWORD)v9 )
      goto LABEL_39;
    v24 = (void **)(v12 + 18);
    v25 = *(_DWORD *)(a4 + 56);
    v26 = *(CHAR **)(a4 + 64);
    if ( *(int *)(a4 + 60) < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v27 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v26, 2 * v25 + 2, v24);
LABEL_38:
        if ( v27 < 0 )
          goto LABEL_58;
LABEL_39:
        if ( !(_DWORD)v43 )
        {
LABEL_49:
          *((_QWORD *)v12 + 15) = a5;
          *((_QWORD *)v12 + 16) = a6;
          v34 = v48;
          Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)v48);
          v35 = RegionSize;
          v36 = *(_QWORD *)(RegionSize + 512);
          v47 = *(_OWORD *)(v36 + 64);
          v48 = *(__int64 **)(v36 + 80);
          *(_QWORD *)(*(_QWORD *)(RegionSize + 512) + 72LL) = v23;
          if ( v34 )
            v37 = *v34;
          else
            v37 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v35 + 512) + 64LL) = v37;
          if ( v34 )
            v38 = *(_QWORD *)(v34[5] + 224);
          else
            v38 = 0LL;
          *(_QWORD *)(*(_QWORD *)(v35 + 512) + 80LL) = v38;
          LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
          EtwTraceBeginCallback(15LL);
          *((_QWORD *)v12 + 2) = 0LL;
          v39 = KeUserModeCallback(15LL, v12, (unsigned int)*v12, &Src, &v42);
          EtwTraceEndCallback(15LL);
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
          Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
          v40 = *(_QWORD *)(v35 + 512);
          *(_OWORD *)(v40 + 64) = v47;
          *(_QWORD *)(v40 + 80) = v48;
          if ( v39 >= 0 && v42 == 24 )
          {
            *(_QWORD *)&v47 = 0LL;
            RtlCopyFromUser(&v47, Src, 8uLL);
            v41 = v47;
            v53 = v47;
            goto LABEL_59;
          }
          goto LABEL_58;
        }
        v29 = (void **)(v12 + 16);
        v30 = *(_DWORD *)(a4 + 72);
        v31 = *(CHAR **)(a4 + 80);
        if ( *(int *)(a4 + 76) < 0 )
        {
          if ( (a7 & 1) == 0 )
          {
            v32 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v12, v31, 2 * v30 + 2, v29);
LABEL_48:
            if ( v32 < 0 )
              goto LABEL_58;
            goto LABEL_49;
          }
          v33 = v30 + 1;
        }
        else
        {
          if ( (a7 & 1) != 0 )
          {
            v32 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v31, (PCWCH)((v30 >> 1) + 1), v29, 0);
            goto LABEL_48;
          }
          v33 = v30 + 2;
        }
        v32 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v31, v33, v29);
        goto LABEL_48;
      }
      v28 = v25 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v27 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v12, (PCWCH)v26, (PCWCH)((v25 >> 1) + 1), v24, 0);
        goto LABEL_38;
      }
      v28 = v25 + 2;
    }
    v27 = CaptureCallbackData((struct _CAPTUREBUF *)v12, v26, v28, v24);
    goto LABEL_38;
  }
LABEL_58:
  v41 = 0LL;
LABEL_59:
  if ( v12 != &v54 && v12 != (int *)v56 )
  {
    if ( *((_QWORD *)v12 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v51);
  }
  return (unsigned __int8 *)v41;
}
