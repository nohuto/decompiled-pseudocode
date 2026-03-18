/*
 * XREFs of SfnCOPYGLOBALDATA @ 0x1402458F0
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
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
 */

unsigned __int8 *__fastcall SfnCOPYGLOBALDATA(_QWORD *a1, __int64 a2, __int64 a3, char *a4)
{
  struct tagTHREADINFO *v7; // rax
  struct tagTHREADINFO *v8; // r14
  __int64 v9; // rsi
  unsigned __int8 *result; // rax
  __int64 v11; // rcx
  unsigned __int8 *v12; // rbx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rdi
  int v21; // [rsp+30h] [rbp-318h] BYREF
  _QWORD v22[6]; // [rsp+38h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-2E0h] BYREF
  void *Src; // [rsp+70h] [rbp-2D8h] BYREF
  __int128 v25; // [rsp+78h] [rbp-2D0h] BYREF
  void (*v26)(void *); // [rsp+88h] [rbp-2C0h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+90h] [rbp-2B8h] BYREF
  __int128 v28; // [rsp+B0h] [rbp-298h]
  _OWORD v29[3]; // [rsp+C0h] [rbp-288h] BYREF
  __int64 v30; // [rsp+F0h] [rbp-258h]
  unsigned __int8 v31[512]; // [rsp+100h] [rbp-248h] BYREF

  memset(v29, 0, sizeof(v29));
  v30 = 0LL;
  Src = 0LL;
  v21 = 0;
  v7 = PtiCurrent((__int64)a1);
  v8 = v7;
  if ( a1 )
    v9 = a1[5] - *((_QWORD *)v7 + 63);
  else
    v9 = 0LL;
  result = AllocCallbackMessage(56, 1u, a3, v31, 1, 0x200uLL);
  v12 = result;
  v22[5] = result;
  if ( result )
  {
    PtiCurrent(v11);
    v25 = 0LL;
    v26 = 0LL;
    if ( v12 != (unsigned __int8 *)v29 && v12 != v31 )
    {
      v14 = PtiCurrent(v13);
      *(_QWORD *)&v25 = *((_QWORD *)v14 + 47);
      *((_QWORD *)v14 + 47) = &v25;
      *((_QWORD *)&v25 + 1) = v12;
      v26 = Win32FreePool;
    }
    if ( !a4 )
      goto LABEL_19;
    *((_DWORD *)v12 + 10) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v12, a4, (unsigned int)a3, (void **)v12 + 6) < 0 )
      goto LABEL_19;
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
    v15 = *((_QWORD *)v8 + 64);
    v28 = *(_OWORD *)(v15 + 64);
    RegionSize = *(_QWORD *)(v15 + 80);
    *(_QWORD *)(*((_QWORD *)v8 + 64) + 72LL) = v9;
    v16 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 64) + 64LL) = v16;
    v17 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v8 + 64) + 80LL) = v17;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
    EtwTraceBeginCallback(1LL);
    *((_QWORD *)v12 + 2) = 0LL;
    v18 = KeUserModeCallback(1LL, v12, *(unsigned int *)v12, &Src, &v21);
    EtwTraceEndCallback(1LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v22);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    v19 = *((_QWORD *)v8 + 64);
    *(_OWORD *)(v19 + 64) = v28;
    *(_QWORD *)(v19 + 80) = RegionSize;
    if ( v18 < 0 )
      goto LABEL_19;
    if ( v21 == 24 )
    {
      v22[0] = 0LL;
      RtlCopyFromUser(v22, Src, 8uLL);
      v20 = v22[0];
      BugCheckParameter3[2] = v22[0];
    }
    else
    {
LABEL_19:
      v20 = 0LL;
    }
    if ( v12 != (unsigned __int8 *)v29 && v12 != v31 )
    {
      if ( *((_QWORD *)v12 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v12 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v25);
    }
    return (unsigned __int8 *)v20;
  }
  return result;
}
