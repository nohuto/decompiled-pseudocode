/*
 * XREFs of EtwpInitLoggerContext @ 0x140493C40
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 * Callees:
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     EtwpQueryUsedProcessorCount @ 0x140086EF8 (EtwpQueryUsedProcessorCount.c)
 *     KeInitializeMutex @ 0x140087460 (KeInitializeMutex.c)
 *     KeQueryMaximumProcessorCountEx @ 0x140087824 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeTimerEx @ 0x1400EEAA0 (KeInitializeTimerEx.c)
 *     KeQuerySystemTimePrecise @ 0x1400EFF50 (KeQuerySystemTimePrecise.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwpInitializeCompression @ 0x14022AA50 (EtwpInitializeCompression.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  SIZE_T v6; // rsi
  PVOID PoolWithTag; // rax
  __int64 v8; // rbx
  char *v9; // rsi
  __int64 v10; // rdx
  int v11; // eax
  __int64 v12; // rcx
  ULONG MaximumProcessorCount; // eax
  void *v15; // rax

  v2 = *(unsigned __int16 *)a1 + 1090;
  v5 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
  }
  v6 = v5 + v2;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x4C777445u);
  v8 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  memset(PoolWithTag, 0, (unsigned int)v6);
  v9 = (char *)(v8 + 1088);
  if ( v5 )
  {
    *(_QWORD *)(v8 + 872) = v9;
    v9 += v5;
  }
  memmove(v9, a1[1], *(unsigned __int16 *)a1);
  RtlInitUnicodeString((PUNICODE_STRING)(v8 + 136), (PCWSTR)v9);
  *(_DWORD *)(v8 + 12) = a2;
  *(_DWORD *)(v8 + 32) = 0xFFFF;
  *(_DWORD *)(v8 + 28) = -1072889856;
  *(_DWORD *)(v8 + 20) = -1072496640;
  *(_DWORD *)(v8 + 24) = -1072562176;
  if ( (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v8 + 300) = 1;
  else
    *(_DWORD *)(v8 + 300) = 512;
  if ( a2 < 0 && (a2 & 0x1000000) != 0 )
    *(_DWORD *)(v8 + 12) = a2 & 0x7FFFFFFF;
  if ( EtwpFileSystemReady )
    _InterlockedOr((volatile signed __int32 *)(v8 + 816), 4u);
  if ( (a2 & 0x8000) != 0 )
  {
    v15 = (void *)(v8 + 272);
LABEL_22:
    *(_QWORD *)(v8 + 264) = v15;
    goto LABEL_12;
  }
  if ( (a2 & 0x4000) != 0 )
  {
    v15 = &EtwpGlobalSequence;
    goto LABEL_22;
  }
LABEL_12:
  *(_DWORD *)(v8 + 320) = 1;
  v10 = *(_QWORD *)(*(_QWORD *)qword_140327038 + 6288LL) << 12 >> 20;
  if ( (unsigned int)v10 <= 0x200 )
  {
    *(_DWORD *)(v8 + 4) = 0x2000;
  }
  else
  {
    v11 = 0x10000;
    if ( (unsigned int)v10 <= 0x400 )
      v11 = 0x4000;
    *(_DWORD *)(v8 + 4) = v11;
  }
  *(_DWORD *)(v8 + 224) = 2 * EtwpQueryUsedProcessorCount(v8);
  if ( (a2 & 0x4000000) == 0 )
    goto LABEL_17;
  if ( EtwpInitializeCompression(v12) >= 0 )
  {
    *(_DWORD *)(v8 + 224) += 4;
LABEL_17:
    *(_DWORD *)(v8 + 236) = *(_DWORD *)(v8 + 224) + 22;
    KeQuerySystemTimePrecise((LARGE_INTEGER *)(v8 + 792));
    KeInitializeMutex((PRKMUTEX)(v8 + 632), 0);
    *(_QWORD *)(v8 + 688) = 0LL;
    *(_QWORD *)(v8 + 336) = v8 + 328;
    *(_QWORD *)(v8 + 328) = v8 + 328;
    *(_QWORD *)(v8 + 64) = v8 + 72;
    *(_QWORD *)(v8 + 72) = 0LL;
    *(_QWORD *)(v8 + 80) = v8 + 88;
    *(_QWORD *)(v8 + 88) = 0LL;
    *(_QWORD *)(v8 + 104) = v8 + 96;
    *(_QWORD *)(v8 + 96) = v8 + 96;
    *(_QWORD *)(v8 + 120) = v8 + 112;
    *(_QWORD *)(v8 + 112) = v8 + 112;
    *(_QWORD *)(v8 + 864) = v8 + 856;
    *(_QWORD *)(v8 + 856) = v8 + 856;
    *(_WORD *)(v8 + 880) = 0;
    *(_QWORD *)(v8 + 888) = 0LL;
    *(_QWORD *)(v8 + 696) = 0LL;
    KeInitializeEvent((PRKEVENT)(v8 + 456), NotificationEvent, 0);
    KeInitializeEvent((PRKEVENT)(v8 + 480), SynchronizationEvent, 0);
    KeInitializeTimerEx((PKTIMER)(v8 + 504), SynchronizationTimer);
    KeInitializeDpc((PRKDPC)(v8 + 568), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v8);
    return v8;
  }
  ExFreePoolWithTag((PVOID)v8, 0);
  return 0LL;
}
