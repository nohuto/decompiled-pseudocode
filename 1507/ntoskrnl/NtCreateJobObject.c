/*
 * XREFs of NtCreateJobObject @ 0x1404EB86C
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializeResourceLite @ 0x1400155B0 (ExInitializeResourceLite.c)
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObInsertObject @ 0x140471094 (ObInsertObject.c)
 *     ObCreateObject @ 0x140473208 (ObCreateObject.c)
 *     ExUuidCreate @ 0x1404EBB90 (ExUuidCreate.c)
 *     EtwTraceJob @ 0x1406E3A0C (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  unsigned __int64 v3; // rbp
  int v4; // r12d
  PHANDLE v6; // r14
  struct _KTHREAD *CurrentThread; // rdi
  char PreviousMode; // bl
  unsigned int v9; // esi
  int v10; // ecx
  int v11; // r9d
  bool v12; // r15
  NTSTATUS Object; // ebx
  __int64 v14; // rbx
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 *v20; // rax
  __int64 **v21; // rcx
  __int16 v22; // ax
  UUID *v23; // rcx
  UUID *v24; // rdi
  void *v25; // rcx
  _BYTE v27[48]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL;
  v4 = (int)ObjectAttributes;
  v6 = JobHandle;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_DWORD *)(v3 + 4) = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)JobHandle >= MmUserProbeAddress )
      JobHandle = (PHANDLE)MmUserProbeAddress;
    *JobHandle = *JobHandle;
  }
  *v6 = 0LL;
  v9 = 1320;
  v12 = PoEnergyEstimationEnabled();
  if ( v12 )
    v9 = 1464;
  LOBYTE(v11) = PreviousMode;
  LOBYTE(v10) = PreviousMode;
  Object = ObCreateObject(v10, (int)PsJobType, v4, v11);
  if ( Object >= 0 )
  {
    v14 = *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    memset((void *)v14, 0, v9);
    *(_QWORD *)(v14 + 1072) = v14;
    *(_QWORD *)(v14 + 48) = v14 + 40;
    *(_QWORD *)(v14 + 40) = v14 + 40;
    *(_QWORD *)(v14 + 1056) = v14 + 1048;
    *(_QWORD *)(v14 + 1048) = v14 + 1048;
    *(_QWORD *)(v14 + 1040) = v14 + 1032;
    *(_QWORD *)(v14 + 1032) = v14 + 1032;
    *(_QWORD *)(v14 + 1088) = v14 + 1080;
    *(_QWORD *)(v14 + 1080) = v14 + 1080;
    *(_QWORD *)(v14 + 1224) = v14 + 1216;
    *(_QWORD *)(v14 + 1216) = v14 + 1216;
    KeInitializeEvent((PRKEVENT)v14, NotificationEvent, 0);
    *(_QWORD *)(v14 + 1024) = 0LL;
    *(_QWORD *)(v14 + 1208) = 0LL;
    *(_QWORD *)(v14 + 264) = 1310721LL;
    memset((void *)(v14 + 272), 0, 0xA0uLL);
    *(_QWORD *)(v14 + 616) = 1310721LL;
    memset((void *)(v14 + 624), 0, 0xA0uLL);
    *(_QWORD *)(v14 + 1264) = v14 + 1256;
    *(_QWORD *)(v14 + 1256) = v14 + 1256;
    *(_QWORD *)(v14 + 1272) = 0LL;
    if ( v12 )
      *(_QWORD *)(v14 + 1304) = v14 + 1320;
    *(_DWORD *)(v14 + 480) = -1;
    *(_DWORD *)(v14 + 884) = 8190;
    *(_DWORD *)(v14 + 860) = 10;
    *(_DWORD *)(v14 + 484) = 5;
    ExInitializeResourceLite((PERESOURCE)(v14 + 56));
    --CurrentThread->SpecialApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)&PspJobListLock, 0LL, 0LL, v15);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&PspJobListLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&PspJobListLock, v16, (ULONG_PTR)&PspJobListLock, v17);
    if ( v18 )
      *(_BYTE *)(v18 + 26) |= 1u;
    v20 = (__int64 *)(*(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8) + 24LL);
    v21 = (__int64 **)qword_14077E318;
    *v20 = (__int64)&PspJobList;
    v20[1] = (__int64)v21;
    if ( *v21 != &PspJobList )
      __fastfail(3u);
    *v21 = v20;
    qword_14077E318 = (__int64)v20;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PspJobListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PspJobListLock);
    KeAbPostRelease((ULONG_PTR)&PspJobListLock);
    v22 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v22;
    if ( !v22
      && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    {
      KiCheckForKernelApcDelivery();
    }
    v23 = *(UUID **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    v23[81].Data1 |= 0x200000u;
    *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v23[81].Data1;
    v24 = v23 + 77;
    while ( 1 )
    {
      Object = ExUuidCreate(v24);
      if ( Object != -1073741267 )
        break;
      *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = -10000LL;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)(v3 + 24));
    }
    if ( Object == 1073872982 )
      Object = 0;
    v25 = *(void **)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    if ( Object < 0 )
    {
      ObfDereferenceObject(v25);
    }
    else
    {
      Object = ObInsertObject(v25, 0LL, DesiredAccess, 0, 0LL, (PHANDLE)(v3 + 16));
      if ( Object >= 0 )
        *v6 = *(HANDLE *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(
      *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 8),
      *(_QWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      *(_DWORD *)(((unsigned __int64)v27 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
      Object,
      1824);
  return Object;
}
