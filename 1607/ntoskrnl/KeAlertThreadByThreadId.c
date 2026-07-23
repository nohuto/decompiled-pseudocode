/*
 * XREFs of KeAlertThreadByThreadId @ 0x140096B20
 * Callers:
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     NtAlertThreadByThreadId @ 0x1404A7944 (NtAlertThreadByThreadId.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiSignalThread @ 0x14005E2A0 (KiSignalThread.c)
 */

__int64 __fastcall KeAlertThreadByThreadId(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bp
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned __int8 v4; // si
  char v5; // al
  int v7; // [rsp+50h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7);
    while ( *(_QWORD *)(a1 + 64) );
  }
  if ( (*(_DWORD *)(a1 + 120) & 8) != 0 )
  {
    v4 = 0;
  }
  else
  {
    v4 = 1;
    if ( *(_BYTE *)(a1 + 388) != 5
      || (unsigned __int8)((*(_BYTE *)(a1 + 112) & 7) - 3) <= 1u
      || *(_BYTE *)(a1 + 643) != 37
      || (v5 = KiSignalThread((__int64)CurrentPrcb, a1, 257LL, 0LL), *(_BYTE *)(a1 + 112) |= 0x80u, !v5) )
    {
      _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 3u);
    }
  }
  *(_QWORD *)(a1 + 64) = 0LL;
  KiExitDispatcher((__int64)CurrentPrcb, 0LL, 1LL, 1LL, CurrentIrql);
  return v4;
}
