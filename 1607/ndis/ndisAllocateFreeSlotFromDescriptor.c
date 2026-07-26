/*
 * XREFs of ndisAllocateFreeSlotFromDescriptor @ 0x1C000FB5C
 * Callers:
 *     ndisAllocatePerProcessorSlot @ 0x1C000FA9C (ndisAllocatePerProcessorSlot.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisAllocateFreeSlotFromDescriptor(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v4; // rcx
  __int64 result; // rax

  v2 = *(_DWORD *)(a1 + 16);
  if ( v2 == -16777217 )
    return 0LL;
  v4 = v2 & 0x1FFFFFF;
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 4 * v4 + 20);
  result = a1 + 4096 + 8 * v4;
  *(_DWORD *)(a1 + 4 * v4 + 20) = a2;
  return result;
}
