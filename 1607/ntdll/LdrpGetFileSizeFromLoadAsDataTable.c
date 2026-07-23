/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x1800302A4
 * Callers:
 *     LdrpGetImageSize @ 0x180031454 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x180039850 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x180030334 (LdrpInitMuiCrits.c)
 */

__int64 __fastcall LdrpGetFileSizeFromLoadAsDataTable(__int64 a1)
{
  __int64 v2; // rbx
  int v3; // ecx

  v2 = 0LL;
  if ( !a1 )
    return 0LL;
  LdrpInitMuiCrits(&DataLoadLockCount, &LoadAsDataCrits);
  RtlEnterCriticalSection(&LoadAsDataCrits);
  v3 = LoadAsDataTableCount;
  if ( LoadAsDataTableCount )
  {
    while ( v3 > 0 )
    {
      if ( *((_QWORD *)LoadAsDataTable + 6 * --v3) == a1 )
      {
        v2 = *((_QWORD *)LoadAsDataTable + 6 * v3 + 2);
        break;
      }
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v2;
}
