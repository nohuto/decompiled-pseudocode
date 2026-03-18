/*
 * XREFs of IoCaptureLiveDump @ 0x140676C1C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401E16B0 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14066A7D8 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     _TlgWrite @ 0x1400EFEB0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1400EFFB0 (_TlgKeywordOn.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     EtwActivityIdControl @ 0x14011B7E4 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     memset @ 0x140195A80 (memset.c)
 *     VslIsSecureKernelRunning @ 0x1401EE648 (VslIsSecureKernelRunning.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401F8794 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpTrace @ 0x1401F87B0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401F896C (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401F8A84 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401F8B14 (IopLiveDumpTraceInterfaceStart.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403FEC1C (IopLiveDumpCaptureMemoryPages.c)
 *     IoCreateNotificationEvent @ 0x1405C0C30 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpReleaseResources @ 0x140677FBC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x14067815C (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x140678288 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406783E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 *a7)
{
  PKEVENT v10; // r15
  PKEVENT v11; // rdi
  __int64 v12; // rcx
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int inited; // edi
  PKEVENT v17; // rax
  HANDLE v18; // rsi
  HANDLE v19; // r14
  PVOID PoolWithTag; // rax
  HANDLE v21; // rax
  HANDLE v22; // rax
  __int64 v23; // rsi
  struct _KTHREAD *v24; // rcx
  __int16 v25; // ax
  __int64 v26; // rsi
  int v27; // eax
  int v28; // edx
  GUID *p_pActivityId; // r9
  GUID *v30; // r8
  char v31; // [rsp+30h] [rbp-D0h] BYREF
  bool v32; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v33; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE EventHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v36; // [rsp+50h] [rbp-B0h] BYREF
  int v37; // [rsp+54h] [rbp-ACh]
  __int64 v38; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v39; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v40; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v42; // [rsp+80h] [rbp-80h] BYREF
  GUID pActivityId; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v44; // [rsp+A0h] [rbp-60h] BYREF
  int *v45; // [rsp+C0h] [rbp-40h]
  __int64 v46; // [rsp+C8h] [rbp-38h]
  char *v47; // [rsp+D0h] [rbp-30h]
  __int64 v48; // [rsp+D8h] [rbp-28h]
  bool *v49; // [rsp+E0h] [rbp-20h]
  __int64 v50; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v51; // [rsp+F0h] [rbp-10h]
  __int64 v52; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v53; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v54; // [rsp+120h] [rbp+20h]
  __int64 v55; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v56; // [rsp+130h] [rbp+30h]
  __int64 v57; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v33 = a6;
  v37 = a1;
  EventHandle = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v39 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)&pActivityId.Data2 = 0LL;
  *(_DWORD *)&pActivityId.Data4[4] = 0;
  pActivityId.Data1 = 0;
  if ( VslIsSecureKernelRunning() )
    return 3221225506LL;
  v14 = v12;
  IopLiveDumpTraceInterfaceStart();
  if ( a7 )
    *a7 &= v14;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v31 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v31 != 1 )
  {
    inited = -1073741267;
    goto LABEL_29;
  }
  if ( (*(_DWORD *)(v33 + 24) & 0x10) != 0 )
  {
    if ( (RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition"),
          v10 = IoCreateNotificationEvent(&DestinationString, &EventHandle),
          RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition"),
          v17 = IoCreateNotificationEvent(&DestinationString, &Handle),
          v11 = v17,
          v10)
      && v10->Header.SignalState != (_DWORD)v14
      || v17 && v17->Header.SignalState != (_DWORD)v14 )
    {
      inited = -1073741248;
LABEL_13:
      v18 = EventHandle;
      v19 = Handle;
LABEL_25:
      if ( v18 )
        ZwClose(v18);
      if ( v19 )
        ZwClose(v19);
      goto LABEL_29;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x270uLL, 0x706D644Cu);
  v14 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_13;
  }
  memset(PoolWithTag, 0, 0x270uLL);
  *(_DWORD *)v14 = v37;
  *(_QWORD *)(v14 + 32) = a5;
  v21 = EventHandle;
  *(_QWORD *)(v14 + 8) = a2;
  *(_QWORD *)(v14 + 584) = v11;
  *(_QWORD *)(v14 + 560) = v21;
  v22 = Handle;
  *(_QWORD *)(v14 + 16) = a3;
  *(_QWORD *)(v14 + 24) = a4;
  v19 = 0LL;
  *(_QWORD *)(v14 + 568) = v22;
  v18 = 0LL;
  IopLiveDumpContext = v14;
  *(_QWORD *)(v14 + 576) = v10;
  EtwActivityIdControl(5u, (LPGUID)(v14 + 592));
  EtwActivityIdControl(1u, (LPGUID)(v14 + 608));
  if ( stru_140320EC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140320EC0, 0x400000000000uLL) )
    TlgWrite(&stru_140320EC0, &unk_1402A3F22, (LPCGUID)(v14 + 608), (LPCGUID)(v14 + 592), 2u, &pData);
  inited = IopLiveDumpValidateParameters(v14, v33);
  if ( inited < 0 )
    goto LABEL_29;
  if ( (*(_DWORD *)(v14 + 40) & 8) == 0 || a7 )
  {
    inited = IopLiveDumpAllocAndInitResources(v14);
    if ( inited >= 0 )
    {
      inited = IopLiveDumpCaptureMemoryPages(v14);
      goto LABEL_25;
    }
  }
  else
  {
    inited = -1073741811;
  }
LABEL_29:
  v23 = v33;
  if ( (*(_DWORD *)(v33 + 24) & 0x10) != 0 && inited == -1073741248 && IopLiveDumpIsTracingEnabled() )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
  if ( v31 )
  {
    IopLiveDumpContext = 0LL;
    ExReleaseResourceLite(&IopLiveDumpLock);
  }
  v24 = KeGetCurrentThread();
  v25 = v24->KernelApcDisable + 1;
  v24->KernelApcDisable = v25;
  if ( !v25
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v24->ApcState.ApcListHead[0].Flink != &v24->152
    && !v24->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( inited >= 0 )
  {
    if ( (*(_DWORD *)(v14 + 40) & 8) != 0 )
    {
      inited = -1073741802;
      *a7 = v14;
    }
    else
    {
      IopLiveDumpTrace();
      v26 = MEMORY[0xFFFFF78000000008];
      if ( *(_QWORD *)(v14 + 176) )
        v27 = IopLiveDumpWriteDumpFileWithHvPages(v14);
      else
        v27 = IopLiveDumpWriteDumpFile(v14);
      inited = v27;
      if ( stru_140320EC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140320EC0, 0x400000000000uLL) )
      {
        v38 = *(_QWORD *)(*(_QWORD *)(v14 + 384) + 4000LL);
        v55 = 8LL;
        v57 = 8LL;
        v54 = &v38;
        v42 = (MEMORY[0xFFFFF78000000008] - v26) / 0x2710uLL;
        v56 = &v42;
        TlgWrite(&stru_140320EC0, &unk_1402A3ED9, (LPCGUID)(v14 + 608), (LPCGUID)(v14 + 592), 4u, &v53);
      }
      IopLiveDumpTraceDumpFileWriteEnd(v14, 0LL, inited);
      v23 = v33;
      if ( inited >= 0 && (*(_DWORD *)(v14 + 80) & 2) != 0 )
        inited = 261;
    }
  }
  IopLiveDumpTraceInterfaceEnd((__int64)v24, 0LL, inited);
  if ( stru_140320EC0.LevelPlus1 > 5 && TlgKeywordOn(&stru_140320EC0, 0x400000000000uLL) )
  {
    v28 = *(_DWORD *)(v23 + 24);
    v36 = inited;
    v31 = (v28 & 8) != 0;
    v32 = (v28 & 0x10) != 0;
    v46 = 4LL;
    v48 = 1LL;
    v45 = &v36;
    v47 = &v31;
    v49 = &v32;
    v40 = (MEMORY[0xFFFFF78000000008] - v39) / 0x2710uLL;
    v50 = 1LL;
    v51 = &v40;
    v52 = 8LL;
    p_pActivityId = (GUID *)(v14 + 592);
    if ( v14 )
    {
      v30 = (GUID *)(v14 + 608);
    }
    else
    {
      p_pActivityId = &pActivityId;
      v30 = &pActivityId;
    }
    TlgWrite(&stru_140320EC0, &unk_1402A3E62, v30, p_pActivityId, 6u, &v44);
  }
  if ( v14 )
  {
    if ( (*(_DWORD *)(v14 + 40) & 8) == 0 )
      EtwActivityIdControl(2u, (LPGUID)(v14 + 592));
    if ( inited != -1073741802 )
    {
      IopLiveDumpReleaseResources(v14);
      ExFreePoolWithTag((PVOID)v14, 0x706D644Cu);
    }
  }
  return (unsigned int)inited;
}
