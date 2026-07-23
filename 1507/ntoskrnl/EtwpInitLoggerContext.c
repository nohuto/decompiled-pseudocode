/*
 * XREFs of EtwpInitLoggerContext @ 0x1404B0048
 * Callers:
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 * Callees:
 *     KeQueryMaximumProcessorCountEx @ 0x140014408 (KeQueryMaximumProcessorCountEx.c)
 *     KeQuerySystemTimePrecise @ 0x1400166E8 (KeQuerySystemTimePrecise.c)
 *     KeInitializeTimerEx @ 0x140021284 (KeInitializeTimerEx.c)
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KeInitializeMutex @ 0x1400756A4 (KeInitializeMutex.c)
 *     MmGetNumberOfPhysicalPages @ 0x1400757B0 (MmGetNumberOfPhysicalPages.c)
 *     PsGetCurrentServerSilo @ 0x1400CE990 (PsGetCurrentServerSilo.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

char *__fastcall EtwpInitLoggerContext(const void **a1, int a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  ULONG MaximumProcessorCount; // eax
  SIZE_T v7; // rsi
  char *result; // rax
  char *v9; // rbx
  char *v10; // rsi
  unsigned __int64 v11; // rcx
  int v12; // r8d
  unsigned int v13; // r9d
  int v14; // eax
  int v15; // eax
  int v16; // eax
  void *v17; // rax

  v2 = *(unsigned __int16 *)a1 + 922;
  v5 = 0;
  if ( (a2 & 0x10000000) == 0 )
  {
    MaximumProcessorCount = KeQueryMaximumProcessorCountEx(0xFFFFu);
    if ( MaximumProcessorCount > 0x20 )
      v5 = 8 * MaximumProcessorCount;
  }
  v7 = v5 + v2;
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNxCacheAligned, v7, 0x4C777445u);
  v9 = result;
  if ( result )
  {
    memset(result, 0, (unsigned int)v7);
    v10 = v9 + 920;
    if ( v5 )
    {
      *((_QWORD *)v9 + 111) = v10;
      v10 += v5;
    }
    memmove(v10, a1[1], *(unsigned __int16 *)a1);
    RtlInitUnicodeString((PUNICODE_STRING)(v9 + 152), (PCWSTR)v10);
    *((_DWORD *)v9 + 3) = a2;
    *((_DWORD *)v9 + 8) = 0xFFFF;
    *((_DWORD *)v9 + 7) = -1072889856;
    *((_DWORD *)v9 + 5) = -1072496640;
    *((_DWORD *)v9 + 6) = -1072562176;
    if ( (a2 & 0x1000000) != 0 )
      *((_DWORD *)v9 + 79) = 1;
    else
      *((_DWORD *)v9 + 79) = 512;
    if ( a2 < 0 && (a2 & 0x1000000) != 0 )
      *((_DWORD *)v9 + 3) = a2 & 0x7FFFFFFF;
    if ( EtwpFileSystemReady )
      *((_DWORD *)v9 + 208) |= 4u;
    if ( (a2 & 0x8000) != 0 )
    {
      v17 = v9 + 288;
    }
    else
    {
      if ( (a2 & 0x4000) == 0 )
      {
LABEL_14:
        *((_DWORD *)v9 + 84) = 1;
        v11 = (unsigned __int64)(MmGetNumberOfPhysicalPages(0) << 12) >> 20;
        if ( (unsigned int)v11 <= v13 )
        {
          *((_DWORD *)v9 + 1) = 0x2000;
        }
        else
        {
          v14 = 0x10000;
          if ( (unsigned int)v11 <= 0x400 )
            v14 = v12;
          *((_DWORD *)v9 + 1) = v14;
        }
        v15 = 1;
        if ( (*((_DWORD *)v9 + 3) & 0x10000000) == 0 )
          v15 = KeNumberProcessors_0;
        v16 = 2 * v15;
        *((_DWORD *)v9 + 60) = v16;
        *((_DWORD *)v9 + 63) = v16 + 22;
        KeQuerySystemTimePrecise((LARGE_INTEGER *)v9 + 101);
        KeInitializeMutex((PRKMUTEX)(v9 + 648), 0);
        *((_QWORD *)v9 + 88) = 0LL;
        *((_QWORD *)v9 + 44) = v9 + 344;
        *((_QWORD *)v9 + 43) = v9 + 344;
        *((_QWORD *)v9 + 8) = v9 + 80;
        *((_QWORD *)v9 + 9) = v9 + 80;
        *((_QWORD *)v9 + 11) = v9 + 104;
        *((_QWORD *)v9 + 12) = v9 + 104;
        *((_QWORD *)v9 + 15) = v9 + 112;
        *((_QWORD *)v9 + 14) = v9 + 112;
        *((_QWORD *)v9 + 17) = v9 + 128;
        *((_QWORD *)v9 + 16) = v9 + 128;
        *((_QWORD *)v9 + 110) = v9 + 872;
        *((_QWORD *)v9 + 109) = v9 + 872;
        *((_WORD *)v9 + 448) = 0;
        *((_QWORD *)v9 + 113) = 0LL;
        *((_QWORD *)v9 + 89) = 0LL;
        KeInitializeEvent((PRKEVENT)(v9 + 472), NotificationEvent, 0);
        KeInitializeEvent((PRKEVENT)(v9 + 496), SynchronizationEvent, 0);
        KeInitializeTimerEx((PKTIMER)(v9 + 520), SynchronizationTimer);
        KeInitializeDpc((PRKDPC)(v9 + 584), (PKDEFERRED_ROUTINE)EtwpLoggerDpc, v9);
        *((_QWORD *)v9 + 114) = PsGetCurrentServerSilo();
        return v9;
      }
      v17 = &EtwpGlobalSequence;
    }
    *((_QWORD *)v9 + 35) = v17;
    goto LABEL_14;
  }
  return result;
}
