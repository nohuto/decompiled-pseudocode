/*
 * XREFs of IopLiveDumpIsUnderMemoryPressure @ 0x1401CAED8
 * Callers:
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140626C5C (IopLiveDumpAllocateDumpBuffers.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopLiveDumpIsUnderMemoryPressure(__int64 a1, __int64 a2)
{
  char v2; // r8

  v2 = 0;
  if ( a1 && *(_DWORD *)(a1 + 4) )
    return 1;
  if ( a2 )
    return *(_DWORD *)(a2 + 4) != 0;
  return v2;
}
