/*
 * XREFs of ViKeWaitForSingleObjectCommon @ 0x1406C730C
 * Callers:
 *     VerifierKeWaitForSingleObject @ 0x1406C690C (VerifierKeWaitForSingleObject.c)
 *     VerifierKeWaitForSingleObjectNoReboot @ 0x1406C6958 (VerifierKeWaitForSingleObjectNoReboot.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     ViKeInjectStatusAlerted @ 0x1406C6EB8 (ViKeInjectStatusAlerted.c)
 *     ViKeWaitSanityChecks @ 0x1406C73B4 (ViKeWaitSanityChecks.c)
 */

NTSTATUS __fastcall ViKeWaitForSingleObjectCommon(void *a1, KWAIT_REASON a2, __int64 a3, char a4, PLARGE_INTEGER a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  KPROCESSOR_MODE v7; // di
  unsigned __int8 WaitIrql; // r10
  LARGE_INTEGER *Timeout; // rsi
  unsigned __int8 v12; // [rsp+28h] [rbp-20h]
  PVOID Object; // [rsp+50h] [rbp+8h] BYREF

  Object = a1;
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  Timeout = a5;
  v12 = WaitIrql;
  ViKeWaitSanityChecks(1LL, &Object, a3, a5, (*((_DWORD *)&CurrentThread->0 + 1) >> 5) & 1, v12);
  if ( ViKeInjectStatusAlerted(a4) )
    return 257;
  else
    return pXdvKeWaitForSingleObject(Object, a2, v7, a4, Timeout);
}
