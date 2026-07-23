/*
 * XREFs of AlpcpInitSystem @ 0x14057C1B8
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     ExInitializeNPagedLookasideList @ 0x140111160 (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExInitializePagedLookasideList @ 0x1403E4DC0 (ExInitializePagedLookasideList.c)
 *     NtQuerySystemInformation @ 0x1404143A0 (NtQuerySystemInformation.c)
 *     ExCreateHandleTable @ 0x1404ACEEC (ExCreateHandleTable.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x14057C480 (AlpcpInitializeMessageLog.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *PoolWithTag; // rax
  int v2; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v5[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SystemInformation[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v7; // [rsp+D8h] [rbp-28h]
  int v8; // [rsp+E8h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E496C41u);
  AlpcpDummyEvent = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeEvent(PoolWithTag, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_140307318 = (__int64)&AlpcpPortList;
    AlpcpPortList = (__int64)&AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v5, 0, 0x78uLL);
    *((_QWORD *)&v5[3] + 1) = AlpcpOpenPort;
    LOWORD(v5[0]) = 120;
    *(_QWORD *)((char *)&v5[2] + 4) = 512LL;
    BYTE2(v5[0]) = BYTE2(v5[0]) & 0xCB | 0x10;
    *(_QWORD *)&v5[4] = AlpcpClosePort;
    *((_QWORD *)&v5[4] + 1) = AlpcpDeletePort;
    HIDWORD(v5[2]) = 504;
    DWORD2(v5[0]) = 128;
    *(__int128 *)((char *)v5 + 12) = AlpcpPortMapping;
    HIDWORD(v5[1]) = 2031617;
    v2 = ObCreateObjectTypeEx(&DestinationString, v5, 0LL, 249LL, &AlpcPortObjectType);
    if ( v2 >= 0 )
    {
      AlpcMessageTable = ExCreateHandleTable(0LL, 0LL);
      ExInitializePagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)&AlpcpLookasides,
        (PALLOCATE_FUNCTION)AlpcpAllocateMessageFunction,
        (PFREE_FUNCTION)AlpcpFreeMessageFunction,
        0,
        0x340uLL,
        0x734D6C41u,
        0x20u);
      ExInitializePagedLookasideList(
        &stru_14033B500,
        AlpcpAllocateBuffer,
        (PFREE_FUNCTION)PspQueueApcSpecialApc,
        0,
        0x80uLL,
        0x49436C41u,
        0x20u);
      ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_14033B580, 0LL, 0LL, 0, 0x80uLL, 0x61486C41u, 0x20u);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v2 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v2 >= 0 )
      {
        AlpcpRegionGranularity = v8;
        AlpcpViewGranularity = v7;
      }
      if ( AlpcpMessageLogEnabled )
      {
        AlpcpInitializeMessageLog(4096LL, 0x8000LL);
      }
      else
      {
        AlpcpMessageLogLock = 0LL;
        qword_140307388 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_140307378 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_1403073A8 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_140307358 = (__int64)&qword_140307350;
      qword_140307350 = (__int64)&qword_140307350;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v2;
}
