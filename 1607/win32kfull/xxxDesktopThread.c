/*
 * XREFs of xxxDesktopThread @ 0x1C00DF620
 * Callers:
 *     <none>
 * Callees:
 *     ?HandlePointerCursorSideOp@@YAXXZ @ 0x1C000D308 (-HandlePointerCursorSideOp@@YAXXZ.c)
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     xxxDesktopThreadWaiter @ 0x1C007F06C (xxxDesktopThreadWaiter.c)
 *     ?xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z @ 0x1C00DFFA0 (-xxxHandleDesktopMessages@@YAHPEAUtagTHREADINFO@@PEAUtagTERMINAL@@@Z.c)
 *     ProcessMouseInputViaRim @ 0x1C00E0064 (ProcessMouseInputViaRim.c)
 *     vCleanupRimClient @ 0x1C011AC20 (vCleanupRimClient.c)
 *     vCleanupRimClientWorker @ 0x1C011ADFC (vCleanupRimClientWorker.c)
 *     xxxCleanupMotherDesktopWindow @ 0x1C012C494 (xxxCleanupMotherDesktopWindow.c)
 *     OpenMultiplePortDevice @ 0x1C012CE1C (OpenMultiplePortDevice.c)
 *     ?xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z @ 0x1C01D335C (-xxxRenderCursor@@YAXAEBUtagPOINTERCURSORDATA@@@Z.c)
 *     xxxOnPTPMouseOperation @ 0x1C01EDC74 (xxxOnPTPMouseOperation.c)
 */

// write access to const memory has been detected, the output may be wrong!
NTSTATUS __fastcall xxxDesktopThread(struct tagTERMINAL *a1)
{
  unsigned int v2; // r14d
  const WCHAR *v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct tagTHREADINFO *ThreadWin32Thread; // rax
  struct tagTHREADINFO *v8; // r15
  __int64 v9; // r12
  PVOID *v10; // r13
  struct _KWAIT_BLOCK *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KWAIT_BLOCK *v14; // rbx
  int v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r9
  __int64 v19; // r9
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 v23; // r8
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rcx
  struct _KEVENT *v29; // rcx
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // r8
  struct _KEVENT *v33; // rcx
  __int64 v34; // rdx
  __int64 v35; // r8
  __int64 v36; // rdx
  void *v37; // rcx
  __int64 v39; // r8
  struct _KWAIT_BLOCK *v40; // rbx
  int v41; // eax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __int64 v46; // r8
  __int64 v47; // rdx
  _QWORD *v48; // rcx
  const struct tagPOINTERCURSORDATA *v49; // rbx
  __int64 v50; // rbx
  char *v51; // rcx
  __int64 v52; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rcx
  struct _KEVENT *v56; // rcx
  signed __int32 v57[8]; // [rsp+0h] [rbp-B9h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-99h]
  char *v59; // [rsp+28h] [rbp-91h]
  char *v60; // [rsp+30h] [rbp-89h]
  char *v61; // [rsp+38h] [rbp-81h]
  __int64 (__fastcall *v62)(); // [rsp+40h] [rbp-79h]
  int v63; // [rsp+48h] [rbp-71h]
  char *v64; // [rsp+50h] [rbp-69h]
  struct _KWAIT_BLOCK *v65; // [rsp+60h] [rbp-59h]
  int v66; // [rsp+68h] [rbp-51h]
  int v67; // [rsp+6Ch] [rbp-4Dh]
  int v68; // [rsp+70h] [rbp-49h]
  int v69; // [rsp+74h] [rbp-45h]
  int v70; // [rsp+78h] [rbp-41h]
  int v71; // [rsp+7Ch] [rbp-3Dh]
  int ThreadInformation; // [rsp+80h] [rbp-39h] BYREF
  PVOID Object; // [rsp+88h] [rbp-31h]
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-29h] BYREF
  char v75[8]; // [rsp+A0h] [rbp-19h] BYREF
  char v76[8]; // [rsp+A8h] [rbp-11h] BYREF
  struct _UNICODE_STRING v77; // [rsp+B0h] [rbp-9h] BYREF
  struct _UNICODE_STRING v78; // [rsp+C0h] [rbp+7h] BYREF
  int v79; // [rsp+120h] [rbp+67h]
  int ProcessInformation; // [rsp+128h] [rbp+6Fh] BYREF
  int v81; // [rsp+130h] [rbp+77h]
  int v82; // [rsp+138h] [rbp+7Fh]

  ThreadInformation = 12;
  v79 = 0;
  v2 = 0;
  ZwSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadPriority, &ThreadInformation, 4u);
  v3 = L"NOIO_DT";
  if ( (*(_DWORD *)a1 & 2) == 0 )
    v3 = L"IO_DT";
  RtlInitUnicodeString(&DestinationString, v3);
  if ( (int)InitSystemThread(&DestinationString) < 0 )
    goto LABEL_97;
  ThreadWin32Thread = (struct tagTHREADINFO *)W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v4, v5, v6);
  *((_QWORD *)a1 + 2) = ThreadWin32Thread;
  v8 = ThreadWin32Thread;
  v9 = *((_QWORD *)ThreadWin32Thread + 48);
  *((_QWORD *)a1 + 3) = v9;
  ++*(_DWORD *)(v9 + 348);
  *((_QWORD *)ThreadWin32Thread + 52) = &diStatic;
  *((_QWORD *)ThreadWin32Thread + 67) = 0LL;
  v10 = (PVOID *)Win32AllocPoolNonPaged(80LL, 2037609301LL);
  v11 = (struct _KWAIT_BLOCK *)Win32AllocPoolNonPaged(480LL, 2001433429LL);
  if ( a1 == gTermIO )
    gpDTIOMouseEventWaitObjectArray = v11;
  v65 = v11;
  v14 = v11;
  if ( !v10 )
  {
LABEL_94:
    if ( v14 )
    {
      Win32FreePool(v14, v12, v13);
      if ( a1 == gTermIO )
        gpDTIOMouseEventWaitObjectArray = 0LL;
    }
LABEL_97:
    *(_DWORD *)a1 |= 8u;
    _InterlockedOr(v57, 0);
    return KeSetEvent(*((PRKEVENT *)a1 + 5), 1, 0);
  }
  if ( !v11 )
  {
    Win32FreePool(v10, v12, v13);
    goto LABEL_94;
  }
  if ( (*(_DWORD *)a1 & 2) == 0 )
  {
    v2 = 1;
    *v10 = (PVOID)*((_QWORD *)&aDeviceTemplate + 10);
  }
  v15 = *(_DWORD *)a1;
  LODWORD(v16) = 0xFFFF;
  v66 = 0xFFFF;
  if ( (v15 & 2) != 0 )
  {
    v81 = 0xFFFF;
  }
  else
  {
    v17 = v2++;
    v81 = v17;
    v10[v17] = Feedback::gpevtPointerCursorOperation;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v82 = 0xFFFF;
  }
  else
  {
    v18 = v2++;
    v82 = v18;
    v10[v18] = (PVOID)gpevtPTPOperation;
  }
  if ( (*(_DWORD *)a1 & 2) != 0 )
  {
    v67 = 0xFFFF;
    v68 = 0xFFFF;
    v69 = 0xFFFF;
    v70 = 0xFFFF;
  }
  else
  {
    v66 = v2;
    v67 = v2 + 1;
    v10[v2] = (PVOID)*((_QWORD *)&aDeviceTemplate + 16);
    v10[v2 + 1] = (PVOID)*((_QWORD *)&aDeviceTemplate + 21);
    v68 = v2 + 2;
    v10[v2 + 2] = (PVOID)*((_QWORD *)&aDeviceTemplate + 26);
    v69 = v2 + 3;
    v10[v2 + 3] = (PVOID)*((_QWORD *)&aDeviceTemplate + 34);
    v19 = v2 + 4;
    v16 = v2 + 5;
    v2 += 6;
    v70 = v19;
    v10[v19] = (PVOID)*((_QWORD *)&aDeviceTemplate + 39);
    v10[v16] = (PVOID)*((_QWORD *)&aDeviceTemplate + 51);
  }
  v71 = v16;
  if ( gSessionId != gServiceSessionId && (*(_DWORD *)a1 & 2) == 0 )
  {
    v79 = 1;
    v20 = (unsigned int)DeviceTypeToRimInputType(0LL);
    v64 = (char *)&aDeviceTemplate + 96;
    LOBYTE(v63) = 0;
    v62 = Win32kRIMDevChangeCallback;
    v21 = *((_QWORD *)&aDeviceTemplate + 24);
    v22 = *((_QWORD *)&aDeviceTemplate + 14);
    LODWORD(v60) = 0;
    if ( (int)RIMRegisterForInput(
                v20,
                0LL,
                gpWin32kDriverObject,
                v22,
                v21,
                0LL,
                v60,
                0LL,
                Win32kRIMDevChangeCallback,
                v63,
                (char *)&aDeviceTemplate + 96) >= 0 )
    {
      LOBYTE(v23) = 1;
      RawInputManagerObjectResolveHandle(*((_QWORD *)&aDeviceTemplate + 12), 3LL, v23, (char *)&aDeviceTemplate + 104);
      EnterCrit(0LL, 1LL);
      if ( gProtocolType )
      {
        RtlInitUnicodeString(&v77, 0LL);
        LOBYTE(BugCheckParameter4) = 0;
        RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
          *((_QWORD *)&aDeviceTemplate + 12),
          &v77,
          0LL,
          ghRemoteMouseChannel,
          BugCheckParameter4,
          v75);
      }
      else
      {
        OpenMultiplePortDevice(*((_QWORD *)&aDeviceTemplate + 12), 0LL);
      }
      UserSessionSwitchLeaveCrit(v25, v24);
      *((_DWORD *)&aDeviceTemplate + 111) = 64;
      v61 = (char *)&aDeviceTemplate + 448;
      v60 = (char *)&aDeviceTemplate + 440;
      v26 = *((unsigned int *)&aDeviceTemplate + 111);
      v59 = (char *)&aDeviceTemplate + 464;
      v27 = *((_QWORD *)&aDeviceTemplate + 19);
      v28 = *((_QWORD *)&aDeviceTemplate + 12);
      LOBYTE(BugCheckParameter4) = 0;
      RIMReadInput(
        v28,
        (char *)&aDeviceTemplate + 488,
        v26,
        v27,
        BugCheckParameter4,
        (char *)&aDeviceTemplate + 464,
        (char *)&aDeviceTemplate + 440,
        (char *)&aDeviceTemplate + 448);
    }
    v14 = v65;
  }
  EnterCrit(0LL, 1LL);
  v29 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
  *(_DWORD *)a1 |= 4u;
  KeSetEvent(v29, 1, 0);
  Object = (PVOID)*((_QWORD *)a1 + 7);
  ObReferenceObjectByPointer(Object, 0x1F0003u, (POBJECT_TYPE)ExEventObjectType, 0);
  if ( gdwInAtomicOperation )
  {
    v30 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v30, gdwInAtomicOperation);
  KeWaitForSingleObject(Object, WrUserRequest, 0, 0, 0LL);
  EnterCrit(0LL, 1LL);
  ObfDereferenceObject(Object);
  if ( (*(_DWORD *)a1 & 8) != 0 )
  {
    _InterlockedOr(v57, 0);
    if ( *((_QWORD *)a1 + 1) )
      xxxCleanupMotherDesktopWindow(a1);
    v33 = (struct _KEVENT *)*((_QWORD *)a1 + 5);
    if ( v33 )
      KeSetEvent(v33, 1, 0);
    Win32FreePool(v10, v31, v32);
    Win32FreePool(v14, v34, v35);
    if ( a1 == gTermIO )
      gpDTIOMouseEventWaitObjectArray = 0LL;
    --*(_DWORD *)(v9 + 348);
    v37 = (void *)*((_QWORD *)a1 + 7);
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 0LL;
    *(_DWORD *)a1 = 0;
    if ( v37 )
    {
      ObfDereferenceObject(v37);
      *((_QWORD *)a1 + 7) = 0LL;
    }
    if ( v79 )
      vCleanupRimClient(0LL);
    return UserSessionSwitchLeaveCrit(v37, v36);
  }
  ProcessInformation = 1;
  ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
LABEL_43:
  v40 = v65;
  do
  {
    while ( 1 )
    {
      v41 = xxxDesktopThreadWaiter(v2, v10, v39, v40);
      if ( v41 == v2 )
        break;
      if ( v41 == v81 )
      {
        if ( gdwInAtomicOperation )
        {
          v43 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v43, gdwInAtomicOperation);
        HandlePointerCursorSideOp();
        v49 = (const struct tagPOINTERCURSORDATA *)_InterlockedExchange64(
                                                     (volatile __int64 *)&Feedback::gppcdLatest,
                                                     0LL);
        if ( v49 )
        {
          xxxRenderCursor(v49);
          _InterlockedCompareExchange64(
            (volatile signed __int64 *)&(&Feedback::gppcdFree)[(unsigned int)((v49
                                                                             - (const struct tagPOINTERCURSORDATA *)&Feedback::gpcd)
                                                                            / 0xCuLL)],
            (signed __int64)v49,
            0LL);
        }
        EnterCrit(0LL, 1LL);
        goto LABEL_43;
      }
      if ( v41 == v82 )
      {
        if ( gdwInAtomicOperation )
        {
          v43 = gdwExtraInstrumentations;
          if ( (gdwExtraInstrumentations & 1) != 0 )
            KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
        }
        UserSessionSwitchLeaveCrit(v43, gdwInAtomicOperation);
        xxxOnPTPMouseOperation();
        EnterCrit(0LL, 1LL);
      }
      else if ( v41 == v66 )
      {
        RIMOnPnpNotification(*((_QWORD *)&aDeviceTemplate + 12));
      }
      else
      {
        if ( v41 == v67 )
        {
          v50 = 0LL;
          v51 = (char *)*((_QWORD *)&aDeviceTemplate + 61);
          if ( v51 != (char *)&aDeviceTemplate + 496 )
            v50 = *((_QWORD *)&aDeviceTemplate + 61);
          UserSessionSwitchLeaveCrit(v51, v42);
          v52 = aDeviceTemplate;
          if ( *((int *)&aDeviceTemplate + 112) >= 0 )
          {
            ProcessMouseInputViaRim(*((struct _MOUSE_INPUT_DATA **)&aDeviceTemplate + 61));
            if ( v50 )
              *((_QWORD *)&aDeviceTemplate + 61) = (char *)&aDeviceTemplate + 496;
            v52 = aDeviceTemplate;
          }
          *(_DWORD *)(v52 + 444) = 64;
          v61 = (char *)&aDeviceTemplate + 448;
          v60 = (char *)&aDeviceTemplate + 440;
          v53 = *((unsigned int *)&aDeviceTemplate + 111);
          v59 = (char *)&aDeviceTemplate + 464;
          v54 = *((_QWORD *)&aDeviceTemplate + 19);
          v55 = *((_QWORD *)&aDeviceTemplate + 12);
          LOBYTE(BugCheckParameter4) = 0;
          RIMReadInput(
            v55,
            (char *)&aDeviceTemplate + 488,
            v53,
            v54,
            BugCheckParameter4,
            (char *)&aDeviceTemplate + 464,
            (char *)&aDeviceTemplate + 440,
            (char *)&aDeviceTemplate + 448);
          EnterCrit(0LL, 1LL);
          if ( v50 )
            RIMFreeKernelMem(v50);
          goto LABEL_43;
        }
        if ( v41 == v68 )
        {
          RIMOnTimerNotification(*((_QWORD *)&aDeviceTemplate + 12), 0LL);
        }
        else
        {
          if ( v41 == v69 )
          {
            RtlInitUnicodeString(&v78, 0LL);
            LOBYTE(BugCheckParameter4) = 0;
            *((_DWORD *)&aDeviceTemplate + 72) = RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle(
                                                   *((_QWORD *)&aDeviceTemplate + 12),
                                                   &v78,
                                                   0LL,
                                                   ghRemoteMouseChannel,
                                                   BugCheckParameter4,
                                                   v76);
            v56 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 35);
            goto LABEL_89;
          }
          if ( v41 == v70 )
          {
            RIMDirectPnpRemoveDevicesOfType(*((_QWORD *)&aDeviceTemplate + 12), 0LL);
            v56 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 42);
            goto LABEL_89;
          }
          if ( v41 == v71 )
          {
            if ( gdwInAtomicOperation && (gdwExtraInstrumentations & 1) != 0 )
              KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
            RIMDirectStartDeviceClassNotifications(*((_QWORD *)&aDeviceTemplate + 12), gpWin32kDriverObject);
            v56 = (struct _KEVENT *)*((_QWORD *)&aDeviceTemplate + 54);
LABEL_89:
            KeSetEvent(v56, 1, 0);
          }
        }
      }
    }
  }
  while ( (unsigned int)xxxHandleDesktopMessages(v8, a1) );
  if ( a1 == gTermIO )
    gdwHydraHint |= 0x100000u;
  Win32FreePool(v10, v44, v39);
  Win32FreePool(v40, v45, v46);
  if ( a1 == gTermIO )
    gpDTIOMouseEventWaitObjectArray = 0LL;
  *((_QWORD *)a1 + 2) = 0LL;
  *((_QWORD *)a1 + 3) = 0LL;
  *((_DWORD *)a1 + 8) = 0;
  *(_DWORD *)a1 = 0;
  v48 = (_QWORD *)*((_QWORD *)v8 + 51);
  if ( v48 )
  {
    HMAssignmentUnlock(v48 + 22);
    v48 = (_QWORD *)(*(_QWORD *)(*((_QWORD *)v8 + 51) + 8LL) + 16LL);
    if ( *v48 )
      HMAssignmentUnlock(v48);
  }
  *((_QWORD *)v8 + 52) = &diStatic;
  --*(_DWORD *)(v9 + 348);
  if ( *((_QWORD *)v8 + 48) != v9 )
    zzzDestroyQueue(v9);
  if ( v79 )
    vCleanupRimClientWorker(0LL);
  UserSessionSwitchLeaveCrit(v48, v47);
  ProcessInformation = 0;
  return ZwSetInformationProcess((HANDLE)0xFFFFFFFFFFFFFFFFLL, ProcessBreakOnTermination, &ProcessInformation, 4u);
}
