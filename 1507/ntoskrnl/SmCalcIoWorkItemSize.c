/*
 * XREFs of SmCalcIoWorkItemSize @ 0x140259C40
 * Callers:
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400D8CFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14025354C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StStagingRegionStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140256858 (-StStagingRegionStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SmCalcIoWorkItemSize(_DWORD *a1, __int16 a2, unsigned int a3)
{
  if ( (*a1 & 0x2000) != 0 )
    return 48LL;
  else
    return 8 * (unsigned int)(((a2 & 0xFFF) + (unsigned __int64)a3 + 4095) >> 12) + 96;
}
