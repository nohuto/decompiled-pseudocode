/*
 * XREFs of PfpReturnAccessBuffer @ 0x1400B0994
 * Callers:
 *     PfpFlushBuffers @ 0x1403E8030 (PfpFlushBuffers.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140006704 (MmFreeAccessPfnBuffer.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     ExAcquireRundownProtection @ 0x1400D3ED0 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D3F00 (ExReleaseRundownProtection.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(PSLIST_ENTRY ListEntry)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection(&stru_14033B7C8) )
    goto LABEL_9;
  Alignment_low = LOWORD(ListHead.Alignment);
  if ( LOWORD(ListHead.Alignment) >= (unsigned int)dword_14033B7E8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140328310, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&ListHead, ListEntry);
    if ( !Event.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&Event, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection(&stru_14033B7C8);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer((__int64)ListEntry, 0);
}
