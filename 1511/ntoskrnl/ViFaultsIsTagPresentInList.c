/*
 * XREFs of ViFaultsIsTagPresentInList @ 0x1406C55B4
 * Callers:
 *     ViFaultsAddTagNoDuplicates @ 0x1406C52E0 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsIsTagTarget @ 0x1406C55F8 (ViFaultsIsTagTarget.c)
 * Callees:
 *     ExCheckSingleFilter @ 0x140150230 (ExCheckSingleFilter.c)
 */

__int64 __fastcall ViFaultsIsTagPresentInList(int a1)
{
  PVOID *v1; // r8
  PVOID *v2; // r11
  int v3; // r10d
  unsigned int v4; // r9d
  PVOID **v5; // r8

  v1 = (PVOID *)ViFaultTagsList;
  v2 = &ViFaultTagsList;
  v3 = a1;
  v4 = 0;
  while ( v1 != v2 )
  {
    if ( (unsigned int)ExCheckSingleFilter(v3, *((_DWORD *)v1 + 4)) )
      return 1;
    v1 = *v5;
  }
  return v4;
}
