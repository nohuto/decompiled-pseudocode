/*
 * XREFs of IopProcessUpdateTransferCount @ 0x1400E30D0
 * Callers:
 *     IopUpdateWriteTransferCount @ 0x1400E30A4 (IopUpdateWriteTransferCount.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IopProcessUpdateTransferCount(__int64 a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r9
  __int64 result; // rax

  if ( a1 )
  {
    result = a4;
    _InterlockedExchangeAdd64((volatile signed __int64 *)(a4 + a1), a2);
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    result = a2;
    *(_QWORD *)((char *)&CurrentThread->Header.Lock + a3) += a2;
  }
  return result;
}
