/*
 * XREFs of AlpcpInitSystem @ 0x1405BEC58
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExInitializeNPagedLookasideList @ 0x140137DA8 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     NtQuerySystemInformation @ 0x14042E740 (NtQuerySystemInformation.c)
 *     ExInitializePagedLookasideList @ 0x1404F9D70 (ExInitializePagedLookasideList.c)
 *     ExCreateHandleTable @ 0x140523600 (ExCreateHandleTable.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x1405BEF50 (AlpcpInitializeMessageLog.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *PoolWithTag; // rax
  __int64 v2; // r8
  int v3; // ebx
  struct _KTHREAD *v4; // rcx
  __int16 v5; // ax
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v8[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SystemInformation[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v10; // [rsp+D8h] [rbp-28h]
  int v11; // [rsp+E8h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E496C41u);
  AlpcpDummyEvent = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeEvent(PoolWithTag, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_140332268 = (__int64)&AlpcpPortList;
    AlpcpPortList = (__int64)&AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v8, 0, 0x78uLL);
    *((_QWORD *)&v8[3] + 1) = AlpcpOpenPort;
    LOWORD(v8[0]) = 120;
    *(_QWORD *)((char *)&v8[2] + 4) = 512LL;
    BYTE2(v8[0]) = BYTE2(v8[0]) & 0xCB | 0x10;
    *(_QWORD *)&v8[4] = AlpcpClosePort;
    *((_QWORD *)&v8[4] + 1) = AlpcpDeletePort;
    HIDWORD(v8[2]) = 504;
    DWORD2(v8[0]) = 128;
    *(__int128 *)((char *)v8 + 12) = AlpcpPortMapping;
    HIDWORD(v8[1]) = 2031617;
    v3 = ObCreateObjectTypeEx(&DestinationString, v8, v2, 249LL, &AlpcPortObjectType);
    if ( v3 >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)&AlpcpLookasides,
        (PALLOCATE_FUNCTION)AlpcpAllocateMessageFunction,
        (PFREE_FUNCTION)AlpcpFreeMessageFunction,
        0,
        0x338uLL,
        0x734D6C41u,
        0x20u);
      ExInitializePagedLookasideList(
        &stru_140367A00,
        AlpcpAllocateBuffer,
        (PFREE_FUNCTION)PspQueueApcSpecialApc,
        0,
        0x80uLL,
        0x49436C41u,
        0x20u);
      ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140367A80, 0LL, 0LL, 0, 0x80uLL, 0x61486C41u, 0x20u);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v3 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v3 >= 0 )
      {
        AlpcpRegionGranularity = v11;
        AlpcpViewGranularity = v10;
      }
      if ( AlpcpMessageLogEnabled )
      {
        AlpcpInitializeMessageLog(4096LL, 0x8000LL);
      }
      else
      {
        AlpcpMessageLogLock = 0LL;
        qword_1403322C8 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_1403322B8 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_1403322E8 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_140332298 = (__int64)&qword_140332290;
      qword_140332290 = (__int64)&qword_140332290;
    }
  }
  else
  {
    v3 = -1073741670;
  }
  v4 = KeGetCurrentThread();
  v5 = v4->KernelApcDisable + 1;
  v4->KernelApcDisable = v5;
  if ( !v5
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v4->ApcState.ApcListHead[0].Flink != &v4->152
    && !v4->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v3;
}
