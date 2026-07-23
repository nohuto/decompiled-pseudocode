/*
 * XREFs of ViThunkApplyMandatoryThunksCurrentSession @ 0x14070F730
 * Callers:
 *     VfThunkApplyMandatoryThunks @ 0x14070F4AC (VfThunkApplyMandatoryThunks.c)
 * Callees:
 *     RtlImageDirectoryEntryToData @ 0x14007BB6C (RtlImageDirectoryEntryToData.c)
 *     ViThunkReplaceImportIfThunkedRegular @ 0x14070FD64 (ViThunkReplaceImportIfThunkedRegular.c)
 */

__int64 __fastcall ViThunkApplyMandatoryThunksCurrentSession(__int64 a1, int a2)
{
  char *v3; // rbx
  ULONG v4; // eax
  ULONG v5; // eax
  __int64 v6; // rdi
  ULONG Size; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)RtlImageDirectoryEntryToData(*(PVOID *)(a1 + 48), 1u, 0xCu, &Size);
  if ( v3 )
  {
    v4 = Size;
    if ( Size )
    {
      if ( a2 )
      {
        _InterlockedExchange(&ViLookasideAlreadyLoadedDrivers, 1);
        _InterlockedExchange(&ViResourcesAlreadyLoadedDrivers, 1);
        v4 = Size;
      }
      v5 = v4 >> 3;
      if ( v5 )
      {
        v6 = v5;
        do
        {
          ViThunkReplaceImportIfThunkedRegular(v3, &VfMandatoryThunks);
          v3 += 8;
          --v6;
        }
        while ( v6 );
      }
    }
  }
  return 1LL;
}
