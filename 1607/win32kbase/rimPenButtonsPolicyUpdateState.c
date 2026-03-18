/*
 * XREFs of rimPenButtonsPolicyUpdateState @ 0x1C00DDCA0
 * Callers:
 *     rimApplyPointerDevicePolicies @ 0x1C00DBD14 (rimApplyPointerDevicePolicies.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall rimPenButtonsPolicyUpdateState(__int64 a1, __int64 a2, int a3)
{
  __int64 result; // rax

  if ( a3 )
  {
    if ( (*(_DWORD *)(a2 + 2488) & 2) != 0 )
      *(_DWORD *)(a2 + 32) ^= (*(_DWORD *)(a2 + 32) ^ (32 * (((unsigned __int8)~*(_BYTE *)(a2 + 2404) >> 2) & 1))) & 0x20;
    else
      *(_DWORD *)(a2 + 32) &= ~0x20u;
  }
  result = *(unsigned int *)(a2 + 2620);
  if ( (result & 4) == 0 )
  {
    result = *(unsigned int *)(a2 + 2404);
    if ( (result & 4) != 0 )
    {
      result = (*(_DWORD *)(a2 + 32) ^ (16 * (*(_BYTE *)(a2 + 2488) & 1))) & 0x10;
      *(_DWORD *)(a2 + 32) ^= result;
    }
  }
  return result;
}
