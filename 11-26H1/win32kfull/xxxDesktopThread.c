/*
 * XREFs of xxxDesktopThread @ 0x14020A3B0
 * Callers:
 *     <none>
 * Callees:
 *     xxxDesktopThreadWaiter @ 0x14002565C (xxxDesktopThreadWaiter.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x140057734 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     IsRemoteConnection @ 0x1400F99E0 (IsRemoteConnection.c)
 *     IsCurrentSessionServiceSession @ 0x1400FC60C (IsCurrentSessionServiceSession.c)
 *     ??_GLegacyInputDispatcher@@QEAAPEAXI@Z @ 0x14020AD6C (--_GLegacyInputDispatcher@@QEAAPEAXI@Z.c)
 *     ?IsAnyThreadAttached@tagQ@@QEBA_NXZ @ 0x140237ED4 (-IsAnyThreadAttached@tagQ@@QEBA_NXZ.c)
 *     ?xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z @ 0x14025CD50 (-xxxCleanupMotherDesktopWindow@@YAXPEAUtagTERMINAL@@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _lambda_a483737acf4a7731ac5a5433698ef540_::operator_void_(__cdecl_)(void) @ 0x1402A4D44 (_lambda_a483737acf4a7731ac5a5433698ef540_--operator_void_(__cdecl_)(void).c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  char v1; // bl
  int v3; // esi
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // r12d
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r13d
  const WCHAR *v10; // rdx
  const wchar_t *v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct tagTHREADINFO *v14; // rax
  struct tagTHREADINFO *v15; // r15
  tagQ *v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rcx
  void *v21; // r13
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned int v28; // r13d
  __int64 v29; // rcx
  unsigned int v30; // ebx
  unsigned int v31; // r12d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rax
  LegacyInputDispatcher *v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdx
  __int64 v38; // rcx
  _QWORD *v39; // rcx
  unsigned int v40; // edx
  LegacyInputDispatcher *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  LegacyInputDispatcher *v44; // rcx
  __int64 v45; // rax
  struct _KEVENT *v46; // rcx
  bool v47; // zf
  void *v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rcx
  __int64 v51; // rbx
  __int64 KernelEvent; // rbx
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 UserSessionState; // rbx
  __int64 v60; // rdx
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rax
  __int64 v77; // rbx
  signed __int32 v78[8]; // [rsp+8h] [rbp-89h] BYREF
  char v79; // [rsp+38h] [rbp-59h]
  int v80; // [rsp+3Ch] [rbp-55h]
  unsigned int v81; // [rsp+40h] [rbp-51h]
  LegacyInputDispatcher *v82; // [rsp+48h] [rbp-49h] BYREF
  int ProcessInformation; // [rsp+50h] [rbp-41h] BYREF
  int v84; // [rsp+54h] [rbp-3Dh]
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  __int64 v86; // [rsp+68h] [rbp-29h] BYREF
  _QWORD v87[9]; // [rsp+70h] [rbp-21h]

  v1 = 0;
  v81 = 0;
  v79 = 0;
  v82 = 0LL;
  DestinationString = 0LL;
  memset_0(&v86, 0, 0x50uLL);
  v3 = *(_DWORD *)a1 & 2;
  v6 = *(_DWORD *)(W32GetUserSessionState(v5, v4) + 19136);
  v84 = v6;
  SetThreadBasePriority(KeGetCurrentThread(), v3 != 0 ? 12 : 16);
  v9 = 1;
  if ( !v3 )
  {
    if ( *(_QWORD *)(W32GetUserSessionState(v8, v7) + 63184) )
    {
      v80 = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 849LL);
    }
    KernelEvent = CreateKernelEvent(1LL);
    *(_QWORD *)(W32GetUserSessionState(v54, v53) + 63184) = KernelEvent;
    v1 = 0;
  }
  v10 = L"IO_DT";
  if ( v3 )
    v10 = L"NOIO_DT";
  RtlInitUnicodeString(&DestinationString, v10);
  v11 = L"Win32k Desktop Thread (IO_DT)";
  if ( v3 )
    v11 = L"Win32k Desktop Thread (NOIO_DT)";
  SetThreadName(-2LL, v11);
  if ( (int)InitSystemThread(&DestinationString) >= 0 && (v3 || *(_QWORD *)(W32GetUserSessionState(v13, v12) + 63184)) )
  {
    v14 = PtiCurrent(v13);
    *((_QWORD *)a1 + 2) = v14;
    v15 = v14;
    v16 = (tagQ *)*((_QWORD *)v14 + 58);
    *((_QWORD *)a1 + 3) = v16;
    ++*((_DWORD *)v16 + 110);
    *((_QWORD *)v14 + 62) = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 62912);
    *((_QWORD *)v15 + 81) = 0LL;
    if ( (int)LegacyInputDispatcher::Create(&v82) < 0 )
    {
      *(_DWORD *)a1 |= 8u;
      _InterlockedOr(v78, 0);
      KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      if ( !v3 )
      {
LABEL_64:
        UserSessionState = W32GetUserSessionState(v58, v57);
        Win32FreePool(*(void **)(UserSessionState + 63184));
        *(_QWORD *)(UserSessionState + 63184) = 0LL;
      }
    }
    else
    {
      if ( !v3 )
      {
        v61 = *(_QWORD *)(W32GetUserSessionState(v20, v19) + 36344);
        v86 = *(_QWORD *)(v61 + 72);
        v87[0] = OnPointerCursorOperation;
        if ( !v6 )
        {
          v9 = 2;
          v61 = *(_QWORD *)(W32GetUserSessionState(v61, v60) + 16816);
          v87[2] = OnPTPMouseOperation;
          v87[1] = v61;
        }
        v87[2 * v9 - 1] = *(_QWORD *)(W32GetUserSessionState(v61, v60) + 63184);
        v87[2 * v9] = lambda_a483737acf4a7731ac5a5433698ef540_::operator_void____cdecl___void_();
        v81 = v9 + 1;
        v1 = 0;
        if ( IsCurrentSessionServiceSession() )
        {
          v74 = W32GetUserSessionState(v63, v62);
          CBaseInput::InitializeSensor(*(CBaseInput **)(v74 + 3096));
          v79 = 1;
        }
        else if ( !v6 )
        {
          v79 = 1;
          v64 = W32GetUserSessionState(v63, v62);
          if ( (int)CBaseInput::InitializeSensor(*(CBaseInput **)(v64 + 3096)) >= 0 )
          {
            if ( IsRemoteConnection(v66, v65) )
            {
              EnterCrit(1LL, 0LL);
              v71 = W32GetUserSessionState(v70, v69);
              CBaseInput::HandleTSRequest(*(_QWORD *)(v71 + 3096), 0LL);
              UserSessionSwitchLeaveCrit(v72);
            }
            v73 = W32GetUserSessionState(v68, v67);
            CBaseInput::Read(*(CBaseInput **)(v73 + 3096));
          }
        }
      }
      EnterCrit(1LL, 0LL);
      *(_DWORD *)a1 |= 4u;
      KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
      v21 = (void *)*((_QWORD *)a1 + 7);
      ObReferenceObjectByPointer(v21, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
      v24 = W32GetUserSessionState(v23, v22);
      if ( (unsigned __int8)ExIsFastResourceHeldExclusive(*(_QWORD *)(v24 + 16)) == 1 )
      {
        v1 = 1;
        LeaveMitRitHazardCrit();
      }
      UserSessionSwitchLeaveCrit(v25);
      KeWaitForSingleObject(v21, WrUserRequest, 0, 0, 0LL);
      EnterCrit(1LL, 0LL);
      if ( v1 )
        EnterMitRitHazardCrit();
      ObfDereferenceObject(v21);
      if ( (*(_DWORD *)a1 & 8) != 0 )
      {
        _InterlockedOr(v78, 0);
        if ( *((_QWORD *)a1 + 1) )
          xxxCleanupMotherDesktopWindow(a1);
        v46 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
        if ( v46 )
          KeSetEvent(v46, 1, 0);
        v47 = (*((_DWORD *)v16 + 110))-- == 1;
        if ( v47 && !tagQ::IsAnyThreadAttached(v16) && (*((_DWORD *)v16 + 109) & 0x4000000) != 0 )
        {
          v80 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1027LL);
        }
        v48 = (void *)*((_QWORD *)a1 + 7);
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *(_DWORD *)a1 = 0;
        if ( v48 )
        {
          ObfDereferenceObject(v48);
          *((_QWORD *)a1 + 7) = 0LL;
        }
        if ( v79 )
          CleanupSensorExplicitly(0LL);
        v44 = v82;
        if ( v82 )
          LegacyInputDispatcher::`scalar deleting destructor'(v82, v26);
        if ( !v3 )
        {
          if ( !*(_QWORD *)(W32GetUserSessionState(v44, v26) + 63184) )
          {
            v80 = 0x20000;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1046LL);
          }
          v51 = W32GetUserSessionState(v50, v49);
          Win32FreePool(*(void **)(v51 + 63184));
          *(_QWORD *)(v51 + 63184) = 0LL;
        }
      }
      else
      {
        tagTERMINAL::SetDTEThread(a1);
        ProcessInformation = 1;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        v28 = v81;
        v29 = 2LL * v81;
        v30 = v81 + 1;
        v87[2 * v81 - 1] = *((_QWORD *)v15 + 201);
        if ( v30 > 5 )
        {
          v81 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1070LL);
        }
        if ( v3 || v6 )
        {
          v31 = v30;
        }
        else
        {
          W32GetUserSessionState(v29, v27);
          v31 = v30 + 9;
        }
        LegacyInputDispatcher::Initialize(v82, 1, 0, v31, v30, (struct LegacyDispatcherObject *)&v86);
        if ( v31 != v30 && !v84 )
        {
          v75 = W32GetUserSessionState(v33, v32);
          CBaseInput::RegisterDispatcherObject(*(CBaseInput **)(v75 + 3096), v82);
        }
        *((_DWORD *)v82 + 15) = v28;
        v34 = W32GetUserSessionState(v33, v32);
        if ( v3 )
        {
          *(_QWORD *)(v34 + 19200) = v82;
        }
        else
        {
          v35 = v82;
          *(_QWORD *)(v34 + 19192) = v82;
        }
        do
        {
          do
            LOBYTE(v35) = 1;
          while ( (unsigned int)xxxDesktopThreadWaiter((__int64)v35, 0) != v28 );
        }
        while ( (unsigned int)xxxHandleDesktopMessages(v15, a1) );
        if ( a1 == (struct tagTERMINAL *)(W32GetUserSessionState(v35, v36) + 68456) )
        {
          v45 = W32GetUserSessionState(v38, v37);
          *(_DWORD *)(v45 + 68928) |= 0x100000u;
        }
        *((_QWORD *)a1 + 2) = 0LL;
        *((_QWORD *)a1 + 3) = 0LL;
        *((_DWORD *)a1 + 8) = 0;
        *(_DWORD *)a1 = 0;
        v39 = (_QWORD *)*((_QWORD *)v15 + 61);
        if ( v39 )
        {
          HMAssignmentUnlock(v39 + 24);
          v76 = *((_QWORD *)v15 + 61);
          v39 = (_QWORD *)(*(_QWORD *)(v76 + 8) + 24LL);
          if ( *v39 )
          {
            *(_QWORD *)(**(_QWORD **)(v76 + 8) + 8LL) = 0LL;
            HMAssignmentUnlock(v39);
          }
        }
        *((_QWORD *)v15 + 62) = *(_QWORD *)(W32GetUserSessionState(v39, v37) + 62912);
        if ( !*((_DWORD *)v16 + 110) )
        {
          v81 = 0x20000;
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 1171LL);
        }
        --*((_DWORD *)v16 + 110);
        if ( *((tagQ **)v15 + 58) != v16 )
          zzzDestroyQueue(v16, v15);
        if ( v79 )
          CleanupSensorExplicitly(0LL);
        v41 = v82;
        if ( v82 )
          LegacyInputDispatcher::`scalar deleting destructor'(v82, v40);
        v82 = 0LL;
        UserSessionSwitchLeaveCrit(v41);
        if ( !v3 )
        {
          v77 = W32GetUserSessionState(v43, v42);
          Win32FreePool(*(void **)(v77 + 63184));
          *(_QWORD *)(v77 + 63184) = 0LL;
        }
        ProcessInformation = 0;
        ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
        EnterCrit(1LL, 0LL);
        tagTERMINAL::ClearDTEThread(a1);
      }
      UserSessionSwitchLeaveCrit(v44);
    }
  }
  else
  {
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v78, 0);
    KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
    if ( !v3 && *(_QWORD *)(W32GetUserSessionState(v56, v55) + 63184) )
      goto LABEL_64;
  }
}
