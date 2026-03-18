/*
 * XREFs of KeTestAlertThread @ 0x14002B04C
 * Callers:
 *     KiContinueEx @ 0x14002AEF0 (KiContinueEx.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     NtTestAlert @ 0x1403EFC60 (NtTestAlert.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 * Callees:
 *     KiAcquireThreadLockRaiseToDpc @ 0x14002B0C0 (KiAcquireThreadLockRaiseToDpc.c)
 */

unsigned __int8 __fastcall KeTestAlertThread(char a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v2; // rdi
  unsigned __int8 v3; // dl
  unsigned __int8 v5; // [rsp+30h] [rbp+8h] BYREF

  CurrentThread = KeGetCurrentThread();
  v2 = a1;
  KiAcquireThreadLockRaiseToDpc(CurrentThread, &v5);
  v3 = CurrentThread->Alerted[v2];
  if ( v3 == 1 )
  {
    CurrentThread->Alerted[v2] = 0;
  }
  else if ( (_BYTE)v2 == 1
         && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
  {
    CurrentThread->ApcState.UserApcPending = 1;
  }
  CurrentThread->ThreadLock = 0LL;
  __writecr8(v5);
  return v3;
}
