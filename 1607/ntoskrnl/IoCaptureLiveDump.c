/*
 * XREFs of IoCaptureLiveDump @ 0x140625FE4
 * Callers:
 *     DbgkCaptureLiveKernelDump @ 0x1401B7964 (DbgkCaptureLiveKernelDump.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14061BDEC (DbgkpWerCaptureLiveFullDump.c)
 * Callees:
 *     _TlgWrite @ 0x14000A118 (_TlgWrite.c)
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 *     EtwActivityIdControl @ 0x14009F51C (EtwActivityIdControl.c)
 *     _TlgKeywordOn @ 0x14010CF88 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     IopLiveDumpIsTracingEnabled @ 0x1401CADA0 (IopLiveDumpIsTracingEnabled.c)
 *     IopLiveDumpIsUnderMemoryPressure @ 0x1401CADBC (IopLiveDumpIsUnderMemoryPressure.c)
 *     IopLiveDumpTrace @ 0x1401CADF0 (IopLiveDumpTrace.c)
 *     IopLiveDumpTraceDumpFileWriteEnd @ 0x1401CAFAC (IopLiveDumpTraceDumpFileWriteEnd.c)
 *     IopLiveDumpTraceInterfaceEnd @ 0x1401CB0C4 (IopLiveDumpTraceInterfaceEnd.c)
 *     IopLiveDumpTraceInterfaceStart @ 0x1401CB154 (IopLiveDumpTraceInterfaceStart.c)
 *     SecureDump_GetSecureDumpSettings @ 0x1401CB7FC (SecureDump_GetSecureDumpSettings.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     IopLiveDumpCaptureMemoryPages @ 0x1403DA8AC (IopLiveDumpCaptureMemoryPages.c)
 *     IoCreateNotificationEvent @ 0x14057ECC0 (IoCreateNotificationEvent.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140626760 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpReleaseResources @ 0x14062739C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpValidateParameters @ 0x140627540 (IopLiveDumpValidateParameters.c)
 *     IopLiveDumpWriteDumpFile @ 0x1406276C4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 */

__int64 __fastcall IoCaptureLiveDump(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, _QWORD *a7)
{
  PKEVENT v10; // rdi
  PKEVENT v11; // r12
  char *v12; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  int inited; // edi
  HANDLE v19; // r14
  HANDLE v20; // r15
  char *PoolWithTag; // rax
  HANDLE v22; // rax
  HANDLE v23; // rax
  __int64 v24; // r14
  _BYTE *v25; // rcx
  int v26; // eax
  __int64 v27; // rsi
  int v28; // eax
  int v29; // edx
  GUID *p_pActivityId; // r9
  GUID *v31; // r8
  char v32; // [rsp+30h] [rbp-D0h] BYREF
  bool v33; // [rsp+31h] [rbp-CFh] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  int v36; // [rsp+48h] [rbp-B8h]
  int v37; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v38; // [rsp+50h] [rbp-B0h]
  __int64 v39; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v40; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v41; // [rsp+68h] [rbp-98h]
  unsigned __int64 v42; // [rsp+70h] [rbp-90h] BYREF
  UNICODE_STRING DestinationString; // [rsp+78h] [rbp-88h] BYREF
  GUID pActivityId; // [rsp+88h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR v45; // [rsp+A0h] [rbp-60h] BYREF
  int *v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  char *v48; // [rsp+D0h] [rbp-30h]
  __int64 v49; // [rsp+D8h] [rbp-28h]
  bool *v50; // [rsp+E0h] [rbp-20h]
  __int64 v51; // [rsp+E8h] [rbp-18h]
  unsigned __int64 *v52; // [rsp+F0h] [rbp-10h]
  __int64 v53; // [rsp+F8h] [rbp-8h]
  EVENT_DATA_DESCRIPTOR v54; // [rsp+100h] [rbp+0h] BYREF
  __int64 *v55; // [rsp+120h] [rbp+20h]
  __int64 v56; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v57; // [rsp+130h] [rbp+30h]
  __int64 v58; // [rsp+138h] [rbp+38h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+140h] [rbp+40h] BYREF

  v38 = a6;
  v36 = a1;
  EventHandle = 0LL;
  v10 = 0LL;
  Handle = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v41 = MEMORY[0xFFFFF78000000008];
  pActivityId.Data1 = 0;
  *(_QWORD *)&pActivityId.Data2 = 0LL;
  *(_DWORD *)&pActivityId.Data4[4] = 0;
  if ( ForceDumpDisabled )
  {
    if ( a7 )
      *a7 = 0LL;
    return 3221225659LL;
  }
  IopLiveDumpTraceInterfaceStart();
  if ( a7 )
    *a7 = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v32 = ExAcquireResourceExclusiveLite(&IopLiveDumpLock, 0);
  if ( v32 != 1 )
  {
    inited = -1073741267;
    goto LABEL_28;
  }
  if ( (*(_DWORD *)(v38 + 24) & 0x10) != 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowNonPagedPoolCondition");
    v10 = IoCreateNotificationEvent(&DestinationString, &EventHandle);
    RtlInitUnicodeString(&DestinationString, L"\\KernelObjects\\LowMemoryCondition");
    v11 = IoCreateNotificationEvent(&DestinationString, &Handle);
    if ( IopLiveDumpIsUnderMemoryPressure((__int64)v10, (__int64)v11) )
    {
      inited = -1073741248;
LABEL_12:
      v19 = EventHandle;
      v20 = Handle;
LABEL_24:
      if ( v19 )
        ZwClose(v19);
      if ( v20 )
        ZwClose(v20);
      goto LABEL_28;
    }
  }
  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x290uLL, 0x706D644Cu);
  v12 = PoolWithTag;
  if ( !PoolWithTag )
  {
    inited = -1073741670;
    goto LABEL_12;
  }
  memset(PoolWithTag, 0, 0x290uLL);
  *(_DWORD *)v12 = v36;
  *((_QWORD *)v12 + 4) = a5;
  v22 = EventHandle;
  *((_QWORD *)v12 + 1) = a2;
  *((_QWORD *)v12 + 74) = v10;
  *((_QWORD *)v12 + 72) = v22;
  v23 = Handle;
  *((_QWORD *)v12 + 2) = a3;
  *((_QWORD *)v12 + 3) = a4;
  v20 = 0LL;
  *((_QWORD *)v12 + 73) = v23;
  v19 = 0LL;
  IopLiveDumpContext = (__int64)v12;
  *((_QWORD *)v12 + 75) = v11;
  EtwActivityIdControl(5u, (LPGUID)v12 + 38);
  EtwActivityIdControl(1u, (LPGUID)v12 + 39);
  if ( stru_1402F3560.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3560, 0x400000000000uLL) )
    TlgWrite(&stru_1402F3560, &unk_14027BB3B, (LPCGUID)v12 + 39, (LPCGUID)v12 + 38, 2u, &pData);
  inited = IopLiveDumpValidateParameters(v12, v38);
  if ( inited < 0 )
    goto LABEL_28;
  if ( (*((_DWORD *)v12 + 10) & 8) == 0 || a7 )
  {
    inited = IopLiveDumpAllocAndInitResources(v12);
    if ( inited >= 0 )
    {
      inited = IopLiveDumpCaptureMemoryPages((__int64)v12);
      goto LABEL_24;
    }
  }
  else
  {
    inited = -1073741811;
  }
LABEL_28:
  v24 = v38;
  if ( (*(_DWORD *)(v38 + 24) & 0x10) != 0 && inited == -1073741248 && IopLiveDumpIsTracingEnabled() )
    EtwWrite(IopLiveDumpEtwRegHandle, &LIVEDUMP_EVENT_MEMORY_PRESSURE_ABORT, 0LL, 0, 0LL);
  if ( v32 )
  {
    IopLiveDumpContext = 0LL;
    ExReleaseResourceLite(&IopLiveDumpLock);
  }
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v15, v16, v17);
  if ( inited >= 0 )
  {
    inited = SecureDump_GetSecureDumpSettings((__int64)(v12 + 640));
    if ( inited >= 0 )
    {
      if ( *v25 )
      {
        v26 = *((_DWORD *)v12 + 162);
        if ( !v26 || !v12[641] || *((_DWORD *)v12 + 161) != 4096 || (v26 & 0xFFF) != 0 )
          inited = -1073741823;
      }
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
          v27 = MEMORY[0xFFFFF78000000008];
          if ( *((_QWORD *)v12 + 22) )
            v28 = IopLiveDumpWriteDumpFileWithHvPages((__int64)v12);
          else
            v28 = IopLiveDumpWriteDumpFile((__int64)v12);
          inited = v28;
          if ( stru_1402F3560.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3560, 0x400000000000uLL) )
          {
            v39 = *(_QWORD *)(*((_QWORD *)v12 + 48) + 4000LL);
            v56 = 8LL;
            v58 = 8LL;
            v55 = &v39;
            v40 = (MEMORY[0xFFFFF78000000008] - v27) / 0x2710uLL;
            v57 = &v40;
            TlgWrite(&stru_1402F3560, &unk_14027BAF2, (LPCGUID)v12 + 39, (LPCGUID)v12 + 38, 4u, &v54);
          }
          IopLiveDumpTraceDumpFileWriteEnd((__int64)v12, 0LL, inited);
          if ( inited >= 0 && (*((_DWORD *)v12 + 20) & 2) != 0 )
            inited = 261;
        }
      }
    }
  }
  IopLiveDumpTraceInterfaceEnd((__int64)v25, 0LL, inited);
  if ( stru_1402F3560.LevelPlus1 > 5 && TlgKeywordOn(&stru_1402F3560, 0x400000000000uLL) )
  {
    v29 = *(_DWORD *)(v24 + 24);
    v37 = inited;
    v32 = (v29 & 8) != 0;
    v33 = (v29 & 0x10) != 0;
    v47 = 4LL;
    v49 = 1LL;
    v46 = &v37;
    v48 = &v32;
    v50 = &v33;
    v42 = (MEMORY[0xFFFFF78000000008] - v41) / 0x2710uLL;
    v51 = 1LL;
    v52 = &v42;
    v53 = 8LL;
    p_pActivityId = (GUID *)(v12 + 608);
    if ( v12 )
    {
      v31 = (GUID *)(v12 + 624);
    }
    else
    {
      p_pActivityId = &pActivityId;
      v31 = &pActivityId;
    }
    TlgWrite(&stru_1402F3560, &unk_14027BA7B, v31, p_pActivityId, 6u, &v45);
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
