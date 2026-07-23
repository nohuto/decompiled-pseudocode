/*
 * XREFs of EtwpInitLoggerContext @ 0x1404CA828
 * Callers:
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     KeInitializeTimerEx @ 0x14002C018 (KeInitializeTimerEx.c)
 *     KeQuerySystemTimePrecise @ 0x14002D4D0 (KeQuerySystemTimePrecise.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeInitializeDpc @ 0x140093330 (KeInitializeDpc.c)
 *     EtwpQueryUsedProcessorCount @ 0x14009CFC8 (EtwpQueryUsedProcessorCount.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     KeInitializeMutex @ 0x1400F4838 (KeInitializeMutex.c)
 *     MmGetNumberOfPhysicalPages @ 0x1400F4844 (MmGetNumberOfPhysicalPages.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  SIZE_T v6; // rsi
  PVOID result; // rax
  __int64 v8; // rbx
  char *v9; // rsi
  unsigned __int64 v10; // rcx
  int v11; // r8d
  unsigned int v12; // r9d
  int v13; // eax
  int v14; // eax
  ULONG MaximumProcessorCount; // eax
  void *v16; // rax

  v2 = *(unsigned __int16 *)a1 + 914;
  v5 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
  }
  v6 = v5 + v2;
  result = ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v6, 0x4C777445u);
  v8 = (__int64)result;
  if ( result )
  {
    memset(result, 0, (unsigned int)v6);
    v9 = (char *)(v8 + 912);
    if ( v5 )
    {
      *(_QWORD *)(v8 + 888) = v9;
      v9 += v5;
    }
    memmove(v9, a1[1], *(unsigned __int16 *)a1);
    RtlInitUnicodeString((PUNICODE_STRING)(v8 + 152), (PCWSTR)v9);
    *(_DWORD *)(v8 + 12) = a2;
    *(_DWORD *)(v8 + 32) = 0xFFFF;
    *(_DWORD *)(v8 + 28) = -1072889856;
    *(_DWORD *)(v8 + 20) = -1072496640;
    *(_DWORD *)(v8 + 24) = -1072562176;
    if ( (a2 & 0x1000000) != 0 )
      *(_DWORD *)(v8 + 316) = 1;
    else
      *(_DWORD *)(v8 + 316) = 512;
    if ( a2 < 0 && (a2 & 0x1000000) != 0 )
      *(_DWORD *)(v8 + 12) = a2 & 0x7FFFFFFF;
    if ( EtwpFileSystemReady )
      _InterlockedOr((volatile signed __int32 *)(v8 + 832), 4u);
    if ( (a2 & 0x8000) != 0 )
    {
      v16 = (void *)(v8 + 288);
    }
    else
    {
      if ( (a2 & 0x4000) == 0 )
      {
LABEL_12:
        *(_DWORD *)(v8 + 336) = 1;
        v10 = (unsigned __int64)(MmGetNumberOfPhysicalPages(0) << 12) >> 20;
        if ( (unsigned int)v10 <= v12 )
        {
          *(_DWORD *)(v8 + 4) = 0x2000;
        }
        else
        {
          v13 = 0x10000;
          if ( (unsigned int)v10 <= 0x400 )
            v13 = v11;
          *(_DWORD *)(v8 + 4) = v13;
        }
        v14 = 2 * EtwpQueryUsedProcessorCount(v8);
        *(_DWORD *)(v8 + 240) = v14;
        *(_DWORD *)(v8 + 252) = v14 + 22;
        KeQuerySystemTimePrecise((LARGE_INTEGER *)(v8 + 808));
        KeInitializeMutex((PRKMUTEX)(v8 + 648), 0);
        *(_QWORD *)(v8 + 704) = 0LL;
        *(_QWORD *)(v8 + 352) = v8 + 344;
        *(_QWORD *)(v8 + 344) = v8 + 344;
        *(_QWORD *)(v8 + 64) = v8 + 80;
        *(_QWORD *)(v8 + 72) = v8 + 80;
        *(_QWORD *)(v8 + 88) = v8 + 104;
        *(_QWORD *)(v8 + 96) = v8 + 104;
        *(_QWORD *)(v8 + 120) = v8 + 112;
        *(_QWORD *)(v8 + 112) = v8 + 112;
        *(_QWORD *)(v8 + 136) = v8 + 128;
        *(_QWORD *)(v8 + 128) = v8 + 128;
        *(_QWORD *)(v8 + 880) = v8 + 872;
        *(_QWORD *)(v8 + 872) = v8 + 872;
        *(_WORD *)(v8 + 896) = 0;
        *(_QWORD *)(v8 + 904) = 0LL;
        *(_QWORD *)(v8 + 712) = 0LL;
        KeInitializeEvent((PRKEVENT)(v8 + 472), NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)(v8 + 496), SynchronizationEvent, 0);
        KeInitializeTimerEx((PKTIMER)(v8 + 520), SynchronizationTimer);
        KeInitializeDpc((PRKDPC)(v8 + 584), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, (PVOID)v8);
        return (PVOID)v8;
      }
      v16 = &EtwpGlobalSequence;
    }
    *(_QWORD *)(v8 + 280) = v16;
    goto LABEL_12;
  }
  return result;
}
