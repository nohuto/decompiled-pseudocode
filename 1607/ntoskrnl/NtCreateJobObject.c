/*
 * XREFs of NtCreateJobObject @ 0x14051A4B8
 * Callers:
 *     <none>
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     PoEnergyEstimationEnabled @ 0x1400EFEA4 (PoEnergyEstimationEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObInsertObject @ 0x1404702F4 (ObInsertObject.c)
 *     ObCreateObject @ 0x1404706EC (ObCreateObject.c)
 *     ExCreateHandleEx @ 0x1404F0B70 (ExCreateHandleEx.c)
 *     PspIoRateEntryInitialize @ 0x14051A7D0 (PspIoRateEntryInitialize.c)
 *     ExUuidCreate @ 0x14051A810 (ExUuidCreate.c)
 *     PspUnlockJobListExclusive @ 0x14051A960 (PspUnlockJobListExclusive.c)
 *     PspLockJobListExclusive @ 0x14051A99C (PspLockJobListExclusive.c)
 *     EtwTraceJob @ 0x1406A18D4 (EtwTraceJob.c)
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
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 Handle; // rax
  _BYTE v18[48]; // [rsp+C0h] [rbp+C0h] BYREF

  v3 = (unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL;
  v6 = JobHandle;
  *(_QWORD *)(v3 + 8) = 0LL;
  *(_QWORD *)(v3 + 16) = 0LL;
  *(_DWORD *)(v3 + 4) = 0;
  CurrentThread = KeGetCurrentThread();
  PreviousMode = CurrentThread->PreviousMode;
  if ( PreviousMode )
  {
    if ( (unsigned __int64)JobHandle >= 0x7FFFFFFF0000LL )
      JobHandle = (PHANDLE)0x7FFFFFFF0000LL;
    *JobHandle = *JobHandle;
  }
  *v6 = 0LL;
  v9 = 1544;
  v10 = PoEnergyEstimationEnabled();
  if ( v10 )
    v9 = 1688;
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
    v13 = *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
  }
  else
  {
    v12 = v9;
    v13 = *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
    memset((void *)v13, 0, v12);
    *(_QWORD *)(v13 + 1072) = v13;
    *(_QWORD *)(v13 + 1328) = v13;
    *(_QWORD *)(v13 + 48) = v13 + 40;
    *(_QWORD *)(v13 + 40) = v13 + 40;
    *(_QWORD *)(v13 + 1048) = v13 + 1040;
    *(_QWORD *)(v13 + 1040) = v13 + 1040;
    *(_QWORD *)(v13 + 1032) = v13 + 1024;
    *(_QWORD *)(v13 + 1024) = v13 + 1024;
    *(_QWORD *)(v13 + 1088) = v13 + 1080;
    *(_QWORD *)(v13 + 1080) = v13 + 1080;
    *(_QWORD *)(v13 + 1128) = v13 + 1120;
    *(_QWORD *)(v13 + 1120) = v13 + 1120;
    KeInitializeEvent((PRKEVENT)v13, NotificationEvent, 0);
    *(_QWORD *)(v13 + 1016) = 0LL;
    *(_QWORD *)(v13 + 1112) = 0LL;
    *(_QWORD *)(v13 + 264) = 1310721LL;
    memset((void *)(v13 + 272), 0, 0xA0uLL);
    *(_QWORD *)(v13 + 616) = 1310721LL;
    memset((void *)(v13 + 624), 0, 0xA0uLL);
    *(_QWORD *)(v13 + 1272) = v13 + 1264;
    *(_QWORD *)(v13 + 1264) = v13 + 1264;
    *(_QWORD *)(v13 + 1280) = 0LL;
    if ( v10 )
      *(_QWORD *)(v13 + 1312) = v13 + 1544;
    *(_DWORD *)(v13 + 480) = -1;
    *(_DWORD *)(v13 + 876) = 16382;
    *(_QWORD *)(v13 + 1504) = 1LL;
    *(_DWORD *)(v13 + 852) = 10;
    *(_DWORD *)(v13 + 484) = 5;
    ExInitializeResourceLite((PERESOURCE)(v13 + 56));
    PspLockJobListExclusive(CurrentThread);
    v14 = (_QWORD *)(v13 + 24);
    v15 = (_QWORD *)qword_140747310;
    if ( *(__int64 **)qword_140747310 != &PspJobList )
      __fastfail(3u);
    *v14 = &PspJobList;
    *(_QWORD *)(v13 + 32) = v15;
    *v15 = v14;
    qword_140747310 = v13 + 24;
    PspUnlockJobListExclusive(CurrentThread);
    *(_DWORD *)(v13 + 1304) |= 0x200000u;
    *(_DWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = *(_DWORD *)(v13 + 1304);
    while ( 1 )
    {
      Object = ExUuidCreate((UUID *)(v13 + 1240));
      if ( Object != -1073741267 )
        break;
      *(_QWORD *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = -10000LL;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)(v3 + 24));
    }
    if ( Object == 1073872982 )
      Object = 0;
    if ( Object >= 0 )
    {
      Handle = ExCreateHandleEx(PspUniqueJobIdTable, v13, 0, 0, 0LL);
      if ( Handle )
        *(_DWORD *)(v13 + 1236) = Handle;
      else
        Object = -1073741670;
    }
    PspIoRateEntryInitialize(v13 + 1392);
    *(_QWORD *)(v13 + 1456) = 0LL;
    *(_QWORD *)(v13 + 1464) = 0LL;
    *(_QWORD *)(v13 + 1496) = 0LL;
    if ( Object < 0 )
    {
      ObfDereferenceObject((PVOID)v13);
    }
    else
    {
      Object = ObInsertObject((PVOID)v13, 0LL, DesiredAccess, 0, 0LL, (PHANDLE)(v3 + 16));
      if ( Object >= 0 )
        *v6 = *(HANDLE *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
    }
  }
  if ( (PerfGlobalGroupMask & 0x80000) != 0 )
    EtwTraceJob(
      v13,
      *(unsigned int *)(((unsigned __int64)v18 & 0xFFFFFFFFFFFFFFC0uLL) + 4),
      (unsigned int)Object,
      1824LL);
  return Object;
}
