/*
 * XREFs of ViKeWaitForSingleObjectCommon @ 0x140713354
 * Callers:
 *     VerifierKeWaitForSingleObject @ 0x14071295C (VerifierKeWaitForSingleObject.c)
 *     VerifierKeWaitForSingleObjectNoReboot @ 0x1407129A8 (VerifierKeWaitForSingleObjectNoReboot.c)
 * Callees:
 *     ViKeInjectStatusAlerted @ 0x140712F08 (ViKeInjectStatusAlerted.c)
 *     ViKeWaitSanityChecks @ 0x1407133FC (ViKeWaitSanityChecks.c)
 */

__int64 __fastcall ViKeWaitForSingleObjectCommon(__int64 a1, unsigned int a2, __int64 a3, char a4, __int64 a5)
{
  struct _KTHREAD *CurrentThread; // rcx
  char v7; // di
  unsigned __int8 WaitIrql; // r10
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  unsigned __int8 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+50h] [rbp+8h] BYREF

  v15 = a1;
  CurrentThread = KeGetCurrentThread();
  v7 = a3;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  v10 = a5;
  v14 = WaitIrql;
  ViKeWaitSanityChecks(1LL, &v15, a3, a5, (*((_DWORD *)&CurrentThread->0 + 1) >> 5) & 1, v14);
  if ( ViKeInjectStatusAlerted(a4) )
    return 257LL;
  LOBYTE(v12) = a4;
  LOBYTE(v11) = v7;
  return pXdvKeWaitForSingleObject(v15, a2, v11, v12, v10);
}
