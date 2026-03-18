/*
 * XREFs of ViThunkApplyThunksCurrentSession @ 0x140744F94
 * Callers:
 *     VfThunkApplyThunks @ 0x140744D5C (VfThunkApplyThunks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14002B16C (RtlImageDirectoryEntryToData.c)
 *     VfTargetDriversGetNode @ 0x14025B1DC (VfTargetDriversGetNode.c)
 *     ViIsDriverSuspectForVerifier @ 0x140732680 (ViIsDriverSuspectForVerifier.c)
 *     ViThunkReplaceAllSharedExports @ 0x1407452F0 (ViThunkReplaceAllSharedExports.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140745374 (ViThunkReplaceAllThunkedImports.c)
 */

__int64 __fastcall ViThunkApplyThunksCurrentSession(__int64 a1, unsigned int a2)
{
  void *v2; // rdi
  unsigned int v5; // r14d
  _DWORD *Node; // rax
  _DWORD *v7; // rsi
  PVOID v8; // r12
  ULONG Size; // [rsp+50h] [rbp+8h] BYREF

  v2 = *(void **)(a1 + 48);
  v5 = 0;
  Node = VfTargetDriversGetNode((unsigned __int64)v2);
  v7 = Node;
  if ( Node )
  {
    if ( (Node[4] & 1) == 0 )
    {
      v8 = RtlImageDirectoryEntryToData(v2, 1u, 0xCu, &Size);
      if ( v8 )
      {
        if ( Size )
        {
          if ( a2 )
          {
            _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
            _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
          }
          ViIsDriverSuspectForVerifier(a1);
          v5 = ViThunkReplaceAllThunkedImports((ULONG_PTR)v8);
          if ( v5 )
            ViThunkReplaceAllSharedExports(v7, a2);
        }
      }
    }
  }
  return v5;
}
