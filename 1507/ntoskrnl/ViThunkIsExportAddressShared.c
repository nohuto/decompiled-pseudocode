/*
 * XREFs of ViThunkIsExportAddressShared @ 0x1407CC1F0
 * Callers:
 *     ViThunkFindExportAddress @ 0x1407CC0D0 (ViThunkFindExportAddress.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViThunkIsExportAddressShared(__int64 a1, __int64 a2, unsigned __int16 a3)
{
  unsigned int v3; // r9d
  unsigned __int16 v4; // ax

  v3 = *(_DWORD *)(a2 + 20);
  v4 = 0;
  if ( !v3 )
    return 0LL;
  while ( v4 == a3
       || a1 + *(unsigned int *)(a1 + *(unsigned int *)(a2 + 28) + 4LL * v4) != a1
                                                                              + *(unsigned int *)(a1
                                                                                                + *(unsigned int *)(a2 + 28)
                                                                                                + 4LL * a3) )
  {
    if ( ++v4 >= v3 )
      return 0LL;
  }
  return 1LL;
}
