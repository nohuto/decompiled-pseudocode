/*
 * XREFs of PfpOpenHandleInitialize @ 0x14054F6F0
 * Callers:
 *     PfpReadSupportInitialize @ 0x1400FE064 (PfpReadSupportInitialize.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0x200000000LL;
  a1[3] |= 0x200000000uLL;
  return result;
}
