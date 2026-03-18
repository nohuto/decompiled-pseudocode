/*
 * XREFs of IopUpdateWriteTransferCount @ 0x1400E30A4
 * Callers:
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 * Callees:
 *     IopProcessUpdateTransferCount @ 0x1400E30D0 (IopProcessUpdateTransferCount.c)
 */

__int64 __fastcall IopUpdateWriteTransferCount(unsigned int a1, __int64 a2)
{
  __int64 result; // rax
  unsigned __int64 v3; // rdx

  result = IopProcessUpdateTransferCount(a2, a1, 1472LL, 1240LL);
  __addgsqword(0x2E70u, v3);
  return result;
}
