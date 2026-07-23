/*
 * XREFs of ViThunkRecoverPristines @ 0x14070F9EC
 * Callers:
 *     VfThunkAddSpecialDriverThunks @ 0x14070F200 (VfThunkAddSpecialDriverThunks.c)
 * Callees:
 *     ViThunkReplacePristine @ 0x14070FD9C (ViThunkReplacePristine.c)
 *     ViThunkReplaceSpecialPristine @ 0x14070FE04 (ViThunkReplaceSpecialPristine.c)
 */

void __fastcall ViThunkRecoverPristines(__int64 a1)
{
  unsigned int v1; // edi
  __int64 i; // rbx
  __int64 v4; // r8
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // r8

  v1 = 0;
  for ( i = a1 + 32; v1 < *(_DWORD *)(a1 + 24); ++v1 )
  {
    if ( (unsigned int)ViThunkReplaceSpecialPristine(i) != 1
      && (unsigned int)ViThunkReplacePristine(&VfRegularThunks, 40LL, i) != 1
      && (unsigned int)ViThunkReplacePristine(&VfOrderDependentThunks, 48LL, v4) != 1
      && (unsigned int)ViThunkReplacePristine(&VfPoolThunks, 40LL, v5) != 1
      && (unsigned int)ViThunkReplacePristine(&VfMandatoryThunks, v6, v7) != 1 )
    {
      ViThunkReplacePristine(&VfXdvThunks, v8, v9);
    }
    i += 16LL;
  }
}
