/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x1800302B4
 * Callers:
 *     LdrpGetImageSize @ 0x180031464 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x180039860 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180030344 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  LdrpInitMuiCrits(&DataLoadLockCount, &LoadAsDataCrits);
  RtlEnterCriticalSection((__int64)&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      if ( *(_QWORD *)(LoadAsDataTable + 48LL * --v3) == a1 )
      {
        v2 = *(_QWORD *)(LoadAsDataTable + 48LL * v3 + 16);
        break;
      }
    }
  }
  RtlLeaveCriticalSection((__int64)&LoadAsDataCrits);
  return v2;
}
