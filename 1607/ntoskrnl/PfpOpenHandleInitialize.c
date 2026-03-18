/*
 * XREFs of PfpOpenHandleInitialize @ 0x140581AA0
 * Callers:
 *     PfpReadSupportInitialize @ 0x1400AC8BC (PfpReadSupportInitialize.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall PfpOpenHandleInitialize(_QWORD *a1)
{
  __int64 result; // rax

  memset(a1, 0, 0x20uLL);
  result = 0x200000000LL;
  a1[3] |= 0x200000000uLL;
  return result;
}
