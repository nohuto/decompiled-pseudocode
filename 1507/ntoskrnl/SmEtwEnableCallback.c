/*
 * XREFs of SmEtwEnableCallback @ 0x1405B5B3C
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ?SmStoresContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402599D8 (-SmStoresContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmEtwLogGlobalStats @ 0x1405B5BD4 (SmKmEtwLogGlobalStats.c)
 *     SmpCacheStatsCopy @ 0x1405B5C4C (SmpCacheStatsCopy.c)
 *     SmKmEtwLogStoreRundown @ 0x1405B5E50 (SmKmEtwLogStoreRundown.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  _BYTE v4[896]; // [rsp+20h] [rbp-398h] BYREF

  if ( ControlCode <= 1 && (dword_140353094 = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    SmKmEtwLogStoreRundown(&qword_140353088, SmGlobals, Level);
    SmpCacheStatsCopy(SmGlobals, v4, &unk_1403530A8);
    SmKmEtwLogGlobalStats(&qword_140353088, v4);
    if ( (dword_140353094 & 0x80u) != 0 )
      SMKM_STORE_MGR<SM_TRAITS>::SmStoresContentsRundown((__int64)SmGlobals);
  }
}
