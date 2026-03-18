/*
 * XREFs of AlpcpInitSystem @ 0x140547BD8
 * Callers:
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     ExInitializeNPagedLookasideList @ 0x140105A8C (ExInitializeNPagedLookasideList.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExCreateHandleTable @ 0x140460B44 (ExCreateHandleTable.c)
 *     NtQuerySystemInformation @ 0x140472BA0 (NtQuerySystemInformation.c)
 *     ExInitializePagedLookasideList @ 0x1404D17DC (ExInitializePagedLookasideList.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 *     AlpcpInitializeMessageLog @ 0x140547EA0 (AlpcpInitializeMessageLog.c)
 */

__int64 AlpcpInitSystem()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KEVENT *PoolWithTag; // rax
  __int64 v2; // r8
  int v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v6[8]; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE SystemInformation[8]; // [rsp+D0h] [rbp-30h] BYREF
  int v8; // [rsp+D8h] [rbp-28h]
  int v9; // [rsp+E8h] [rbp-18h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PoolWithTag = (struct _KEVENT *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x18uLL, 0x6E496C41u);
  AlpcpDummyEvent = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    KeInitializeEvent(PoolWithTag, NotificationEvent, 1u);
    AlpcpPortListLock = 0LL;
    qword_1402E1E08 = (__int64)&AlpcpPortList;
    AlpcpPortList = (__int64)&AlpcpPortList;
    RtlInitUnicodeString(&DestinationString, L"ALPC Port");
    memset(v6, 0, 0x78uLL);
    *((_QWORD *)&v6[3] + 1) = AlpcpOpenPort;
    LOWORD(v6[0]) = 120;
    *(_QWORD *)((char *)&v6[2] + 4) = 512LL;
    BYTE2(v6[0]) = BYTE2(v6[0]) & 0xCB | 0x10;
    *(_QWORD *)&v6[4] = AlpcpClosePort;
    *((_QWORD *)&v6[4] + 1) = AlpcpDeletePort;
    HIDWORD(v6[2]) = 504;
    *(__int128 *)((char *)v6 + 12) = AlpcpPortMapping;
    DWORD2(v6[0]) = 128;
    HIDWORD(v6[1]) = 2031617;
    v3 = ObCreateObjectTypeEx(&DestinationString, v6, v2, 249LL, &AlpcPortObjectType);
    if ( v3 >= 0 )
    {
      AlpcMessageTable = (ULONG_PTR)ExCreateHandleTable(0LL, 0);
      ExInitializePagedLookasideList(
        (PPAGED_LOOKASIDE_LIST)&AlpcpLookasides,
        (PALLOCATE_FUNCTION)AlpcpAllocateMessageFunction,
        (PFREE_FUNCTION)AlpcpFreeMessageFunction,
        0,
        0x338uLL,
        0x734D6C41u,
        0x20u);
      ExInitializePagedLookasideList(
        &stru_1403177C0,
        AlpcpAllocateBuffer,
        (PFREE_FUNCTION)PspQueueApcSpecialApc,
        0,
        0x78uLL,
        0x49436C41u,
        0x20u);
      ExInitializePagedLookasideList((PPAGED_LOOKASIDE_LIST)&stru_140317840, 0LL, 0LL, 0, 0x80uLL, 0x61486C41u, 0x20u);
      ExInitializeNPagedLookasideList(&AlpcpNPLookasides, 0LL, 0LL, 0x200u, 0x20uLL, 0x65536C41u, 0x20u);
      v3 = NtQuerySystemInformation(SystemBasicInformation, SystemInformation, 0x40u, 0LL);
      if ( v3 >= 0 )
      {
        AlpcpRegionGranularity = v9;
        AlpcpViewGranularity = v8;
      }
      if ( AlpcpMessageLogEnabled )
      {
        AlpcpInitializeMessageLog(4096LL, 0x8000LL);
      }
      else
      {
        AlpcpMessageLogLock = 0LL;
        qword_1402E1E68 = (__int64)&AlpcpMessageLogListHead;
        AlpcpMessageLogListHead = (__int64)&AlpcpMessageLogListHead;
        qword_1402E1E58 = (__int64)&AlpcpFreeMessageLogListHead;
        AlpcpFreeMessageLogListHead = (__int64)&AlpcpFreeMessageLogListHead;
        qword_1402E1E88 = (__int64)&AlpcpFreeMessageSnapshotListHead;
        AlpcpFreeMessageSnapshotListHead = (__int64)&AlpcpFreeMessageSnapshotListHead;
      }
      AlpcpCompletionListDatabase = 0LL;
      qword_1402E1E38 = (__int64)&qword_1402E1E30;
      qword_1402E1E30 = (__int64)&qword_1402E1E30;
    }
  }
  else
  {
    v3 = -1073741670;
  }
  KeLeaveCriticalRegion();
  return (unsigned int)v3;
}
