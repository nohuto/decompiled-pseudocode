/*
 * XREFs of SfnINPGESTURENOTIFYSTRUCT @ 0x1402486B0
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

unsigned __int8 *__fastcall SfnINPGESTURENOTIFYSTRUCT(
        _QWORD *a1,
        unsigned int a2,
        __int64 a3,
        char *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // rsi
  __int64 v13; // r14
  unsigned __int8 *result; // rax
  __int64 v15; // rcx
  unsigned __int8 *v16; // rbx
  __int64 v17; // rcx
  struct tagTHREADINFO *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // edi
  __int64 v23; // rcx
  __int64 v24; // rdi
  int v25; // [rsp+30h] [rbp-328h] BYREF
  _QWORD v26[6]; // [rsp+38h] [rbp-320h] BYREF
  ULONG_PTR RegionSize; // [rsp+68h] [rbp-2F0h] BYREF
  void *Src; // [rsp+70h] [rbp-2E8h] BYREF
  __int128 v29; // [rsp+78h] [rbp-2E0h] BYREF
  void (*v30)(void *); // [rsp+88h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+90h] [rbp-2C8h] BYREF
  __int128 v32; // [rsp+B0h] [rbp-2A8h]
  unsigned __int8 v33[96]; // [rsp+C0h] [rbp-298h] BYREF
  unsigned __int8 v34[512]; // [rsp+120h] [rbp-238h] BYREF

  memset_0(v33, 0, 0x58uLL);
  Src = 0LL;
  v25 = 0;
  v11 = PtiCurrent(v10);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v13 = 0LL;
  result = AllocCallbackMessage(88, 1u, *(unsigned int *)a4, v34, 1, 0x200uLL);
  v16 = result;
  v26[5] = result;
  if ( result )
  {
    PtiCurrent(v15);
    v29 = 0LL;
    v30 = 0LL;
    if ( v16 != v33 && v16 != v34 )
    {
      v18 = PtiCurrent(v17);
      *(_QWORD *)&v29 = *((_QWORD *)v18 + 47);
      *((_QWORD *)v18 + 47) = &v29;
      *((_QWORD *)&v29 + 1) = v16;
      v30 = Win32FreePool;
    }
    *((_QWORD *)v16 + 5) = v13;
    *((_DWORD *)v16 + 12) = a2;
    *((_QWORD *)v16 + 7) = a3;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v16, a4, *(unsigned int *)a4, (void **)v16 + 8) < 0 )
      goto LABEL_18;
    *((_QWORD *)v16 + 9) = a5;
    *((_QWORD *)v16 + 10) = a6;
    Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
    v19 = *((_QWORD *)v12 + 64);
    v32 = *(_OWORD *)(v19 + 64);
    RegionSize = *(_QWORD *)(v19 + 80);
    *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v13;
    v20 = a1 ? *a1 : 0LL;
    *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v20;
    v21 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
    *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v21;
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
    EtwTraceBeginCallback(114LL);
    *((_QWORD *)v16 + 2) = 0LL;
    v22 = KeUserModeCallback(114LL, v16, *(unsigned int *)v16, &Src, &v25);
    EtwTraceEndCallback(114LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
    v23 = *((_QWORD *)v12 + 64);
    *(_OWORD *)(v23 + 64) = v32;
    *(_QWORD *)(v23 + 80) = RegionSize;
    if ( v22 < 0 )
      goto LABEL_18;
    if ( v25 == 24 )
    {
      v26[0] = 0LL;
      RtlCopyFromUser(v26, Src, 8uLL);
      v24 = v26[0];
      BugCheckParameter3[2] = v26[0];
    }
    else
    {
LABEL_18:
      v24 = 0LL;
    }
    if ( v16 != v33 && v16 != v34 )
    {
      if ( *((_QWORD *)v16 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v16 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
    }
    return (unsigned __int8 *)v24;
  }
  return result;
}
