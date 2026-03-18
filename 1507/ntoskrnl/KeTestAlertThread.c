/*
 * XREFs of KeTestAlertThread @ 0x140020390
 * Callers:
 *     KiContinueEx @ 0x140020234 (KiContinueEx.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     NtTestAlert @ 0x14045015C (NtTestAlert.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

unsigned __int8 __fastcall KeTestAlertThread(char a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned __int8 CurrentIrql; // bp
  unsigned int v4; // edi
  unsigned __int8 v5; // dl

  CurrentThread = KeGetCurrentThread();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
  {
    do
    {
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
    while ( CurrentThread->ThreadLock );
  }
  v5 = CurrentThread->Alerted[a1];
  if ( v5 == 1 )
  {
    CurrentThread->Alerted[a1] = 0;
  }
  else if ( a1 == 1
         && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    CurrentThread->ApcState.UserApcPending = 1;
  }
  CurrentThread->ThreadLock = 0LL;
  __writecr8(CurrentIrql);
  return v5;
}
