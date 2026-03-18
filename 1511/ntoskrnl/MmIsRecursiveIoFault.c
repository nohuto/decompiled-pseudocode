/*
 * XREFs of MmIsRecursiveIoFault @ 0x1401D57C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOLEAN MmIsRecursiveIoFault(void)
{
  struct _KTHREAD *CurrentThread; // rcx
  BOOLEAN result; // al

  CurrentThread = KeGetCurrentThread();
  result = 0;
  if ( BYTE1(CurrentThread[1].Teb) || LOBYTE(CurrentThread[1].Teb) == 1 )
    return 1;
  return result;
}
