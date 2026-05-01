/*
 * XREFs of RmResourceLimitsInitialize @ 0x180004C40
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800066EC (memset_0.c)
 */

__int64 __fastcall RmResourceLimitsInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x38uLL);
  result = 0LL;
  a1[12] = 1;
  return result;
}
