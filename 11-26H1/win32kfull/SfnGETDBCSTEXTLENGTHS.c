/*
 * XREFs of SfnGETDBCSTEXTLENGTHS @ 0x140005B30
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
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     SetLastNtError @ 0x14005AAC4 (SetLastNtError.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140129D94 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

ULONG_PTR __fastcall SfnGETDBCSTEXTLENGTHS(
        _QWORD *a1,
        int a2,
        ULONG_PTR a3,
        unsigned __int8 *a4,
        __int64 a5,
        __int64 a6,
        char a7,
        __int64 a8)
{
  struct tagTHREADINFO *v10; // rax
  struct tagTHREADINFO *v11; // rsi
  _QWORD *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // r12
  __int64 v15; // rax
  int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdi
  int v21; // eax
  unsigned int v22; // edi
  struct tagTHREADINFO *v23; // rsi
  unsigned __int64 v24; // r8
  unsigned int v25; // r12d
  unsigned __int8 *v26; // rdi
  ULONG_PTR v27; // rax
  __int64 v28; // rax
  int v29; // r14d
  __int64 v30; // rcx
  ULONG_PTR v31; // rsi
  int v32; // ecx
  bool v33; // zf
  struct tagTHREADINFO *v34; // rax
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-3A8h] BYREF
  void *v36; // [rsp+38h] [rbp-3A0h] BYREF
  int v37; // [rsp+40h] [rbp-398h]
  unsigned __int8 *v38; // [rsp+48h] [rbp-390h]
  ULONG_PTR v39; // [rsp+50h] [rbp-388h]
  int v40; // [rsp+58h] [rbp-380h] BYREF
  int v41; // [rsp+5Ch] [rbp-37Ch] BYREF
  int v42; // [rsp+60h] [rbp-378h]
  unsigned int v43; // [rsp+64h] [rbp-374h]
  void *Src; // [rsp+A8h] [rbp-330h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+B0h] [rbp-328h] BYREF
  __int64 v46; // [rsp+C0h] [rbp-318h]
  __int128 v47; // [rsp+C8h] [rbp-310h] BYREF
  __int64 v48; // [rsp+D8h] [rbp-300h]
  __int128 v49; // [rsp+E0h] [rbp-2F8h] BYREF
  void (*v50)(void *); // [rsp+F0h] [rbp-2E8h]
  __int64 v51; // [rsp+F8h] [rbp-2E0h] BYREF
  int v52; // [rsp+100h] [rbp-2D8h]
  int v53; // [rsp+104h] [rbp-2D4h]
  ULONG_PTR v54; // [rsp+108h] [rbp-2D0h]
  __int64 v55; // [rsp+110h] [rbp-2C8h]
  __int64 v56; // [rsp+118h] [rbp-2C0h]
  unsigned __int8 v57[96]; // [rsp+140h] [rbp-298h] BYREF
  unsigned __int8 v58[512]; // [rsp+1A0h] [rbp-238h] BYREF

  v38 = a4;
  v39 = a3;
  v42 = (_DWORD)a4 != 0;
  v37 = a7 & 1;
  Src = 0LL;
  v40 = 0;
  v10 = PtiCurrent();
  v11 = v10;
  v12 = a1 + 5;
  if ( a1 )
    v13 = *v12 - *((_QWORD *)v10 + 63);
  else
    v13 = 0LL;
  if ( !a1 )
    return 0LL;
  v14 = *(_QWORD *)(*v12 + 120LL);
  v53 = 0;
  v51 = v13;
  v52 = a2;
  v54 = v39;
  v55 = a5;
  v56 = a6;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
  v15 = *((_QWORD *)v11 + 64);
  v47 = *(_OWORD *)(v15 + 64);
  v36 = *(void **)(v15 + 80);
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 72LL) = v13;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 64LL) = *a1;
  *(_QWORD *)(*((_QWORD *)v11 + 64) + 80LL) = *(_QWORD *)(*v12 + 224LL);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(6LL);
  v16 = KeUserModeCallback(6LL, &v51, 40LL, &Src, &v40);
  EtwTraceEndCallback(6LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v17 = *((_QWORD *)v11 + 64);
  *(_OWORD *)(v17 + 64) = v47;
  *(_QWORD *)(v17 + 80) = v36;
  if ( v16 < 0 || v40 != 24 )
    return 0LL;
  v36 = 0LL;
  RtlCopyFromUser(&v36, Src, 8uLL);
  v19 = (__int64)v36;
  RegionSize = (ULONG_PTR)v36;
  if ( a8 && (*(_DWORD *)(a8 + 84) & 5) != 0 || (a7 & 2) != 0 || (int)v36 <= 0 || v42 == v37 )
    return v19;
  if ( *(_QWORD *)(*v12 + 120LL) != v14 )
    goto LABEL_47;
  v21 = 0;
  if ( a2 != 14 )
  {
    LOBYTE(v18) = 1;
    if ( HMValidateHandleNoSecure(*a1, v18) )
    {
      v32 = *(_DWORD *)(*v12 + 28LL);
      if ( a2 == 394 )
      {
        v33 = (v32 & 0x40) == 0;
LABEL_42:
        if ( v33 && (v32 & 0x30) != 0 )
        {
          v21 = 1;
          v19 = 8LL;
        }
        else
        {
          v21 = 0;
        }
        goto LABEL_16;
      }
      if ( a2 == 329 )
      {
        v33 = (*(_DWORD *)(*v12 + 28LL) & 0x200) == 0;
        goto LABEL_42;
      }
    }
    return 0LL;
  }
LABEL_16:
  if ( v21 )
    return v19;
  if ( (_InterlockedCompareExchange((volatile signed __int32 *)PtiCurrent() + 130, 0, 0) & 0x4000000) != 0 )
  {
    if ( (_DWORD)v38 )
LABEL_47:
      v19 *= 2LL;
    return v19;
  }
  v22 = v19 + 1;
  v43 = v22;
  memset_0(v57, 0, sizeof(v57));
  v36 = 0LL;
  v41 = 0;
  v23 = PtiCurrent();
  RegionSize = *v12 - *((_QWORD *)v23 + 63);
  _InterlockedOr((volatile signed __int32 *)PtiCurrent() + 130, 0x4000000u);
  v24 = 2 * v22;
  if ( v37 )
    v24 = v22;
  v25 = v24;
  v26 = (unsigned __int8 *)AllocCallbackMessage(0x60u, 1u, v24, v58, 0, 0x200uLL);
  v38 = v26;
  if ( !v26 )
    return 0LL;
  PtiCurrent();
  v49 = 0LL;
  v50 = 0LL;
  if ( v26 != v57 && v26 != v58 )
  {
    v34 = PtiCurrent();
    *(_QWORD *)&v49 = *((_QWORD *)v34 + 47);
    *((_QWORD *)v34 + 47) = &v49;
    *((_QWORD *)&v49 + 1) = v26;
    v50 = Win32FreePool;
  }
  *((_QWORD *)v26 + 5) = RegionSize;
  *((_DWORD *)v26 + 12) = a2 - 1;
  v27 = v43;
  if ( a2 != 14 )
    v27 = v39;
  *((_QWORD *)v26 + 7) = v27;
  *((_QWORD *)v26 + 8) = a5;
  *((_QWORD *)v26 + 9) = a6;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v26, v25, (void **)v26 + 10) < 0 )
    goto LABEL_50;
  *((_DWORD *)v26 + 22) = v25;
  Win32HMThreadLockBase<tagMENU,1,0>::Win32HMThreadLockBase<tagMENU,1,0>(BugCheckParameter3, a1);
  v28 = *((_QWORD *)v23 + 64);
  v47 = *(_OWORD *)(v28 + 64);
  v39 = *(_QWORD *)(v28 + 80);
  *(_QWORD *)(*((_QWORD *)v23 + 64) + 72LL) = RegionSize;
  *(_QWORD *)(*((_QWORD *)v23 + 64) + 64LL) = *a1;
  *(_QWORD *)(*((_QWORD *)v23 + 64) + 80LL) = *(_QWORD *)(*v12 + 224LL);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  EtwTraceBeginCallback(35LL);
  *((_QWORD *)v26 + 2) = 0LL;
  v29 = KeUserModeCallback(35LL, v26, *(unsigned int *)v26, &v36, &v41);
  EtwTraceEndCallback(35LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&RegionSize);
  Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3);
  v30 = *((_QWORD *)v23 + 64);
  *(_OWORD *)(v30 + 64) = v47;
  *(_QWORD *)(v30 + 80) = v39;
  if ( v29 < 0 )
    goto LABEL_50;
  if ( v41 == 24 )
  {
    RegionSize = 0LL;
    RtlCopyFromUser(&RegionSize, v36, 8uLL);
    v31 = RegionSize;
    v39 = RegionSize;
    if ( (!a8 || (*(_DWORD *)(a8 + 84) & 5) == 0) && (int)RegionSize > 0 )
    {
      v47 = 0LL;
      v48 = 0LL;
      RtlCopyFromUser(&v47, v36, 0x18uLL);
      *(_OWORD *)BugCheckParameter3 = v47;
      v46 = v48;
      v31 = CalcOutputStringSize((struct _CALLBACKSTATUS *)BugCheckParameter3, v31, v42, v37);
      v39 = v31;
    }
    _InterlockedAnd((volatile signed __int32 *)PtiCurrent() + 130, 0xFBFFFFFF);
  }
  else
  {
LABEL_50:
    v31 = 0LL;
  }
  if ( v26 != v57 && v26 != v58 )
  {
    if ( *((_QWORD *)v26 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v26 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v49);
  }
  return v31;
}
