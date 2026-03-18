/*
 * XREFs of KeSetThreadChargeOnlySchedulingGroup @ 0x1400A01F4
 * Callers:
 *     PspRevertContainerImpersonation @ 0x1400A019C (PspRevertContainerImpersonation.c)
 *     PsImpersonateContainerOfThread @ 0x1400A02BC (PsImpersonateContainerOfThread.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 * Callees:
 *     KiUpdateTotalCyclesCurrentThread @ 0x1400292C4 (KiUpdateTotalCyclesCurrentThread.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

char __fastcall KeSetThreadChargeOnlySchedulingGroup(__int64 a1, __int64 a2)
{
  bool v5; // zf
  struct _KPRCB *CurrentPrcb; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( (*(_DWORD *)(a1 + 120) & 0x100) != 0 )
  {
    v5 = a2 == 0;
  }
  else
  {
    if ( !a2 )
      return 0;
    v5 = *(_QWORD *)(a1 + 104) == 0LL;
  }
  if ( !v5 )
    return 0;
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  _disable();
  KiUpdateTotalCyclesCurrentThread((__int64)CurrentPrcb, a1);
  _enable();
  v9 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v9, v7, v8);
    while ( CurrentPrcb->PrcbLock );
  }
  if ( a2 )
  {
    _interlockedbittestandset((volatile signed __int32 *)(a1 + 120), 8u);
    *(_QWORD *)(a1 + 104) = a2;
    _interlockedbittestandset((volatile signed __int32 *)a1, 0x12u);
  }
  else
  {
    _interlockedbittestandreset((volatile signed __int32 *)a1, 0x12u);
    *(_QWORD *)(a1 + 104) = 0LL;
    _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), 8u);
  }
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  __writecr8(0LL);
  return 1;
}
