/*
 * XREFs of KeSetCurrentUmsTeb @ 0x1401DC890
 * Callers:
 *     KeUnInitializeUmsThread @ 0x1406507C8 (KeUnInitializeUmsThread.c)
 *     KiSwapToUmsThread @ 0x1406509DC (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140682478 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     <none>
 */

char __fastcall KeSetCurrentUmsTeb(struct _KTHREAD *CurrentThread, unsigned __int64 a2)
{
  char result; // al

  if ( !CurrentThread )
    CurrentThread = KeGetCurrentThread();
  result = CurrentThread->Header.Reserved1;
  if ( result < 0 )
  {
    result = a2;
    __writemsr(0xC0000102, a2);
  }
  return result;
}
