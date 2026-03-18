/*
 * XREFs of xxxDesktopThread @ 0x1C0142CC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C003A414 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     xxxDesktopThreadWaiter @ 0x1C00679D0 (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C007C798 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ProcessMouseInputViaRim @ 0x1C012D104 (ProcessMouseInputViaRim.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C0130A74 (xxxCleanupMotherDesktopWindow.c)
 *     vCleanupRimClient @ 0x1C0131370 (vCleanupRimClient.c)
 *     vCleanupRimClientWorker @ 0x1C0144CB4 (vCleanupRimClientWorker.c)
 *     OpenMultiplePortDeviceViaRim @ 0x1C015A864 (OpenMultiplePortDeviceViaRim.c)
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01DB320 (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01F65C0 (xxxOnPTPMouseOperation.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r14d
  const WCHAR *v3; // rdx
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v5; // r15
  __int64 v6; // r12
  PVOID *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 v14; // r9
  unsigned int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rcx
  struct _KEVENT *v22; // rcx
  void *v23; // rbx
  __int64 v24; // rdx
  __int64 v25; // rcx
  struct _KEVENT *v26; // rcx
  __int64 v27; // rdx
  void *v28; // rcx
  int v30; // r12d
  struct _KWAIT_BLOCK *v31; // rbx
  __int64 v32; // r8
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r12
  __int64 v37; // rdx
  _QWORD *v38; // rcx
  const struct tagPOINTERCURSORDATA *v39; // rbx
  __int64 v40; // rbx
  _QWORD *v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rcx
  __int64 v47; // rcx
  struct _KEVENT *v48; // rcx
  signed __int32 v49[8]; // [rsp+0h] [rbp-C9h] BYREF
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char *v51; // [rsp+28h] [rbp-A1h]
  _QWORD *v52; // [rsp+30h] [rbp-99h]
  _QWORD *v53; // [rsp+38h] [rbp-91h]
  int v54; // [rsp+48h] [rbp-81h]
  struct _KWAIT_BLOCK *v55; // [rsp+60h] [rbp-69h]
  int v56; // [rsp+68h] [rbp-61h]
  int v57; // [rsp+6Ch] [rbp-5Dh]
  int v58; // [rsp+70h] [rbp-59h]
  int v59; // [rsp+74h] [rbp-55h]
  int v60; // [rsp+78h] [rbp-51h]
  int v61; // [rsp+7Ch] [rbp-4Dh]
  int ThreadInformation; // [rsp+80h] [rbp-49h] BYREF
  __int64 (__fastcall *v63)(_QWORD); // [rsp+88h] [rbp-41h]
  __int64 v64; // [rsp+90h] [rbp-39h]
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-31h] BYREF
  char v66[8]; // [rsp+A8h] [rbp-21h] BYREF
  struct _UNICODE_STRING v67; // [rsp+B0h] [rbp-19h] BYREF
  char v68[8]; // [rsp+C0h] [rbp-9h] BYREF
  struct _UNICODE_STRING v69; // [rsp+C8h] [rbp-1h] BYREF
  int v70; // [rsp+130h] [rbp+67h]
  int ProcessInformation; // [rsp+138h] [rbp+6Fh] BYREF
  int v72; // [rsp+140h] [rbp+77h]
  int v73; // [rsp+148h] [rbp+7Fh]

  ThreadInformation = 12;
  v63 = 0LL;
  v70 = 0;
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
  v6 = *((_QWORD *)ThreadWin32Thread + 49);
  *((_QWORD *)a1 + 3) = v6;
  v64 = v6;
  ++*(_DWORD *)(v6 + 340);
  *((_QWORD *)ThreadWin32Thread + 53) = &diStatic;
  *((_QWORD *)ThreadWin32Thread + 68) = 0LL;
  v7 = (PVOID *)Win32AllocPoolNonPaged(80LL, 2037609301LL);
  v8 = Win32AllocPoolNonPaged(480LL, 2001433429LL);
  v55 = (struct _KWAIT_BLOCK *)v8;
  v9 = v8;
  if ( !v7 )
  {
LABEL_79:
    if ( v9 )
      Win32FreePool(v9);
LABEL_81:
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v49, 0);
    return KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
  }
  if ( !v8 )
  {
    Win32FreePool(v7);
    goto LABEL_79;
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v63 = ProcessDeviceChanges;
    v2 = 1;
    *v7 = (PVOID)aDeviceTemplate[10];
  }
  v10 = *(_DWORD *)a1;
  LODWORD(v11) = 0xFFFF;
  v72 = 0xFFFF;
  if ( (v10 & 2) != 0 )
  {
    v73 = 0xFFFF;
  }
  else
  {
    v12 = v2++;
    v73 = v12;
    v7[v12] = Feedback::gpevtPointerCursorOperation;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v56 = 0xFFFF;
  }
  else
  {
    v13 = v2++;
    v56 = v13;
    v7[v13] = (PVOID)gpevtPTPOperation;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v60 = 0xFFFF;
    v61 = 0xFFFF;
    v59 = 0xFFFF;
    v57 = 0xFFFF;
  }
  else
  {
    v72 = v2;
    v60 = v2 + 1;
    v7[v2] = (PVOID)aDeviceTemplate[17];
    v7[v2 + 1] = (PVOID)aDeviceTemplate[22];
    v61 = v2 + 2;
    v7[v2 + 2] = (PVOID)aDeviceTemplate[27];
    v59 = v2 + 3;
    v7[v2 + 3] = (PVOID)aDeviceTemplate[35];
    v14 = v2 + 4;
    v11 = v2 + 5;
    v2 += 6;
    v57 = v14;
    v7[v14] = (PVOID)aDeviceTemplate[40];
    v7[v11] = (PVOID)aDeviceTemplate[52];
  }
  v58 = v11;
  if ( gSessionId != gServiceSessionId && (*(_DWORD *)a1 & 2) == 0 )
  {
    if ( LODWORD(aDeviceTemplate[12]) )
    {
      v70 = 1;
      v15 = DeviceTypeToRimInputType(0LL);
      LOBYTE(v54) = 0;
      if ( (int)RIMRegisterForInput(
                  v15,
                  0LL,
                  gpWin32kDriverObject,
                  aDeviceTemplate[15],
                  aDeviceTemplate[25],
                  0LL,
                  0,
                  0LL,
                  Win32kRIMDevChangeCallback,
                  v54,
                  &aDeviceTemplate[13]) >= 0 )
      {
        LOBYTE(v16) = 1;
        RawInputManagerObjectResolveHandle(aDeviceTemplate[13], 3LL, v16, &aDeviceTemplate[14]);
        EnterCrit(1LL);
        if ( gProtocolType )
        {
          RtlInitUnicodeString(&v67, 0LL);
          LOBYTE(Timeout) = 0;
          RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
            aDeviceTemplate[13],
            &v67,
            0LL,
            ghRemoteMouseChannel,
            (_DWORD)Timeout,
            v68);
        }
        else
        {
          OpenMultiplePortDeviceViaRim(aDeviceTemplate[13], 0LL);
        }
        UserSessionSwitchLeaveCrit(v18, v17);
        HIDWORD(aDeviceTemplate[56]) = 64;
        v53 = &aDeviceTemplate[57];
        v52 = &aDeviceTemplate[56];
        v19 = HIDWORD(aDeviceTemplate[56]);
        v51 = (char *)&aDeviceTemplate[59];
        v20 = aDeviceTemplate[20];
        v21 = aDeviceTemplate[13];
        LOBYTE(Timeout) = 0;
        RIMReadInput(
          v21,
          &aDeviceTemplate[62],
          v19,
          v20,
          Timeout,
          &aDeviceTemplate[59],
          &aDeviceTemplate[56],
          &aDeviceTemplate[57]);
      }
    }
  }
  EnterCrit(1LL);
  v22 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  *(_DWORD *)a1 |= 4u;
  KeSetEvent(v22, 1, 0);
  v23 = (void *)*((_QWORD *)a1 + 7);
  ObReferenceObjectByPointer(v23, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  UserSessionSwitchLeaveCrit(v25, v24);
  KeWaitForSingleObject(v23, WrUserRequest, 0, 0, 0LL);
  EnterCrit(1LL);
  ObfDereferenceObject(v23);
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    _InterlockedOr(v49, 0);
    if ( *((_QWORD *)a1 + 1) )
      xxxCleanupMotherDesktopWindow((__int64)a1);
    v26 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    if ( v26 )
      KeSetEvent(v26, 1, 0);
    Win32FreePool(v7);
    Win32FreePool(v55);
    --*(_DWORD *)(v6 + 340);
    v28 = (void *)*((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_DWORD *)a1 = 0;
    if ( v28 )
    {
      ObfDereferenceObject(v28);
      *((_QWORD *)a1 + 7) = 0LL;
    }
    if ( v70 )
      vCleanupRimClient(0);
    return UserSessionSwitchLeaveCrit(v28, v27);
  }
  ProcessInformation = 1;
  ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
  v30 = v72;
LABEL_36:
  v31 = v55;
  do
  {
    while ( 1 )
    {
      v32 = (__int64)v63;
      if ( LODWORD(aDeviceTemplate[12]) )
        v32 = 0LL;
      v33 = xxxDesktopThreadWaiter(v2, v7, v32, v31);
      if ( v33 == v2 )
        break;
      if ( v33 == v73 )
      {
        UserSessionSwitchLeaveCrit(v35, v34);
        HandlePointerCursorSideOp();
        v39 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64(
                                                     (volatile __int64 *)&Feedback::gppcdLatest,
                                                     0LL);
        if ( v39 )
        {
          xxxRenderCursor(v39);
          _InterlockedCompareExchange64(
            (volatile signed __int64 *)&(&Feedback::gppcdFree)[(unsigned int)((v39
                                                                             - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                                            / 0xCuLL)],
            (signed __int64)v39,
            0LL);
        }
        EnterCrit(1LL);
        goto LABEL_68;
      }
      if ( v33 == v56 )
      {
        UserSessionSwitchLeaveCrit(v35, v34);
        xxxOnPTPMouseOperation();
        EnterCrit(1LL);
      }
      else if ( v33 == v30 )
      {
        RIMOnPnpNotification(aDeviceTemplate[13]);
      }
      else if ( v33 == v60 )
      {
        v40 = 0LL;
        v41 = (_QWORD *)aDeviceTemplate[62];
        if ( v41 != &aDeviceTemplate[63] )
          v40 = aDeviceTemplate[62];
        UserSessionSwitchLeaveCrit(v41, v34);
        v43 = aDeviceTemplate[0];
        if ( SLODWORD(aDeviceTemplate[57]) >= 0 )
        {
          ProcessMouseInputViaRim(
            (struct _MOUSE_INPUT_DATA *)aDeviceTemplate[62],
            v42,
            aDeviceTemplate[58],
            aDeviceTemplate[59]);
          if ( v40 )
            aDeviceTemplate[62] = &aDeviceTemplate[63];
          v43 = aDeviceTemplate[0];
        }
        *(_DWORD *)(v43 + 452) = 64;
        v53 = &aDeviceTemplate[57];
        v52 = &aDeviceTemplate[56];
        v44 = HIDWORD(aDeviceTemplate[56]);
        v51 = (char *)&aDeviceTemplate[59];
        v45 = aDeviceTemplate[20];
        v46 = aDeviceTemplate[13];
        LOBYTE(Timeout) = 0;
        RIMReadInput(
          v46,
          &aDeviceTemplate[62],
          v44,
          v45,
          Timeout,
          &aDeviceTemplate[59],
          &aDeviceTemplate[56],
          &aDeviceTemplate[57]);
        EnterCrit(1LL);
        if ( !v40 )
          goto LABEL_36;
        RIMFreeKernelMem(v40);
LABEL_68:
        v31 = v55;
      }
      else if ( v33 == v61 )
      {
        RIMOnTimerNotification(aDeviceTemplate[13], 0LL);
      }
      else
      {
        if ( v33 == v59 )
        {
          RtlInitUnicodeString(&v69, 0LL);
          v51 = v66;
          v47 = aDeviceTemplate[13];
          LOBYTE(Timeout) = 0;
          LODWORD(aDeviceTemplate[37]) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                           v47,
                                           &v69,
                                           0LL,
                                           ghRemoteMouseChannel,
                                           (_DWORD)Timeout,
                                           v66);
          v48 = (struct _KEVENT *)aDeviceTemplate[36];
          goto LABEL_77;
        }
        if ( v33 == v57 )
        {
          RIMDirectPnpRemoveDevicesOfType(aDeviceTemplate[13], 0LL);
          v48 = (struct _KEVENT *)aDeviceTemplate[43];
          goto LABEL_77;
        }
        if ( v33 == v58 )
        {
          RIMDirectStartDeviceClassNotifications(aDeviceTemplate[13], gpWin32kDriverObject);
          v48 = (struct _KEVENT *)aDeviceTemplate[55];
LABEL_77:
          KeSetEvent(v48, 1, 0);
        }
      }
    }
  }
  while ( (unsigned int)xxxHandleDesktopMessages(v5, a1) );
  v36 = v64;
  if ( a1 == gTermIO )
    gdwHydraHint |= 0x100000u;
  Win32FreePool(v7);
  Win32FreePool(v31);
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_DWORD *)a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  v38 = (_QWORD *)*((_QWORD *)v5 + 52);
  if ( v38 )
  {
    HMAssignmentUnlock(v38 + 22);
    v38 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v5 + 52) + 8LL) + 16LL);
    if ( *v38 )
      HMAssignmentUnlock(v38);
  }
  *((_QWORD *)v5 + 53) = &diStatic;
  --*(_DWORD *)(v36 + 340);
  if ( *((_QWORD *)v5 + 49) != v36 )
    zzzDestroyQueue(v36);
  if ( v70 )
    vCleanupRimClientWorker(0LL);
  UserSessionSwitchLeaveCrit(v38, v37);
  ProcessInformation = 0;
  return ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
}
