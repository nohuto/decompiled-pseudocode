/*
 * XREFs of ?xxxMoveEventAbsolute@@YA?AW4_CommitMousePosAndMoveResult@@JJ_KPEAXPEAU_MOUSE_INPUT_DATA@@00W4_CommitMousePosAndMoveOptions@@PEAU_MousePacketPerf@@@Z @ 0x1401AE4CC
 * Callers:
 *     EditionCommitMousePosAndMove @ 0x1401AE430 (EditionCommitMousePosAndMove.c)
 * Callees:
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x14001EA30 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x14001F398 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x14002ABE8 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PhkFirstValid @ 0x14003954C (PhkFirstValid.c)
 *     ?xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z @ 0x14003BDE8 (-xxxCallHook2@@YA_JPEAUtagHOOK@@H_K_JW4CallHookHints@@@Z.c)
 *     SetWakeBit @ 0x140055960 (SetWakeBit.c)
 *     ?MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z @ 0x14006AD00 (-MovePointer@CursorApiRouter@@QEAAXPEAUHDEV__@@HHKPEAX_K@Z.c)
 *     TransitionCursorSuppressionState @ 0x1400F8F50 (TransitionCursorSuppressionState.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     RawInputRequestedForMouse @ 0x1401ABFA8 (RawInputRequestedForMouse.c)
 *     UsingPenCursors @ 0x1401B49C0 (UsingPenCursors.c)
 *     EditionPostRawMouseInputMessage @ 0x1402706C0 (EditionPostRawMouseInputMessage.c)
 *     ?RestoreMouseCursors@@YAXXZ @ 0x14028960C (-RestoreMouseCursors@@YAXXZ.c)
 *     Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline @ 0x14029D154 (Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxMoveEventAbsolute(
        int a1,
        int a2,
        __int64 a3,
        void *a4,
        __int64 a5,
        unsigned int a6,
        unsigned __int64 a7,
        char a8,
        LARGE_INTEGER *a9)
{
  unsigned int v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rcx
  int v14; // ebx
  __int64 v15; // rdx
  __int64 *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // ebx
  char v20; // r12
  unsigned int v21; // r14d
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 UserSessionState; // rax
  __int64 v27; // rcx
  struct tagTHREADINFO *v28; // rax
  __int64 *v29; // rcx
  __int64 v30; // r13
  __int64 v31; // rbx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v36; // ebx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  const struct tagPOINT *v43; // r12
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  LARGE_INTEGER v47; // rax
  LARGE_INTEGER *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rax
  unsigned int y; // ebx
  int x; // edi
  CursorApiRouter *v53; // rsi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int32 v64; // ebx
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 *Valid; // [rsp+48h] [rbp-79h] BYREF
  _DWORD v70[2]; // [rsp+50h] [rbp-71h] BYREF
  LARGE_INTEGER *v71; // [rsp+58h] [rbp-69h]
  __int64 *v72; // [rsp+60h] [rbp-61h] BYREF
  void *v73; // [rsp+68h] [rbp-59h]
  _WORD v74[2]; // [rsp+70h] [rbp-51h] BYREF
  int v75; // [rsp+74h] [rbp-4Dh]
  int v76; // [rsp+78h] [rbp-49h]
  int v77; // [rsp+7Ch] [rbp-45h]
  int v78; // [rsp+80h] [rbp-41h]
  int v79; // [rsp+84h] [rbp-3Dh]
  LARGE_INTEGER PerformanceCounter; // [rsp+88h] [rbp-39h]
  int v81; // [rsp+90h] [rbp-31h] BYREF
  int v82; // [rsp+94h] [rbp-2Dh]
  void *v83; // [rsp+98h] [rbp-29h]
  __int64 v84; // [rsp+A0h] [rbp-21h]
  __int64 v85; // [rsp+A8h] [rbp-19h]

  v73 = a4;
  v10 = 1;
  v71 = a9;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v13 = *(_QWORD *)(W32GetUserSessionState(v12, v11) + 18696);
  v14 = *(_DWORD *)(v13 + 712);
  v16 = *(__int64 **)(*(_QWORD *)(W32GetUserSessionState(v13, v15) + 18696) + 496LL);
  v18 = *v16;
  v19 = (*(_DWORD *)(*v16 + 16) | v14) & 0x8000;
  if ( !a5 || (v20 = 1, !(unsigned int)RawInputRequestedForMouse(v18, v17)) )
    v20 = 0;
  v21 = 2;
  if ( v19 || v20 )
  {
    EnterCrit(1LL, 0LL);
    if ( v19 )
    {
      InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v72, "LowLevelMouseMoveHook", 0LL);
      v81 = a1;
      v82 = a2;
      v83 = 0LL;
      v84 = a6;
      v85 = a3;
      UserSessionState = W32GetUserSessionState(v25, v24);
      Valid = (__int64 *)PhkFirstValid(*(_QWORD *)(UserSessionState + 18696), 14LL);
      if ( Valid )
      {
        v27 = (__int64)v71;
        v71[4] = PerformanceCounter;
        v28 = PtiCurrent(v27);
        v29 = Valid;
        v30 = (__int64)v28;
        v31 = *((_QWORD *)v28 + 196);
        *((_QWORD *)v28 + 196) = &v81;
        Valid = (__int64 *)xxxCallHook2((__int64)v29, 0LL, 512LL, (__int64)&v81, 1u);
        v32 = *(_QWORD *)(v30 + 480);
        *(_QWORD *)(v30 + 1568) = v31;
        if ( (*(_DWORD *)(*(_QWORD *)(v30 + 480) + 16LL) & *(_DWORD *)(v32 + 4) & 0xFFFFFDFF) != 0 )
        {
          v33 = *(unsigned int *)(*(_QWORD *)(v30 + 480) + 4LL);
          LODWORD(v33) = v33 & 0xFFFFFDFF;
          SetWakeBit(v30, v33);
        }
        v71[5] = KeQueryPerformanceCounter(0LL);
        if ( Valid )
        {
          InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v72);
          UserSessionSwitchLeaveCrit(v34);
          return 0LL;
        }
      }
      InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v72);
    }
    if ( v20 )
    {
      if ( (unsigned int)RawInputRequestedForMouse(v23, v22) )
      {
        v74[0] = *(_WORD *)(a5 + 2);
        v75 = *(_DWORD *)(a5 + 4);
        v76 = *(_DWORD *)(a5 + 8);
        v77 = *(_DWORD *)(a5 + 12);
        v78 = *(_DWORD *)(a5 + 16);
        v79 = *(_DWORD *)(a5 + 20);
        v83 = v73;
        v74[1] = 0;
        v82 = 0;
        v84 = 0LL;
        v81 = v73 != 0LL ? 2 : 0;
        if ( (unsigned int)EditionPostRawMouseInputMessage(0LL, a7, a6, &v81, v74) )
        {
          v10 = 9;
          *(_WORD *)a5 = -1;
        }
      }
    }
    UserSessionSwitchLeaveCrit(v23);
  }
  if ( (a8 & 2) != 0 )
  {
    v36 = 1;
    if ( *(_DWORD *)(W32GetUserSessionState(v18, v17) + 36372) == 2 )
    {
      EnterCrit(1LL, 0LL);
      if ( *(_DWORD *)(W32GetUserSessionState(v38, v37) + 36372) == 2 )
        TransitionCursorSuppressionState(8LL, 1LL);
      UserSessionSwitchLeaveCrit(v39);
    }
  }
  else
  {
    v36 = 1;
  }
  v40 = W32GetUserSessionState(v18, v17);
  v43 = (const struct tagPOINT *)(v40 + 19216);
  *(_DWORD *)(v40 + 19216) = a1;
  *(_DWORD *)(v40 + 19220) = a2;
  if ( (a8 & 4) != 0 )
  {
    v42 = 0LL;
    if ( !a5 || (*(_BYTE *)(a5 + 2) & 1) != 0 )
      v36 = 0;
  }
  else
  {
    v36 = 2;
  }
  v44 = W32GetUserSessionState(v42, v41);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _QWORD))CCursorClip::BoundPoint)(
    *(_QWORD *)(v44 + 36272),
    v70,
    *v43,
    v36,
    0,
    v43);
  if ( v70[0] == 2 )
  {
    v10 |= 2u;
  }
  else if ( v70[0] == 1 )
  {
    v10 |= 4u;
  }
  if ( (unsigned int)Feature_TouchpadHaptics__private_IsEnabledDeviceUsageNoInline() && v70[0] )
    SetMouseMoveBoundHitFlagsForMoveSize(v70[1]);
  if ( (a8 & 0x10) == 0 )
    v21 = (a8 & 1) != 0;
  if ( (a8 & 2) != 0 )
  {
    if ( (unsigned int)UsingPenCursors() )
      RestoreMouseCursors();
    InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&Valid, "MoveCursor", 0LL);
    EtwTraceGreMovePointerBegin(a6, (unsigned int)v43->x, (unsigned int)v43->y);
    v47 = KeQueryPerformanceCounter(0LL);
    v48 = v71;
    v71[2] = v47;
    v50 = W32GetUserSessionState(v48, v49);
    y = v43->y;
    x = v43->x;
    v53 = *(CursorApiRouter **)(v50 + 36336);
    v56 = W32GetUserSessionState(v55, v54);
    CursorApiRouter::MovePointer(v53, *(HDEV *)(*(_QWORD *)(v56 + 56968) + 40LL), x, y, v21, v73, a7);
    v71[3] = KeQueryPerformanceCounter(0LL);
    EtwTraceGreMovePointerEnd(a6, (unsigned int)v43->x, (unsigned int)v43->y);
    InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&Valid);
    v59 = W32GetUserSessionState(v58, v57);
    CCursorSizes::zzzUpdateGlobalCursorSize(*(CCursorSizes **)(v59 + 36376), v43, 0);
  }
  if ( !IsRemoteConnection(v46, v45) )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(v61, v60) + 16288) )
    {
      v64 = *(_DWORD *)(W32GetUserSessionState(v63, v62) + 16288) + 2;
      _InterlockedExchange((volatile __int32 *)(W32GetUserSessionState(v66, v65) + 16292), v64);
    }
  }
  return v10;
}
