/*
 * XREFs of SfnPOPTINLPUINT @ 0x1402D7010
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
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

unsigned __int8 *__fastcall SfnPOPTINLPUINT(__int64 *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  int *v9; // rbx
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r15
  __int64 v13; // rsi
  unsigned int v14; // edx
  unsigned __int64 v15; // r14
  unsigned __int8 *result; // rax
  __int64 v17; // rcx
  __int64 v18; // rcx
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  ULONG_PTR v26; // [rsp+30h] [rbp-338h] BYREF
  int v27; // [rsp+38h] [rbp-330h] BYREF
  int *v28; // [rsp+40h] [rbp-328h]
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-300h] BYREF
  void *Src; // [rsp+70h] [rbp-2F8h] BYREF
  __int128 v31; // [rsp+78h] [rbp-2F0h] BYREF
  void (*v32)(void *); // [rsp+88h] [rbp-2E0h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+90h] [rbp-2D8h] BYREF
  __int128 v34; // [rsp+B0h] [rbp-2B8h]
  int v35; // [rsp+C0h] [rbp-2A8h] BYREF
  _BYTE v36[92]; // [rsp+C4h] [rbp-2A4h] BYREF
  unsigned __int8 v37[512]; // [rsp+120h] [rbp-248h] BYREF

  LODWORD(v26) = a2;
  memset_0(&v35, 0, 0x58uLL);
  v9 = &v35;
  Src = 0LL;
  v27 = 0;
  v11 = PtiCurrent(v10);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v13 = 0LL;
  if ( a4 )
  {
    v14 = 1;
    v15 = 4LL * (unsigned int)a3;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_28;
  }
  else
  {
    LODWORD(v15) = 0;
    v14 = 0;
  }
  if ( v14 )
  {
    result = AllocCallbackMessage(88, v14, (unsigned int)v15, v37, 1, 0x200uLL);
    v9 = (int *)result;
    v28 = (int *)result;
    if ( !result )
      return result;
  }
  else
  {
    v9 = &v35;
    v28 = &v35;
    memset_0(v36, 0, 0x54uLL);
    v35 = 88;
  }
  PtiCurrent(v17);
  v31 = 0LL;
  v32 = 0LL;
  if ( v9 != &v35 && v9 != (int *)v37 )
  {
    v19 = PtiCurrent(v18);
    *(_QWORD *)&v31 = *((_QWORD *)v19 + 47);
    *((_QWORD *)v19 + 47) = &v31;
    *((_QWORD *)&v31 + 1) = v9;
    v32 = Win32FreePool;
  }
  *((_QWORD *)v9 + 5) = v13;
  v9[12] = v26;
  *((_QWORD *)v9 + 7) = a3;
  if ( a4 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v9, a4, (unsigned int)v15, (void **)v9 + 8) < 0 )
      goto LABEL_28;
  }
  else
  {
    *((_QWORD *)v9 + 8) = 0LL;
  }
  *((_QWORD *)v9 + 9) = a5;
  *((_QWORD *)v9 + 10) = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v20 = *((_QWORD *)v12 + 64);
  v34 = *(_OWORD *)(v20 + 64);
  RegionSize = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v13;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(a1[5] + 224);
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v22;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v26);
  EtwTraceBeginCallback(36LL);
  *((_QWORD *)v9 + 2) = 0LL;
  v23 = KeUserModeCallback(36LL, v9, (unsigned int)*v9, &Src, &v27);
  EtwTraceEndCallback(36LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v26);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v24 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v24 + 64) = v34;
  *(_QWORD *)(v24 + 80) = RegionSize;
  if ( v23 >= 0 && v27 == 24 )
  {
    v26 = 0LL;
    RtlCopyFromUser(&v26, Src, 8uLL);
    v25 = v26;
    BugCheckParameter3[2] = v26;
    goto LABEL_29;
  }
LABEL_28:
  v25 = 0LL;
LABEL_29:
  if ( v9 != &v35 && v9 != (int *)v37 )
  {
    if ( *((_QWORD *)v9 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v9 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v31);
  }
  return (unsigned __int8 *)v25;
}
