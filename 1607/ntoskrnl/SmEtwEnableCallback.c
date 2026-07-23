/*
 * XREFs of SmEtwEnableCallback @ 0x14056F684
 * Callers:
 *     <none>
 * Callees:
 *     SmEtwEnabled @ 0x140002F74 (SmEtwEnabled.c)
 *     SmKmStoreReferenceEx @ 0x140003358 (SmKmStoreReferenceEx.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140221A74 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmKmEtwLogStoreRundown @ 0x14056F6D8 (SmKmEtwLogStoreRundown.c)
 */

void __fastcall SmEtwEnableCallback(LPCGUID SourceId, ULONG ControlCode, __int64 Level, ULONGLONG MatchAnyKeyword)
{
  unsigned int i; // ebx
  unsigned __int64 v5; // rax

  if ( ControlCode <= 1 && (dword_1403BF4C4 = MatchAnyKeyword | 0x40, ControlCode == 1) || ControlCode == 2 )
  {
    SmKmEtwLogStoreRundown(&qword_1403BF4B8, &SmGlobals, Level);
    if ( SmEtwEnabled(3) )
    {
      for ( i = 0; i < 0x400; ++i )
      {
        v5 = SmKmStoreReferenceEx((__int64)&SmGlobals, i);
        if ( v5 )
          SMKM_STORE_MGR<SM_TRAITS>::SmStoreContentsRundown((__int64)&SmGlobals, v5);
      }
    }
  }
}
