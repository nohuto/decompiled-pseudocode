/*
 * XREFs of MiQueuePageAccessLog @ 0x140088894
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x1400886A4 (MiCheckAndProcessCcAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x1400CC664 (MiReturnCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x14049A430 (MiGetCcAccessLog.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140006874 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(PSLIST_ENTRY ListEntry)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&ListEntry[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&ListEntry->Next + 3) = dword_14033B850;
  if ( !ExAcquireRundownProtection(&stru_14033B808) )
    goto LABEL_10;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_14033B828 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140328350, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&stru_14033B808);
  if ( !v3 )
LABEL_10:
    MmFreeAccessPfnBuffer((__int64)ListEntry, 1);
}
