/*
 * XREFs of IopUpdateWriteTransferCount @ 0x14009E25C
 * Callers:
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *__fastcall IopUpdateWriteTransferCount(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *result; // rax

  if ( a2 )
  {
    result = (struct _KTHREAD *)_InterlockedExchangeAdd64((volatile signed __int64 *)(a2 + 1240), a1);
  }
  else
  {
    result = KeGetCurrentThread();
    result->WriteTransferCount += a1;
  }
  __addgsqword(0x2E70u, a1);
  return result;
}
