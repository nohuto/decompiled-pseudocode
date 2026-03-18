/*
 * XREFs of xxxDesktopThread @ 0x1C00CFAE0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     xxxDesktopThreadWaiter @ 0x1C0057424 (xxxDesktopThreadWaiter.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C0098A7C (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     vCleanupRimClientWorker @ 0x1C009CF3C (vCleanupRimClientWorker.c)
 *     vCleanupRimClient @ 0x1C009EAE0 (vCleanupRimClient.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00D037C (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     OpenMultiplePortDeviceViaRim @ 0x1C010AD2C (OpenMultiplePortDeviceViaRim.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C011435C (xxxCleanupMotherDesktopWindow.c)
 *     ProcessMouseInputViaRim @ 0x1C014F024 (ProcessMouseInputViaRim.c)
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB920 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01F6A90 (xxxOnPTPMouseOperation.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r14d
  const WCHAR *v3; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v5; // r15
  __int64 v6; // r13
  PVOID *v7; // r12
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // r8
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rcx
  struct _KEVENT *v24; // rcx
  void *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // rcx
  struct _KEVENT *v28; // rcx
  __int64 v29; // rdx
  void *v30; // rcx
  int v32; // r13d
  struct _KWAIT_BLOCK *v33; // rbx
  __int64 v34; // r8
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r13
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  const struct tagPOINTERCURSORDATA *v41; // rbx
  __int64 v42; // rbx
  _QWORD *v43; // rcx
  __int64 v44; // rax
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rcx
  __int64 v48; // rcx
  struct _KEVENT *v49; // rcx
  signed __int32 v50[8]; // [rsp+0h] [rbp-C9h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char *v52; // [rsp+28h] [rbp-A1h]
  _QWORD *v53; // [rsp+30h] [rbp-99h]
  _QWORD *v54; // [rsp+38h] [rbp-91h]
  void (__fastcall *v55)(__int64); // [rsp+40h] [rbp-89h]
  int v56; // [rsp+48h] [rbp-81h]
  _QWORD *v57; // [rsp+50h] [rbp-79h]
  struct _KWAIT_BLOCK *v58; // [rsp+60h] [rbp-69h]
  int v59; // [rsp+68h] [rbp-61h]
  int v60; // [rsp+6Ch] [rbp-5Dh]
  int v61; // [rsp+70h] [rbp-59h]
  int v62; // [rsp+74h] [rbp-55h]
  int v63; // [rsp+78h] [rbp-51h]
  int v64; // [rsp+7Ch] [rbp-4Dh]
  int ThreadInformation; // [rsp+80h] [rbp-49h] BYREF
  __int64 (__fastcall *v66)(_QWORD); // [rsp+88h] [rbp-41h]
  __int64 v67; // [rsp+90h] [rbp-39h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-31h] BYREF
  char v69[8]; // [rsp+A8h] [rbp-21h] BYREF
  struct _UNICODE_STRING v70; // [rsp+B0h] [rbp-19h] BYREF
  char v71[8]; // [rsp+C0h] [rbp-9h] BYREF
  struct _UNICODE_STRING v72; // [rsp+C8h] [rbp-1h] BYREF
  int v73; // [rsp+130h] [rbp+67h]
  int ProcessInformation; // [rsp+138h] [rbp+6Fh] BYREF
  int v75; // [rsp+140h] [rbp+77h]
  int v76; // [rsp+148h] [rbp+7Fh]

  ThreadInformation = 12;
  v66 = 0LL;
  v73 = 0;
  v2 = 0;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadPriority, &ThreadInformation, 4u);
  v3 = L"NOIO_DT";
  if ( (*(_DWORD *)a1 & 2) == 0 )
    v3 = L"IO_DT";
  RtlInitUnicodeString(&DestinationString, v3);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_81;
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  *((_QWORD *)a1 + 2) = ThreadWin32Thread;
  v5 = ThreadWin32Thread;
  v6 = *((_QWORD *)ThreadWin32Thread + 48);
  *((_QWORD *)a1 + 3) = v6;
  v67 = v6;
  ++*(_DWORD *)(v6 + 340);
  *((_QWORD *)ThreadWin32Thread + 52) = &diStatic;
  *((_QWORD *)ThreadWin32Thread + 67) = 0LL;
  v7 = (PVOID *)Win32AllocPoolNonPaged(80LL, 2037609301LL);
  v8 = Win32AllocPoolNonPaged(480LL, 2001433429LL);
  v58 = (struct _KWAIT_BLOCK *)v8;
  v9 = v8;
  if ( !v7 )
  {
LABEL_79:
    if ( v9 )
      Win32FreePool(v9);
LABEL_81:
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v50, 0);
    return KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
  }
  if ( !v8 )
  {
    Win32FreePool(v7);
    goto LABEL_79;
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v66 = ProcessDeviceChanges;
    v2 = 1;
    *v7 = (PVOID)aDeviceTemplate[10];
  }
  v10 = *(_DWORD *)a1;
  LODWORD(v11) = 0xFFFF;
  v75 = 0xFFFF;
  if ( (v10 & 2) != 0 )
  {
    v76 = 0xFFFF;
  }
  else
  {
    v12 = v2++;
    v76 = v12;
    v7[v12] = Feedback::gpevtPointerCursorOperation;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v59 = 0xFFFF;
  }
  else
  {
    v13 = v2++;
    v59 = v13;
    v7[v13] = (PVOID)gpevtPTPOperation;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v63 = 0xFFFF;
    v64 = 0xFFFF;
    v62 = 0xFFFF;
    v60 = 0xFFFF;
  }
  else
  {
    v75 = v2;
    v63 = v2 + 1;
    v7[v2] = (PVOID)aDeviceTemplate[17];
    v7[v2 + 1] = (PVOID)aDeviceTemplate[22];
    v64 = v2 + 2;
    v7[v2 + 2] = (PVOID)aDeviceTemplate[27];
    v62 = v2 + 3;
    v7[v2 + 3] = (PVOID)aDeviceTemplate[35];
    v14 = v2 + 4;
    v11 = v2 + 5;
    v2 += 6;
    v60 = v14;
    v7[v14] = (PVOID)aDeviceTemplate[40];
    v7[v11] = (PVOID)aDeviceTemplate[52];
  }
  v61 = v11;
  if ( gSessionId != gServiceSessionId && (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( LODWORD(aDeviceTemplate[12]) )
    {
      v73 = 1;
      v15 = (unsigned int)DeviceTypeToRimInputType(0LL);
      v57 = &aDeviceTemplate[13];
      LOBYTE(v56) = 0;
      v55 = Win32kRIMDevChangeCallback;
      v16 = aDeviceTemplate[25];
      v17 = aDeviceTemplate[15];
      LODWORD(v53) = 0;
      if ( (int)RIMRegisterForInput(
                  v15,
                  0LL,
                  gpWin32kDriverObject,
                  v17,
                  v16,
                  0LL,
                  v53,
                  0LL,
                  Win32kRIMDevChangeCallback,
                  v56,
                  &aDeviceTemplate[13]) >= 0 )
      {
        LOBYTE(v18) = 1;
        RawInputManagerObjectResolveHandle(aDeviceTemplate[13], 3LL, v18, &aDeviceTemplate[14]);
        EnterCrit(0LL, 1LL);
        if ( gProtocolType )
        {
          RtlInitUnicodeString(&v70, 0LL);
          LOBYTE(Timeout) = 0;
          RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
            aDeviceTemplate[13],
            &v70,
            0LL,
            ghRemoteMouseChannel,
            (_DWORD)Timeout,
            v71);
        }
        else
        {
          OpenMultiplePortDeviceViaRim(aDeviceTemplate[13], 0LL);
        }
        UserSessionSwitchLeaveCrit(v20, v19);
        HIDWORD(aDeviceTemplate[56]) = 64;
        v54 = &aDeviceTemplate[57];
        v53 = &aDeviceTemplate[56];
        v21 = HIDWORD(aDeviceTemplate[56]);
        v52 = (char *)&aDeviceTemplate[59];
        v22 = aDeviceTemplate[20];
        v23 = aDeviceTemplate[13];
        LOBYTE(Timeout) = 0;
        RIMReadInput(
          v23,
          &aDeviceTemplate[62],
          v21,
          v22,
          (_DWORD)Timeout,
          &aDeviceTemplate[59],
          &aDeviceTemplate[56],
          &aDeviceTemplate[57]);
      }
    }
  }
  EnterCrit(0LL, 1LL);
  v24 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  *(_DWORD *)a1 |= 4u;
  KeSetEvent(v24, 1, 0);
  v25 = (void *)*((_QWORD *)a1 + 7);
  ObReferenceObjectByPointer(v25, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  UserSessionSwitchLeaveCrit(v27, v26);
  KeWaitForSingleObject(v25, WrUserRequest, 0, 0, 0LL);
  EnterCrit(0LL, 1LL);
  ObfDereferenceObject(v25);
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    _InterlockedOr(v50, 0);
    if ( *((_QWORD *)a1 + 1) )
      xxxCleanupMotherDesktopWindow(a1);
    v28 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    if ( v28 )
      KeSetEvent(v28, 1, 0);
    Win32FreePool(v7);
    Win32FreePool(v58);
    --*(_DWORD *)(v6 + 340);
    v30 = (void *)*((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_DWORD *)a1 = 0;
    if ( v30 )
    {
      ObfDereferenceObject(v30);
      *((_QWORD *)a1 + 7) = 0LL;
    }
    if ( v73 )
      vCleanupRimClient(0);
    return UserSessionSwitchLeaveCrit(v30, v29);
  }
  ProcessInformation = 1;
  ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
  v32 = v75;
LABEL_36:
  v33 = v58;
  do
  {
    while ( 1 )
    {
      v34 = (__int64)v66;
      if ( LODWORD(aDeviceTemplate[12]) )
        v34 = 0LL;
      v35 = xxxDesktopThreadWaiter(v2, v7, v34, v33);
      if ( v35 == v2 )
        break;
      if ( v35 == v76 )
      {
        UserSessionSwitchLeaveCrit(v37, v36);
        HandlePointerCursorSideOp();
        v41 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64(
                                                     (volatile __int64 *)&Feedback::gppcdLatest,
                                                     0LL);
        if ( v41 )
        {
          xxxRenderCursor(v41);
          _InterlockedCompareExchange64(
            (volatile signed __int64 *)&(&Feedback::gppcdFree)[(unsigned int)((v41
                                                                             - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                                            / 0xCuLL)],
            (signed __int64)v41,
            0LL);
        }
        EnterCrit(0LL, 1LL);
        goto LABEL_68;
      }
      if ( v35 == v59 )
      {
        UserSessionSwitchLeaveCrit(v37, v36);
        xxxOnPTPMouseOperation();
        EnterCrit(0LL, 1LL);
      }
      else if ( v35 == v32 )
      {
        RIMOnPnpNotification(aDeviceTemplate[13]);
      }
      else if ( v35 == v63 )
      {
        v42 = 0LL;
        v43 = (_QWORD *)aDeviceTemplate[62];
        if ( v43 != &aDeviceTemplate[63] )
          v42 = aDeviceTemplate[62];
        UserSessionSwitchLeaveCrit(v43, v36);
        v44 = aDeviceTemplate[0];
        if ( SLODWORD(aDeviceTemplate[57]) >= 0 )
        {
          ProcessMouseInputViaRim((struct _MOUSE_INPUT_DATA *)aDeviceTemplate[62]);
          if ( v42 )
            aDeviceTemplate[62] = &aDeviceTemplate[63];
          v44 = aDeviceTemplate[0];
        }
        *(_DWORD *)(v44 + 452) = 64;
        v54 = &aDeviceTemplate[57];
        v53 = &aDeviceTemplate[56];
        v45 = HIDWORD(aDeviceTemplate[56]);
        v52 = (char *)&aDeviceTemplate[59];
        v46 = aDeviceTemplate[20];
        v47 = aDeviceTemplate[13];
        LOBYTE(Timeout) = 0;
        RIMReadInput(
          v47,
          &aDeviceTemplate[62],
          v45,
          v46,
          (_DWORD)Timeout,
          &aDeviceTemplate[59],
          &aDeviceTemplate[56],
          &aDeviceTemplate[57]);
        EnterCrit(0LL, 1LL);
        if ( !v42 )
          goto LABEL_36;
        RIMFreeKernelMem(v42);
LABEL_68:
        v33 = v58;
      }
      else if ( v35 == v64 )
      {
        RIMOnTimerNotification(aDeviceTemplate[13], 0LL);
      }
      else
      {
        if ( v35 == v62 )
        {
          RtlInitUnicodeString(&v72, 0LL);
          v52 = v69;
          v48 = aDeviceTemplate[13];
          LOBYTE(Timeout) = 0;
          LODWORD(aDeviceTemplate[37]) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                           v48,
                                           &v72,
                                           0LL,
                                           ghRemoteMouseChannel,
                                           (_DWORD)Timeout,
                                           v69);
          v49 = (struct _KEVENT *)aDeviceTemplate[36];
          goto LABEL_77;
        }
        if ( v35 == v60 )
        {
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[13], 0LL);
          v49 = (struct _KEVENT *)aDeviceTemplate[43];
          goto LABEL_77;
        }
        if ( v35 == v61 )
        {
          RIMDirectStartDeviceClassNotifications(aDeviceTemplate[13], gpWin32kDriverObject);
          v49 = (struct _KEVENT *)aDeviceTemplate[55];
LABEL_77:
          KeSetEvent(v49, 1, 0);
        }
      }
    }
  }
  while ( (unsigned int)xxxHandleDesktopMessages(v5, a1) );
  v38 = v67;
  if ( a1 == gTermIO )
    gdwHydraHint |= 0x100000u;
  Win32FreePool(v7);
  Win32FreePool(v33);
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_DWORD *)a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  v40 = (_QWORD *)*((_QWORD *)v5 + 51);
  if ( v40 )
  {
    HMAssignmentUnlock(v40 + 22);
    v40 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 51) + 8LL) + 16LL);
    if ( *v40 )
      HMAssignmentUnlock(v40);
  }
  *((_QWORD *)v5 + 52) = &diStatic;
  --*(_DWORD *)(v38 + 340);
  if ( *((_QWORD *)v5 + 48) != v38 )
    zzzDestroyQueue(v38);
  if ( v73 )
    vCleanupRimClientWorker(0);
  UserSessionSwitchLeaveCrit(v40, v39);
  ProcessInformation = 0;
  return ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
}
