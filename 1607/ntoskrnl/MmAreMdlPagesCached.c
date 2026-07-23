/*
 * XREFs of MmAreMdlPagesCached @ 0x14010FFF8
 * Callers:
 *     ?StDmPageRetrieve@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14011D580 (-StDmPageRetrieve@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_STDM_READ_CONTEXT@1@PEAU_S.c)
 * Callees:
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 */

__int64 __fastcall MmAreMdlPagesCached(__int64 a1)
{
  unsigned __int64 *v1; // r8
  __int64 v2; // rdx
  __int64 v3; // r8
  unsigned __int64 v4; // r9

  v1 = (unsigned __int64 *)(a1 + 48);
  while ( MiIsPfnInline(*v1) && (*(_BYTE *)(48 * v2 - 0x57FFFFFFFDELL) & 0xC0) == 0x40 )
  {
    v1 = (unsigned __int64 *)(v3 + 8);
    if ( (unsigned __int64)v1 >= v4 )
      return 1LL;
  }
  return 0LL;
}
