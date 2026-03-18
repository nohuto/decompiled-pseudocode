/*
 * XREFs of MiQueuePageAccessLog @ 0x140086FA4
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x140086DB4 (MiCheckAndProcessCcAccessLog.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400CDCA0 (MiTrimOrAgeWorkingSet.c)
 *     MiReturnCcAccessLog @ 0x1400CE7C4 (MiReturnCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1404999A0 (MiGetCcAccessLog.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140006704 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(PSLIST_ENTRY ListEntry)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  *((_QWORD *)&ListEntry[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&ListEntry->Next + 3) = dword_14033B810;
  if ( !ExAcquireRundownProtection(&stru_14033B7C8) )
    goto LABEL_10;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_14033B7E8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140328310, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
    if ( Alignment_low >= 8 && !Event.Header.SignalState )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&stru_14033B7C8);
  if ( !v3 )
LABEL_10:
    MmFreeAccessPfnBuffer((__int64)ListEntry, 1);
}
