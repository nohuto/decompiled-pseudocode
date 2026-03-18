/*
 * XREFs of VfThunkRemoveTargetNotify @ 0x1406B2068
 * Callers:
 *     VfTargetDriversRemove @ 0x140001FF8 (VfTargetDriversRemove.c)
 * Callees:
 *     ViThunkFreeSharedThunksArray @ 0x1406B22B0 (ViThunkFreeSharedThunksArray.c)
 */

__int64 __fastcall VfThunkRemoveTargetNotify(__int64 a1)
{
  __int64 result; // rax

  result = *(unsigned int *)(a1 + 16);
  if ( (result & 1) == 0 )
  {
    ((void (*)(void))ViThunkFreeSharedThunksArray)();
    ViThunkFreeSharedThunksArray(a1 + 24);
    ViThunkFreeSharedThunksArray(a1 + 32);
    return ViThunkFreeSharedThunksArray(a1 + 40);
  }
  return result;
}
