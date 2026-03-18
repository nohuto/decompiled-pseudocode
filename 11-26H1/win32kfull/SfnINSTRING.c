/*
 * XREFs of SfnINSTRING @ 0x140006900
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
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

int *__fastcall SfnINSTRING(__int64 *a1, int a2, ULONG_PTR a3, int *a4, __int64 a5, __int64 a6, char a7)
{
  int *v9; // rdi
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // r13
  unsigned __int64 v12; // rcx
  unsigned int v13; // r15d
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // esi
  __int64 v19; // rcx
  ULONG_PTR v20; // rsi
  int *result; // rax
  struct tagTHREADINFO *v22; // rax
  void **v23; // r9
  unsigned int v24; // r8d
  CHAR *v25; // rdx
  int v26; // eax
  size_t v27; // r8
  ULONG_PTR v28; // [rsp+30h] [rbp-338h] BYREF
  int v29; // [rsp+38h] [rbp-330h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-328h] BYREF
  int *v31; // [rsp+48h] [rbp-320h]
  __int64 v32; // [rsp+50h] [rbp-318h]
  void *Src; // [rsp+78h] [rbp-2F0h] BYREF
  __int128 v34; // [rsp+80h] [rbp-2E8h] BYREF
  void (*v35)(void *); // [rsp+90h] [rbp-2D8h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+98h] [rbp-2D0h] BYREF
  __int128 v37; // [rsp+B8h] [rbp-2B0h]
  int v38; // [rsp+D0h] [rbp-298h] BYREF
  _BYTE v39[92]; // [rsp+D4h] [rbp-294h] BYREF
  unsigned __int8 v40[512]; // [rsp+130h] [rbp-238h] BYREF

  RegionSize = a3;
  LODWORD(v32) = a2;
  memset_0(&v38, 0, 0x58uLL);
  v9 = &v38;
  Src = 0LL;
  v29 = 0;
  v10 = PtiCurrent();
  v11 = v10;
  if ( a1 )
    v28 = a1[5] - *((_QWORD *)v10 + 63);
  else
    v28 = 0LL;
  if ( a4 && ((unsigned __int8)MmIsKernelAddress(*((_QWORD *)a4 + 1)) || (unsigned int)a4[1] >> 31 != (a7 & 1)) )
  {
    v13 = 1;
    v12 = (unsigned int)(*a4 + 2);
    if ( (unsigned int)v12 < *a4 )
      goto LABEL_28;
    if ( a4[1] < 0 && (a7 & 1) == 0 )
    {
      v12 *= 2LL;
      if ( v12 > 0xFFFFFFFF )
        goto LABEL_28;
    }
  }
  else
  {
    LODWORD(v12) = 0;
    v13 = 0;
  }
  if ( v13 )
  {
    result = (int *)AllocCallbackMessage(0x58u, v13, (unsigned int)v12, v40, 1, 0x200uLL);
    v9 = result;
    v31 = result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v38;
    v31 = &v38;
    memset_0(v39, 0, 0x54uLL);
    v38 = 88;
  }
  PtiCurrent();
  v34 = 0LL;
  v35 = 0LL;
  if ( v9 != &v38 && v9 != (int *)v40 )
  {
    v22 = PtiCurrent();
    *(_QWORD *)&v34 = *((_QWORD *)v22 + 47);
    *((_QWORD *)v22 + 47) = &v34;
    *((_QWORD *)&v34 + 1) = v9;
    v35 = Win32FreePool;
  }
  *((_QWORD *)v9 + 5) = v28;
  v9[12] = v32;
  *((_QWORD *)v9 + 7) = RegionSize;
  if ( v13 )
  {
    v23 = (void **)(v9 + 20);
    v24 = *a4;
    v25 = (CHAR *)*((_QWORD *)a4 + 1);
    if ( a4[1] < 0 )
    {
      if ( (a7 & 1) == 0 )
      {
        v26 = CaptureUnicodeCallbackData((struct _CAPTUREBUF *)v9, v25, 2 * v24 + 2, v23);
        goto LABEL_34;
      }
      v27 = v24 + 1;
    }
    else
    {
      if ( (a7 & 1) != 0 )
      {
        v26 = CaptureAnsiCallbackData((struct _CAPTUREBUF *)v9, (PCWCH)v25, (PCWCH)((v24 >> 1) + 1), v23, 0);
        goto LABEL_34;
      }
      v27 = v24 + 2;
    }
    v26 = CaptureCallbackData((struct _CAPTUREBUF *)v9, v25, v27, v23);
LABEL_34:
    if ( v26 < 0 )
      goto LABEL_28;
    goto LABEL_14;
  }
  if ( a4 )
    v14 = *((_QWORD *)a4 + 1);
  else
    v14 = 0LL;
  *((_QWORD *)v9 + 10) = v14;
LABEL_14:
  *((_QWORD *)v9 + 8) = a5;
  *((_QWORD *)v9 + 9) = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
  v15 = *((_QWORD *)v11 + 64);
  v37 = *(_OWORD *)(v15 + 64);
  v32 = *(_QWORD *)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v28;
  if ( a1 )
    v16 = *a1;
  else
    v16 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 64LL) = v16;
  if ( a1 )
    v17 = *(_QWORD *)(a1[5] + 224);
  else
    v17 = 0LL;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 80LL) = v17;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(26LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v18 = KeUserModeCallback(26LL, v9, (unsigned int)*v9, &Src, &v29);
  EtwTraceEndCallback(26LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v19 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v19 + 64) = v37;
  *(_QWORD *)(v19 + 80) = v32;
  if ( v18 >= 0 && v29 == 24 )
  {
    v28 = 0LL;
    RtlCopyFromUser(&v28, Src, 8uLL);
    v20 = v28;
    BugCheckParameter3[2] = v28;
    goto LABEL_23;
  }
LABEL_28:
  v20 = 0LL;
LABEL_23:
  if ( v9 != &v38 && v9 != (int *)v40 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v34);
  }
  return (int *)v20;
}
