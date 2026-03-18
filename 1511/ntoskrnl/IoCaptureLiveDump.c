/*
 * XREFs of IoCaptureLiveDump @ 0x1405FC30C
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401ABBD4 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x1405F1AE0 (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     _TlgKeywordOn @ 0x1400923CC (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x140092474 (_TlgWrite.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     EtwActivityIdControl @ 0x1400E48B0 (EtwActivityIdControl.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401BCED4 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1401BCEF0 (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTrace @ 0x1401BCF24 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401BD0E0 (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401BD1F8 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401BD288 (IopLiveDumpTraceInterfaceStart.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403AE820 (IopLiveDumpCaptureMemoryPages.c)
 *     IoCreateNotificationEvent @ 0x140549770 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpReleaseResources @ 0x1405FD674 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x1405FD818 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x1405FD944 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1405FDA9C (IopLiveDumpWriteDumpFileWithHvPages.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  PKEVENT v10; // rdi
  PKEVENT v11; // r12
  char *v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int inited; // edi
  HANDLE v15; // rsi
  HANDLE v16; // r14
  char *PoolWithTag; // rax
  HANDLE v18; // rax
  HANDLE v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  __int64 v22; // rsi
  int v23; // eax
  int v24; // edx
  GUID *p_pActivityId; // r9
  GUID *v26; // r8
  char v28; // [rsp+30h] [rbp-D0h] BYREF
  bool v29; // [rsp+31h] [rbp-CFh] BYREF
  __int64 v30; // [rsp+38h] [rbp-C8h]
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE EventHandle; // [rsp+48h] [rbp-B8h] BYREF
  int v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+54h] [rbp-ACh]
  __int64 v35; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v36; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v37; // [rsp+68h] [rbp-98h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v39; // [rsp+80h] [rbp-80h] BYREF
  GUID pActivityId; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v41; // [rsp+A0h] [rbp-60h] BYREF
  int *v42; // [rsp+C0h] [rbp-40h]
  __int64 v43; // [rsp+C8h] [rbp-38h]
  char *v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+D8h] [rbp-28h]
  bool *v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v50; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v51; // [rsp+120h] [rbp+20h]
  __int64 v52; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v53; // [rsp+130h] [rbp+30h]
  __int64 v54; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v30 = a6;
  v34 = a1;
  EventHandle = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v36 = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)&pActivityId.Data2 = 0LL;
  *(_DWORD *)&pActivityId.Data4[4] = 0;
  pActivityId.Data1 = 0;
  IopLiveDumpTraceInterfaceStart();
  if ( a7 )
    *a7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v28 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v28 != 1 )
  {
    inited = -1073741267;
    goto LABEL_24;
  }
  if ( (*(_DWORD *)(v30 + 24) & 0x10) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
    v10 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
    v11 = IoCreateNotificationEvent(&DestinationString, &Handle);
    if ( IopLiveDumpIsUnderMemoryPressure((__int64)v10, (__int64)v11) )
    {
      inited = -1073741248;
LABEL_8:
      v15 = EventHandle;
      v16 = Handle;
LABEL_20:
      if ( v15 )
        ZwClose(v15);
      if ( v16 )
        ZwClose(v16);
      goto LABEL_24;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x280uLL, 0x706D644Cu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_8;
  }
  memset(PoolWithTag, 0, 0x280uLL);
  *(_DWORD *)v12 = v34;
  *((_QWORD *)v12 + 4) = a5;
  v18 = EventHandle;
  *((_QWORD *)v12 + 1) = a2;
  *((_QWORD *)v12 + 74) = v10;
  *((_QWORD *)v12 + 72) = v18;
  v19 = Handle;
  *((_QWORD *)v12 + 2) = a3;
  *((_QWORD *)v12 + 3) = a4;
  v16 = 0LL;
  *((_QWORD *)v12 + 73) = v19;
  v15 = 0LL;
  IopLiveDumpContext = (__int64)v12;
  *((_QWORD *)v12 + 75) = v11;
  EtwActivityIdControl(5u, (LPGUID)v12 + 38);
  EtwActivityIdControl(1u, (LPGUID)v12 + 39);
  if ( stru_1402D1D70.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402D1D70, 0x400000000000uLL) )
    TlgWrite(&stru_1402D1D70, &unk_140253B6A, (LPCGUID)v12 + 39, (LPCGUID)v12 + 38, 2u, &pData);
  inited = IopLiveDumpValidateParameters(v12, v30);
  if ( inited >= 0 )
  {
    if ( (*((_DWORD *)v12 + 10) & 8) != 0 && !a7 )
    {
      inited = -1073741811;
      goto LABEL_24;
    }
    inited = IopLiveDumpAllocAndInitResources(v12);
    if ( inited < 0 )
      goto LABEL_24;
    inited = IopLiveDumpCaptureMemoryPages((__int64)v12);
    goto LABEL_20;
  }
LABEL_24:
  v20 = v30;
  if ( (*(_DWORD *)(v30 + 24) & 0x10) != 0 && inited == -1073741248 && IopLiveDumpIsTracingEnabled() )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
  if ( v28 )
  {
    IopLiveDumpContext = 0LL;
    ExReleaseResourceLite(&IopLiveDumpLock);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( inited >= 0 )
  {
    if ( (*((_DWORD *)v12 + 10) & 8) != 0 )
    {
      inited = -1073741802;
      *a7 = v12;
    }
    else
    {
      IopLiveDumpTrace();
      v22 = MEMORY[0xFFFFF78000000008];
      if ( *((_QWORD *)v12 + 22) )
        v23 = IopLiveDumpWriteDumpFileWithHvPages(v12);
      else
        v23 = IopLiveDumpWriteDumpFile(v12);
      inited = v23;
      if ( stru_1402D1D70.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402D1D70, 0x400000000000uLL) )
      {
        v35 = *(_QWORD *)(*((_QWORD *)v12 + 48) + 4000LL);
        v52 = 8LL;
        v54 = 8LL;
        v51 = &v35;
        v39 = (MEMORY[0xFFFFF78000000008] - v22) / 0x2710uLL;
        v53 = &v39;
        TlgWrite(&stru_1402D1D70, &unk_140253B21, (LPCGUID)v12 + 39, (LPCGUID)v12 + 38, 4u, &v50);
      }
      IopLiveDumpTraceDumpFileWriteEnd((__int64)v12, 0LL, inited);
      v20 = v30;
      if ( inited >= 0 && (*((_DWORD *)v12 + 20) & 2) != 0 )
        inited = 261;
    }
  }
  IopLiveDumpTraceInterfaceEnd(v21, 0LL, inited);
  if ( stru_1402D1D70.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402D1D70, 0x400000000000uLL) )
  {
    v24 = *(_DWORD *)(v20 + 24);
    v33 = inited;
    v28 = (v24 & 8) != 0;
    v29 = (v24 & 0x10) != 0;
    v43 = 4LL;
    v45 = 1LL;
    v42 = &v33;
    v44 = &v28;
    v46 = &v29;
    v37 = (MEMORY[0xFFFFF78000000008] - v36) / 0x2710uLL;
    v47 = 1LL;
    v48 = &v37;
    v49 = 8LL;
    p_pActivityId = (GUID *)(v12 + 608);
    if ( v12 )
    {
      v26 = (GUID *)(v12 + 624);
    }
    else
    {
      p_pActivityId = &pActivityId;
      v26 = &pActivityId;
    }
    TlgWrite(&stru_1402D1D70, &unk_140253AAA, v26, p_pActivityId, 6u, &v41);
  }
  if ( v12 )
  {
    if ( (*((_DWORD *)v12 + 10) & 8) == 0 )
      EtwActivityIdControl(2u, (LPGUID)v12 + 38);
    if ( inited != -1073741802 )
    {
      IopLiveDumpReleaseResources(v12);
      ExFreePoolWithTag(v12, 0x706D644Cu);
    }
  }
  return (unsigned int)inited;
}
