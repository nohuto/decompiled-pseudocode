/*
 * XREFs of MiQueuePageAccessLog @ 0x1400F152C
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x1400A6FC0 (MiReturnCcAccessLog.c)
 *     MiEmptyAccessLogs @ 0x140116604 (MiEmptyAccessLogs.c)
 *     MiGetCcAccessLog @ 0x1404DB96C (MiGetCcAccessLog.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x1400FAAA8 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(PSLIST_ENTRY ListEntry)
{
  __int64 v2; // rdx
  unsigned int Alignment_low; // ebx
  int v4; // ebx

  *((_QWORD *)&ListEntry[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&ListEntry->Next + 3) = dword_140317B10;
  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(stru_140317B00.Alignment);
  if ( LOWORD(stru_140317B00.Alignment) >= (unsigned int)dword_140317AE8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140302790, 0x64u);
    v4 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140317B00, ListEntry);
    if ( Alignment_low >= 8 && !stru_140317AD0.Header.SignalState )
      KeSetEvent(&stru_140317AD0, 0, 0);
    v4 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v4 )
  {
LABEL_9:
    LOBYTE(v2) = 1;
    MmFreeAccessPfnBuffer(ListEntry, v2);
  }
}
