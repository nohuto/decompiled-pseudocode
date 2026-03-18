/*
 * XREFs of NtCreateJobObject @ 0x140487354
 * Callers:
 *     <none>
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     PoEnergyEstimationEnabled @ 0x14002D424 (PoEnergyEstimationEnabled.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     ExInitializeResourceLite @ 0x14009E260 (ExInitializeResourceLite.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObInsertObject @ 0x14044E94C (ObInsertObject.c)
 *     ObCreateObject @ 0x14044EE00 (ObCreateObject.c)
 *     ExUuidCreate @ 0x140487608 (ExUuidCreate.c)
 *     PspUnlockJobListExclusive @ 0x140487758 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x140487794 (PspLockJobListExclusive.c)
 *     EtwTraceJob @ 0x140660A24 (EtwTraceJob.c)
 */

NTSTATUS __stdcall NtCreateJobObject(PHANDLE JobHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  unsigned __int64 v3; // rbp
  PHANDLE v6; // rsi
  struct _KTHREAD *CurrentThread; // r14
  char PreviousMode; // di
  unsigned int v9; // ebx
  bool v10; // r15
  NTSTATUS Object; // edi
  size_t v12; // r8
  __int64 v13; // rbx
  __int64 **v14; // rcx
  _BYTE v16[48]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL;
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
  v10 = PoEnergyEstimationEnabled();
  if ( v10 )
    v9 = 1464;
  Object = ObCreateObject(
             PreviousMode,
             PsJobType,
             (__int64)ObjectAttributes,
             PreviousMode,
             0,
             v9,
             0,
             v9,
             (_QWORD *)(v3 + 8));
  if ( Object < 0 )
  {
    v13 = *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  else
  {
    v12 = v9;
    v13 = *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    memset((void *)v13, 0, v12);
    *(_QWORD *)(v13 + 1072) = v13;
    *(_QWORD *)(v13 + 48) = v13 + 40;
    *(_QWORD *)(v13 + 40) = v13 + 40;
    *(_QWORD *)(v13 + 1056) = v13 + 1048;
    *(_QWORD *)(v13 + 1048) = v13 + 1048;
    *(_QWORD *)(v13 + 1040) = v13 + 1032;
    *(_QWORD *)(v13 + 1032) = v13 + 1032;
    *(_QWORD *)(v13 + 1088) = v13 + 1080;
    *(_QWORD *)(v13 + 1080) = v13 + 1080;
    *(_QWORD *)(v13 + 1224) = v13 + 1216;
    *(_QWORD *)(v13 + 1216) = v13 + 1216;
    KeInitializeEvent((PRKEVENT)v13, NotificationEvent, 0);
    *(_QWORD *)(v13 + 1024) = 0LL;
    *(_QWORD *)(v13 + 1208) = 0LL;
    *(_QWORD *)(v13 + 264) = 1310721LL;
    memset((void *)(v13 + 272), 0, 0xA0uLL);
    *(_QWORD *)(v13 + 616) = 1310721LL;
    memset((void *)(v13 + 624), 0, 0xA0uLL);
    *(_QWORD *)(v13 + 1264) = v13 + 1256;
    *(_QWORD *)(v13 + 1256) = v13 + 1256;
    *(_QWORD *)(v13 + 1272) = 0LL;
    if ( v10 )
      *(_QWORD *)(v13 + 1304) = v13 + 1320;
    *(_DWORD *)(v13 + 480) = -1;
    *(_DWORD *)(v13 + 884) = 16382;
    *(_DWORD *)(v13 + 860) = 10;
    *(_DWORD *)(v13 + 484) = 5;
    ExInitializeResourceLite((PERESOURCE)(v13 + 56));
    PspLockJobListExclusive(CurrentThread);
    v14 = (__int64 **)qword_1406FB330;
    *(_QWORD *)(v13 + 24) = &PspJobList;
    *(_QWORD *)(v13 + 32) = v14;
    if ( *v14 != &PspJobList )
      __fastfail(3u);
    *v14 = (__int64 *)(v13 + 24);
    qword_1406FB330 = v13 + 24;
    PspUnlockJobListExclusive(CurrentThread);
    *(_DWORD *)(v13 + 1296) |= 0x200000u;
    *(_DWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_DWORD *)(v13 + 1296);
    while ( 1 )
    {
      Object = ExUuidCreate((UUID *)(v13 + 1232));
      if ( Object != -1073741267 )
        break;
      *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = -10000LL;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)(v3 + 24));
    }
    if ( Object == 1073872982 )
      Object = 0;
    if ( Object < 0 )
    {
      ObfDereferenceObject((PVOID)v13);
    }
    else
    {
      Object = ObInsertObject((PVOID)v13, 0LL, DesiredAccess, 0, 0LL, (PHANDLE)(v3 + 16));
      if ( Object >= 0 )
        *v6 = *(HANDLE *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(
      v13,
      *(_QWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
      *(_DWORD *)(((unsigned __int64)v16 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
      Object,
      1824);
  return Object;
}
