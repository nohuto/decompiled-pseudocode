/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x180009990
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800066EC (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x78uLL);
  memset_0(a1 + 14, 0, 0x38uLL);
  result = 0LL;
  a1[26] = 1;
  return result;
}
