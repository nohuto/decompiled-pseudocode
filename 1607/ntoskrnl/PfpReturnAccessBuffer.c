/*
 * XREFs of PfpReturnAccessBuffer @ 0x1400AEA04
 * Callers:
 *     PfpFlushBuffers @ 0x1403E9660 (PfpFlushBuffers.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140006874 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(PSLIST_ENTRY ListEntry)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection(&stru_14033B808) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_14033B828 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140328350, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&stru_14033B808);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer((__int64)ListEntry, 0);
}
