/*
 * XREFs of MiQueuePageAccessLog @ 0x140119FD0
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MiCheckAndProcessCcAccessLog @ 0x140119F44 (MiCheckAndProcessCcAccessLog.c)
 *     MiReturnCcAccessLog @ 0x140119F80 (MiReturnCcAccessLog.c)
 *     MiGetCcAccessLog @ 0x1405323EC (MiGetCcAccessLog.c)
 * Callees:
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D79C8 (MmFreeAccessPfnBuffer.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

void __fastcall MiQueuePageAccessLog(PSLIST_ENTRY ListEntry)
{
  unsigned __int64 v2; // rtt
  unsigned int Alignment_low; // ebx
  int v4; // ebx
  unsigned __int64 v5; // rtt

  *((_QWORD *)&ListEntry[1].Next + 1) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)&ListEntry->Next + 3) = dword_140367DD0;
  _m_prefetchw(&stru_140367D88);
  v2 = stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v2 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140367D88,
               (stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) + 2,
               stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL)
    && !ExfAcquireRundownProtection(&stru_140367D88) )
  {
    goto LABEL_12;
  }
  Alignment_low = LOWORD(stru_140367DC0.Alignment);
  if ( LOWORD(stru_140367DC0.Alignment) >= (unsigned int)dword_140367DA8 )
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)&xmmword_140350510, 0x64u);
    v4 = 0;
  }
  else
  {
    RtlpInterlockedPushEntrySList(&stru_140367DC0, ListEntry);
    if ( Alignment_low >= 8 && !stru_140367D90.Header.SignalState )
      KeSetEvent(&stru_140367D90, 0, 0);
    v4 = 1;
  }
  _m_prefetchw(&stru_140367D88);
  v5 = stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v5 != _InterlockedCompareExchange64(
               (volatile signed __int64 *)&stru_140367D88,
               (stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) - 2,
               stru_140367D88.Count & 0xFFFFFFFFFFFFFFFEuLL) )
    ExfReleaseRundownProtection(&stru_140367D88);
  if ( !v4 )
LABEL_12:
    MmFreeAccessPfnBuffer((__int64)ListEntry, 1);
}
