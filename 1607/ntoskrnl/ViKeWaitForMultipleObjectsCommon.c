/*
 * XREFs of ViKeWaitForMultipleObjectsCommon @ 0x140713278
 * Callers:
 *     VerifierKeWaitForMultipleObjects @ 0x140712874 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForMultipleObjectsNoReboot @ 0x14071291C (VerifierKeWaitForMultipleObjectsNoReboot.c)
 * Callees:
 *     ViKeInjectStatusAlerted @ 0x140712F08 (ViKeInjectStatusAlerted.c)
 *     ViKeWaitSanityChecks @ 0x1407133FC (ViKeWaitSanityChecks.c)
 */

__int64 __fastcall ViKeWaitForMultipleObjectsCommon(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        char a5,
        char a6,
        __int64 a7,
        __int64 a8)
{
  struct _KTHREAD *CurrentThread; // r10
  unsigned int v10; // ebp
  unsigned int v12; // edi
  unsigned __int8 WaitIrql; // r11
  int v15; // [rsp+20h] [rbp-38h]
  unsigned __int8 v16; // [rsp+28h] [rbp-30h]
  int v17; // [rsp+28h] [rbp-30h]

  CurrentThread = KeGetCurrentThread();
  v10 = a3;
  v12 = a1;
  if ( (CurrentThread->MiscFlags & 4) != 0 )
    WaitIrql = CurrentThread->WaitIrql;
  else
    WaitIrql = KeGetCurrentIrql();
  LOBYTE(a3) = a5;
  v16 = WaitIrql;
  ViKeWaitSanityChecks(a1, a2, a3, a7, (*((_DWORD *)&CurrentThread->0 + 1) >> 5) & 1, v16);
  if ( ViKeInjectStatusAlerted(a6) )
    return 257LL;
  LOBYTE(v17) = a6;
  LOBYTE(v15) = a5;
  return pXdvKeWaitForMultipleObjects(v12, a2, v10, a4, v15, v17, a7, a8);
}
