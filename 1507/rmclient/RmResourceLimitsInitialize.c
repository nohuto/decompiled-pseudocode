/*
 * XREFs of RmResourceLimitsInitialize @ 0x18000E0A0
 * Callers:
 *     <none>
 * Callees:
 *     memset_0 @ 0x180008DF8 (memset_0.c)
 */

__int64 __fastcall RmResourceLimitsInitialize(_DWORD *a1)
{
  __int64 result; // rax

  memset_0(a1, 0, 0x20uLL);
  result = 0LL;
  a1[7] = 1;
  return result;
}
