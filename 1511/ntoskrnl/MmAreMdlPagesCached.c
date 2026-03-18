/*
 * XREFs of MmAreMdlPagesCached @ 0x14010516C
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14010F998 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 */

__int64 __fastcall MmAreMdlPagesCached(__int64 a1)
{
  unsigned __int64 *v1; // r9
  __int64 v2; // r9
  __int64 v3; // r10
  unsigned __int64 v4; // r11

  v1 = (unsigned __int64 *)(a1 + 48);
  while ( MI_IS_PFN(*v1) && (*(_BYTE *)(48 * v3 - 0x57FFFFFFFDELL) & 0xC0) == 0x40 )
  {
    v1 = (unsigned __int64 *)(v2 + 8);
    if ( (unsigned __int64)v1 >= v4 )
      return 1LL;
  }
  return 0LL;
}
