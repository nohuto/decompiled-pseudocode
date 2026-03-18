/*
 * XREFs of SfnINCNTOUTSTRING @ 0x14020E220
 * Callers:
 *     ?xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400245B8 (-xxxReceiveMessage@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     xxxDispatchMessage @ 0x140035320 (xxxDispatchMessage.c)
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxSendMessageCallback @ 0x140051930 (xxxSendMessageCallback.c)
 *     ?xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z @ 0x140094600 (-xxxWrapCallWindowProc@@YA_JPEAUtagWND@@I_K_J1@Z.c)
 *     xxxDefWindowProc @ 0x14012D860 (xxxDefWindowProc.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ??0?$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z @ 0x14000E1F8 (--0-$Win32HMThreadLockBase@UtagMENU@@$00$0A@@@QEAA@PEAUtagMENU@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x140039F3C (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140129D94 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnINCNTOUTSTRING(
        __int64 *a1,
        int a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  __int64 v10; // rcx
  struct tagTHREADINFO *v11; // rax
  struct tagTHREADINFO *v12; // r12
  __int64 v13; // r15
  unsigned int v14; // eax
  unsigned __int64 v15; // rsi
  __int64 v16; // rcx
  unsigned __int8 *v17; // rdi
  __int64 v18; // rcx
  __int16 v19; // dx
  __int16 v20; // ax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v24; // edi
  __int64 v25; // rcx
  ULONG_PTR v26; // rdi
  __int64 v27; // rcx
  __int64 v28; // rcx
  unsigned __int8 *v29; // rcx
  struct tagTHREADINFO *v30; // rax
  struct tagTHREADINFO *v32; // rax
  _WORD *v33; // rax
  unsigned __int16 v35; // [rsp+30h] [rbp-368h]
  unsigned int v36[2]; // [rsp+38h] [rbp-360h] BYREF
  int v37; // [rsp+40h] [rbp-358h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-350h] BYREF
  int v39; // [rsp+50h] [rbp-348h]
  void *Src; // [rsp+78h] [rbp-320h] BYREF
  unsigned __int8 *v41; // [rsp+80h] [rbp-318h]
  __int128 v42; // [rsp+88h] [rbp-310h] BYREF
  void (*v43)(void *); // [rsp+98h] [rbp-300h]
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A0h] [rbp-2F8h] BYREF
  __int64 v45; // [rsp+B0h] [rbp-2E8h]
  __int128 v46; // [rsp+B8h] [rbp-2E0h] BYREF
  __int64 v47; // [rsp+C8h] [rbp-2D0h]
  unsigned __int8 v48[112]; // [rsp+F0h] [rbp-2A8h] BYREF
  unsigned __int8 v49[512]; // [rsp+160h] [rbp-238h] BYREF

  *(_QWORD *)v36 = a3;
  v39 = a7 & 1;
  memset_0(v48, 0, 0x68uLL);
  v41 = v48;
  Src = 0LL;
  v37 = 0;
  v11 = PtiCurrent(v10);
  v12 = v11;
  if ( a1 )
    v13 = a1[5] - *((_QWORD *)v11 + 63);
  else
    v13 = 0LL;
  v14 = *(_DWORD *)(a4 + 4) & 0x7FFFFFFF;
  v15 = v14 + 2;
  if ( (unsigned int)v15 < v14 )
    goto LABEL_26;
  if ( *(int *)(a4 + 4) < 0 && (a7 & 1) == 0 )
  {
    v15 *= 2LL;
    if ( v15 > 0xFFFFFFFF )
      goto LABEL_26;
  }
  v17 = AllocCallbackMessage(104, 1u, (unsigned int)v15, v49, 0, 0x200uLL);
  v41 = v17;
  if ( !v17 )
    return 0LL;
  PtiCurrent(v16);
  v42 = 0LL;
  v43 = 0LL;
  if ( v17 != v48 && v17 != v49 )
  {
    v32 = PtiCurrent(v18);
    *(_QWORD *)&v42 = *((_QWORD *)v32 + 47);
    *((_QWORD *)v32 + 47) = &v42;
    *((_QWORD *)&v42 + 1) = v17;
    v43 = Win32FreePool;
  }
  *((_QWORD *)v17 + 5) = v13;
  *((_DWORD *)v17 + 12) = a2;
  *((_QWORD *)v17 + 7) = *(_QWORD *)v36;
  v19 = *(_WORD *)(a4 + 4) >> 1;
  if ( *(int *)(a4 + 4) < 0 )
    v19 = *(_WORD *)(a4 + 4);
  v35 = v19;
  v20 = -1;
  if ( v19 != -1 )
    v20 = v19;
  *((_WORD *)v17 + 40) = v20;
  *((_QWORD *)v17 + 8) = a5;
  *((_QWORD *)v17 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v17, v15, (void **)v17 + 11) < 0 )
    goto LABEL_26;
  *((_DWORD *)v17 + 24) = v15;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, (__int64)a1);
  v21 = *((_QWORD *)v12 + 64);
  v46 = *(_OWORD *)(v21 + 64);
  RegionSize = *(_QWORD *)(v21 + 80);
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 72LL) = v13;
  v22 = 0LL;
  if ( a1 )
    v22 = *a1;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 64LL) = v22;
  v23 = a1 ? *(_QWORD *)(a1[5] + 224) : 0LL;
  *(_QWORD *)(*((_QWORD *)v12 + 64) + 80LL) = v23;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v36);
  EtwTraceBeginCallback(7LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v24 = KeUserModeCallback(7LL, v17, *(unsigned int *)v17, &Src, &v37);
  EtwTraceEndCallback(7LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v36);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((__int64 *)BugCheckParameter3);
  v25 = *((_QWORD *)v12 + 64);
  *(_OWORD *)(v25 + 64) = v46;
  *(_QWORD *)(v25 + 80) = RegionSize;
  if ( v24 < 0 || v37 != 24 )
    goto LABEL_26;
  *(_QWORD *)v36 = 0LL;
  RtlCopyFromUser(v36, Src, 8uLL);
  v26 = *(_QWORD *)v36;
  RegionSize = *(_QWORD *)v36;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 )
    goto LABEL_27;
  if ( !*(_QWORD *)v36 )
  {
    v33 = *(_WORD **)(a4 + 8);
    if ( *(int *)(a4 + 4) >= 0 )
      *v33 = 0;
    else
      *(_BYTE *)v33 = 0;
    goto LABEL_27;
  }
  v46 = 0LL;
  v47 = 0LL;
  RtlCopyFromUser(&v46, Src, 0x18uLL);
  *(_OWORD *)BugCheckParameter3 = v46;
  v45 = v47;
  v28 = *((_QWORD *)PtiCurrent(v27) + 68);
  if ( v28 && (*(_DWORD *)(v28 + 84) & 1) != 0 && *(_QWORD *)(v28 + 96) == a4 )
  {
LABEL_26:
    v26 = 0LL;
  }
  else
  {
    v26 = (unsigned int)CalcOutputStringSize(
                          (struct _CALLBACKSTATUS *)BugCheckParameter3,
                          v26,
                          *(_DWORD *)(a4 + 4) >> 31,
                          v39);
    RegionSize = v26;
    CopyOutputString((volatile void **)BugCheckParameter3, (struct _LARGE_STRING *)a4, v35, v39);
  }
LABEL_27:
  if ( v41 != v48 )
  {
    v29 = v49;
    if ( v41 != v49 )
    {
      if ( *((_QWORD *)v41 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v41 + 4, &RegionSize, 0x8000u);
      }
      v30 = PtiCurrent((__int64)v29);
      *((_QWORD *)v30 + 47) = v42;
      ((void (__fastcall *)(_QWORD))v43)(*((_QWORD *)&v42 + 1));
    }
  }
  return v26;
}
