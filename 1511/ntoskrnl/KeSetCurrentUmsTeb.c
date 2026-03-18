/*
 * XREFs of KeSetCurrentUmsTeb @ 0x1401CCDE0
 * Callers:
 *     KeUnInitializeUmsThread @ 0x14061B3D4 (KeUnInitializeUmsThread.c)
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140643914 (PspDisassociateUmsThreadFromPrimary.c)
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
