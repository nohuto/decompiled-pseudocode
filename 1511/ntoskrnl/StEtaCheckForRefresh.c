/*
 * XREFs of StEtaCheckForRefresh @ 0x14020799C
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 *     ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140203904 (-SmStoresEtaCheck@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StDmEtaRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402051DC (-StDmEtaRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall StEtaCheckForRefresh(__int64 a1, _DWORD *a2, int *a3, _DWORD *a4)
{
  int v4; // ebx
  unsigned __int64 *v5; // r10
  __int64 v6; // r11
  unsigned __int64 i; // rax
  int v9; // ecx

  v4 = 0;
  v5 = (unsigned __int64 *)(a1 + 16);
  v6 = 0LL;
  while ( !*v5 )
  {
LABEL_8:
    ++v4;
    ++v6;
    ++v5;
    if ( v6 >= 2 )
      return 0LL;
  }
  for ( i = *v5; *(_WORD *)(i + 4) <= 0x80u || !*(_QWORD *)(i + 8); i += 32LL )
  {
    if ( *(_DWORD *)i == -1 )
      goto LABEL_8;
  }
  if ( i <= *v5 )
    v9 = 0;
  else
    v9 = *(_DWORD *)(i - 32) + 1;
  if ( a3 )
    *a3 = v9;
  if ( a4 )
    *a4 = *(_DWORD *)i;
  if ( a2 )
    *a2 = v4;
  return 1LL;
}
