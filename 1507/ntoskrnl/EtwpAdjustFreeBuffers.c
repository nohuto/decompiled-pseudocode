/*
 * XREFs of EtwpAdjustFreeBuffers @ 0x1404A2138
 * Callers:
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpFlushActiveBuffers @ 0x1404A1BD0 (EtwpFlushActiveBuffers.c)
 * Callees:
 *     EtwpAllocateFreeBuffers @ 0x140075268 (EtwpAllocateFreeBuffers.c)
 */

__int64 __fastcall EtwpAdjustFreeBuffers(__int64 a1)
{
  unsigned int v1; // edi
  unsigned int v2; // edx
  unsigned int v3; // ebx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 12) & 0x40000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 244);
    v3 = 1;
    if ( (*(_DWORD *)(a1 + 12) & 0x10000000) == 0 )
      v3 = KeNumberProcessors_0;
    if ( v2 < v3 && v3 - v2 != (unsigned int)EtwpAllocateFreeBuffers(a1, v3 - v2) )
      return (unsigned int)-1073741801;
  }
  return v1;
}
