/*
 * XREFs of RmResourceSetPropertiesInitialize @ 0x18000EAD0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x1800095EC (memset_0.c)
 */

__int64 __fastcall RmResourceSetPropertiesInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x58uLL);
  a1[4] = 0;
  memset_0(a1 + 6, 0, 0x38uLL);
  result = 0LL;
  a1[18] = 1;
  return result;
}
