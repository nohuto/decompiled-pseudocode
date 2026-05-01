/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x18000E0D0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x40uLL);
  a1[4] = 0;
  memset_0(a1 + 6, 0, 0x20uLL);
  result = 0LL;
  a1[13] = 1;
  return result;
}
