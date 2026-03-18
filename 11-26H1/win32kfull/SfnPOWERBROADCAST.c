/*
 * XREFs of SfnPOWERBROADCAST @ 0x140006240
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
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnPOWERBROADCAST(__int64 *a1, int a2, ULONG_PTR a3, _DWORD *a4, __int64 a5, __int64 a6)
{
  unsigned int v9; // ebx
  struct tagTHREADINFO *v10; // rax
  __int64 v11; // rdx
  struct tagTHREADINFO *v12; // r14
  _QWORD *v13; // r12
  __int64 v14; // r15
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // esi
  unsigned __int8 *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  ULONG_PTR v25; // rdi
  struct tagTHREADINFO *v27; // rax
  ULONG_PTR v28; // [rsp+30h] [rbp-328h] BYREF
  unsigned __int8 *v29; // [rsp+38h] [rbp-320h]
  int v30; // [rsp+40h] [rbp-318h] BYREF
  ULONG_PTR RegionSize[5]; // [rsp+48h] [rbp-310h] BYREF
  void *Src; // [rsp+70h] [rbp-2E8h] BYREF
  __int128 v33; // [rsp+78h] [rbp-2E0h] BYREF
  void (*v34)(void *); // [rsp+88h] [rbp-2D0h]
  ULONG_PTR BugCheckParameter3[4]; // [rsp+90h] [rbp-2C8h] BYREF
  __int128 v36; // [rsp+B0h] [rbp-2A8h]
  _DWORD v37[24]; // [rsp+C0h] [rbp-298h] BYREF
  unsigned __int8 v38[512]; // [rsp+120h] [rbp-238h] BYREF

  RegionSize[0] = a3;
  LODWORD(v28) = a2;
  v29 = (unsigned __int8 *)((unsigned __int16)a3 & 0x8000);
  v9 = 0;
  memset_0(v37, 0, 0x58uLL);
  Src = 0LL;
  v30 = 0;
  v10 = PtiCurrent();
  v12 = v10;
  v13 = a1 + 5;
  if ( a1 )
    v14 = *v13 - *((_QWORD *)v10 + 63);
  else
    v14 = 0LL;
  if ( a1 )
    v15 = *a1;
  else
    v15 = 0LL;
  LOBYTE(v11) = 1;
  if ( !HMValidateHandleNoSecure(v15, v11) )
    return 0LL;
  switch ( a3 )
  {
    case 0uLL:
      v17 = 1LL;
LABEL_51:
      v16 = 769LL;
      goto LABEL_14;
    case 2uLL:
      if ( (*(_BYTE *)(*v13 + 19LL) & 1) == 0 )
        return 0LL;
      v17 = 0LL;
      goto LABEL_51;
    case 4uLL:
      SetOrClrWF(0LL, a1, 769LL, 1LL);
      v16 = 770LL;
      v17 = 1LL;
      goto LABEL_14;
    case 6uLL:
    case 7uLL:
      SetOrClrWF(0LL, a1, 769LL, 1LL);
      v16 = 770LL;
      v17 = 0LL;
LABEL_14:
      SetOrClrWF(v17, a1, v16, 1LL);
      break;
    case 0x8013uLL:
      v9 = 1;
      break;
  }
  v18 = 0;
  if ( v29 )
  {
    if ( a4 )
    {
      if ( (unsigned __int8)MmIsKernelAddress(a4) )
      {
        v18 = a4[4] + 20;
        if ( a4[4] >= 0xFFFFFFEC )
          return 0LL;
      }
    }
  }
  if ( v9 )
  {
    v19 = (unsigned __int8 *)AllocCallbackMessage(0x58u, v9, v18, v38, 1, 0x200uLL);
    v29 = v19;
    if ( v19 )
      goto LABEL_18;
    return 0LL;
  }
  v19 = (unsigned __int8 *)v37;
  v29 = (unsigned __int8 *)v37;
  v37[0] = 88;
LABEL_18:
  PtiCurrent();
  v33 = 0LL;
  v34 = 0LL;
  if ( v19 != (unsigned __int8 *)v37 && v19 != v38 )
  {
    v27 = PtiCurrent();
    *(_QWORD *)&v33 = *((_QWORD *)v27 + 47);
    *((_QWORD *)v27 + 47) = &v33;
    *((_QWORD *)&v33 + 1) = v19;
    v34 = Win32FreePool;
  }
  *((_QWORD *)v19 + 5) = v14;
  *((_DWORD *)v19 + 12) = v28;
  *((_QWORD *)v19 + 7) = RegionSize[0];
  if ( v18 )
  {
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v19, a4, v18, (void **)v19 + 10) < 0 )
      goto LABEL_39;
  }
  else
  {
    *((_QWORD *)v19 + 10) = a4;
  }
  *((_QWORD *)v19 + 8) = a5;
  *((_QWORD *)v19 + 9) = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
  v20 = *((_QWORD *)v12 + 64);
  v36 = *(_OWORD *)(v20 + 64);
  v28 = *(_QWORD *)(v20 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v14;
  if ( a1 )
    v21 = *a1;
  else
    v21 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v21;
  if ( a1 )
    v22 = *(_QWORD *)(*v13 + 224LL);
  else
    v22 = 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v22;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)RegionSize);
  EtwTraceBeginCallback(29LL);
  *((_QWORD *)v19 + 2) = 0LL;
  v23 = KeUserModeCallback(29LL, v19, *(unsigned int *)v19, &Src, &v30);
  EtwTraceEndCallback(29LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v24 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v24 + 64) = v36;
  *(_QWORD *)(v24 + 80) = v28;
  if ( v23 >= 0 && v30 == 24 )
  {
    v28 = 0LL;
    RtlCopyFromUser(&v28, Src, 8uLL);
    v25 = v28;
    BugCheckParameter3[2] = v28;
    goto LABEL_30;
  }
LABEL_39:
  v25 = 0LL;
LABEL_30:
  if ( v19 != (unsigned __int8 *)v37 && v19 != v38 )
  {
    if ( *((_QWORD *)v19 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v19 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v33);
  }
  return v25;
}
