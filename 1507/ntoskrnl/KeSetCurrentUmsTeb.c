/*
 * XREFs of KeSetCurrentUmsTeb @ 0x14020C144
 * Callers:
 *     KeUnInitializeUmsThread @ 0x140699F10 (KeUnInitializeUmsThread.c)
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
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
