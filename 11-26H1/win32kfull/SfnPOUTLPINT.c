/*
 * XREFs of SfnPOUTLPINT @ 0x1402D73B0
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
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memmove @ 0x14034FF00 (memmove.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int8 *__fastcall SfnPOUTLPINT(
        __int64 *a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  unsigned __int8 *v11; // rbx
  __int64 v12; // rcx
  struct tagTHREADINFO *v13; // rax
  struct tagTHREADINFO *v14; // r15
  __int64 v15; // r14
  unsigned __int64 v16; // rsi
  unsigned __int8 *result; // rax
  __int64 v18; // rcx
  __int64 v19; // rcx
  struct tagTHREADINFO *v20; // rax
  void *v21; // r13
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // edi
  __int64 v26; // rcx
  void *v27; // rdi
  void *Src; // [rsp+30h] [rbp-358h] BYREF
  int v29; // [rsp+38h] [rbp-350h] BYREF
  unsigned __int8 *v30; // [rsp+40h] [rbp-348h]
  void *v31; // [rsp+78h] [rbp-310h] BYREF
  SIZE_T Length; // [rsp+80h] [rbp-308h] BYREF
  __int128 v33; // [rsp+88h] [rbp-300h] BYREF
  volatile void *Address; // [rsp+98h] [rbp-2F0h]
  __int128 v35; // [rsp+A0h] [rbp-2E8h] BYREF
  void (*v36)(void *); // [rsp+B0h] [rbp-2D8h]
  __int64 v37; // [rsp+B8h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+C0h] [rbp-2C8h] BYREF
  unsigned __int8 v39[96]; // [rsp+E0h] [rbp-2A8h] BYREF
  unsigned __int8 v40[512]; // [rsp+140h] [rbp-248h] BYREF

  Src = a4;
  memset_0(v39, 0, sizeof(v39));
  v11 = v39;
  v31 = 0LL;
  v29 = 0;
  v13 = PtiCurrent(v12);
  v14 = v13;
  if ( a1 )
    v15 = a1[5] - *((_QWORD *)v13 + 63);
  else
    v15 = 0LL;
  v16 = 4LL * (unsigned int)a3;
  if ( v16 > 0xFFFFFFFF )
    goto LABEL_27;
  Length = (unsigned int)v16;
  result = AllocCallbackMessage(96, 1u, (unsigned int)v16, v40, 0, 0x200uLL);
  v11 = result;
  v30 = result;
  if ( !result )
    return result;
  PtiCurrent(v18);
  v35 = 0LL;
  v36 = 0LL;
  if ( v11 != v39 && v11 != v40 )
  {
    v20 = PtiCurrent(v19);
    *(_QWORD *)&v35 = *((_QWORD *)v20 + 47);
    *((_QWORD *)v20 + 47) = &v35;
    *((_QWORD *)&v35 + 1) = v11;
    v36 = Win32FreePool;
  }
  *((_QWORD *)v11 + 5) = v15;
  *((_DWORD *)v11 + 12) = a2;
  *((_QWORD *)v11 + 7) = a3;
  *((_QWORD *)v11 + 8) = a5;
  *((_QWORD *)v11 + 9) = a6;
  if ( (a7 & 2) != 0 )
  {
    *((_DWORD *)v11 + 22) = v16;
    v21 = Src;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v11, (char *)Src, (unsigned int)v16, (void **)v11 + 10) < 0 )
      goto LABEL_27;
  }
  else
  {
    if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v11, v16, (void **)v11 + 10) < 0 )
      goto LABEL_27;
    *((_DWORD *)v11 + 22) = v16;
    v21 = Src;
  }
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v22 = *((_QWORD *)v14 + 64);
  v33 = *(_OWORD *)(v22 + 64);
  v37 = *(_QWORD *)(v22 + 80);
  *(_QWORD *)(*((_QWORD *)v14 + 64) + 72LL) = v15;
  if ( a1 )
    v23 = *a1;
  else
    v23 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 64) + 64LL) = v23;
  if ( a1 )
    v24 = *(_QWORD *)(a1[5] + 224);
  else
    v24 = 0LL;
  *(_QWORD *)(*((_QWORD *)v14 + 64) + 80LL) = v24;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&Src);
  EtwTraceBeginCallback(37LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v25 = KeUserModeCallback(37LL, v11, *(unsigned int *)v11, &v31, &v29);
  EtwTraceEndCallback(37LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&Src);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v26 = *((_QWORD *)v14 + 64);
  *(_OWORD *)(v26 + 64) = v33;
  *(_QWORD *)(v26 + 80) = v37;
  if ( v25 >= 0 && v29 == 24 )
  {
    Src = 0LL;
    RtlCopyFromUser(&Src, v31, 8uLL);
    v27 = Src;
    BugCheckParameter3[2] = (ULONG_PTR)Src;
    if ( (_DWORD)v16 && (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (a7 & 2) == 0 )
    {
      v33 = 0LL;
      Address = 0LL;
      RtlCopyFromUser(&v33, v31, 0x18uLL);
      ProbeForRead(Address, Length, 4u);
      memmove(v21, (const void *)Address, Length);
    }
    goto LABEL_28;
  }
LABEL_27:
  v27 = 0LL;
LABEL_28:
  if ( v11 != v39 && v11 != v40 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      Length = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &Length, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
  }
  return (unsigned __int8 *)v27;
}
