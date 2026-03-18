/*
 * XREFs of PfpReturnAccessBuffer @ 0x1400FAC6C
 * Callers:
 *     PfpFlushBuffers @ 0x1404D35C0 (PfpFlushBuffers.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14006EE30 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection @ 0x140079FF0 (ExAcquireRundownProtection.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MmFreeAccessPfnBuffer @ 0x1400FAAA8 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall PfpReturnAccessBuffer(PSLIST_ENTRY ListEntry)
{
  unsigned int Alignment_low; // ebx
  int v3; // ebx

  if ( !ExAcquireRundownProtection(&RunRef) )
    goto LABEL_9;
  Alignment_low = LOWORD(stru_140317B00.Alignment);
  if ( LOWORD(stru_140317B00.Alignment) >= (unsigned int)dword_140317AE8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140302790, 0x64u);
    v3 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140317B00, ListEntry);
    if ( !stru_140317AD0.Header.SignalState && Alignment_low >= 8 )
      KeSetEvent(&stru_140317AD0, 0, 0);
    v3 = 1;
  }
  ExReleaseRundownProtection_0(&RunRef);
  if ( !v3 )
LABEL_9:
    MmFreeAccessPfnBuffer((__int64)ListEntry, 0);
}
