/*
 * XREFs of SfnTOUCHHITTESTING @ 0x140228D10
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

__int64 __fastcall SfnTOUCHHITTESTING(_QWORD *a1, int a2, __int64 a3, char *a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rcx
  unsigned __int8 *v15; // rbx
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  int v20; // edi
  __int64 v21; // rcx
  __int64 v22; // rdi
  struct tagTHREADINFO *v24; // rax
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
  v15 = AllocCallbackMessage(88, 1u, 48LL, v34, 1, 0x200uLL);
  v26[5] = v15;
  if ( !v15 )
    return 0LL;
  PtiCurrent(v14);
  v29 = 0LL;
  v30 = 0LL;
  if ( v15 != v33 && v15 != v34 )
  {
    v24 = PtiCurrent(v16);
    *(_QWORD *)&v29 = *((_QWORD *)v24 + 47);
    *((_QWORD *)v24 + 47) = &v29;
    *((_QWORD *)&v29 + 1) = v15;
    v30 = Win32FreePool;
  }
  *((_QWORD *)v15 + 5) = v13;
  *((_DWORD *)v15 + 12) = a2;
  *((_QWORD *)v15 + 7) = a3;
  if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v15, a4, 0x30uLL, (void **)v15 + 8) < 0 )
    goto LABEL_13;
  *((_QWORD *)v15 + 9) = a5;
  *((_QWORD *)v15 + 10) = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v17 = *((_QWORD *)v12 + 64);
  v32 = *(_OWORD *)(v17 + 64);
  RegionSize = *(_QWORD *)(v17 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v13;
  v18 = a1 ? *a1 : 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v18;
  v19 = a1 ? *(_QWORD *)(a1[5] + 224LL) : 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v19;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
  EtwTraceBeginCallback(115LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v20 = KeUserModeCallback(115LL, v15, *(unsigned int *)v15, &Src, &v25);
  EtwTraceEndCallback(115LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v26);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v21 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v21 + 64) = v32;
  *(_QWORD *)(v21 + 80) = RegionSize;
  if ( v20 < 0 )
    goto LABEL_13;
  if ( v25 == 24 )
  {
    v26[0] = 0LL;
    RtlCopyFromUser(v26, Src, 8uLL);
    v22 = v26[0];
    BugCheckParameter3[2] = v26[0];
  }
  else
  {
LABEL_13:
    v22 = 0LL;
  }
  if ( v15 != v33 && v15 != v34 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
  }
  return v22;
}
