/*
 * XREFs of SmEtwEnableCallback @ 0x14054053C
 * Callers:
 *     <none>
 * Callees:
 *     SmEtwEnabled @ 0x1400F8E70 (SmEtwEnabled.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ?SmStoresContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x14020A534 (-SmStoresContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmEtwLogGlobalStats @ 0x1405405D8 (SmKmEtwLogGlobalStats.c)
 *     SmpCacheStatsCopy @ 0x140540650 (SmpCacheStatsCopy.c)
 *     SmKmEtwLogStoreRundown @ 0x140540804 (SmKmEtwLogStoreRundown.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  _BYTE v4[896]; // [rsp+20h] [rbp-398h] BYREF

  if ( ControlCode <= 1 && (dword_140305334 = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    SmKmEtwLogStoreRundown(&qword_140305328, &SmGlobals, Level);
    SmpCacheStatsCopy(&SmGlobals, v4, &unk_140305348);
    SmKmEtwLogGlobalStats(&qword_140305328, v4);
    if ( SmEtwEnabled(3) )
      SMKM_STORE_MGR<SM_TRAITS>::SmStoresContentsRundown((__int64)&SmGlobals);
  }
}
