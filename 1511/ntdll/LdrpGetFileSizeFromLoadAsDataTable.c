/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x180030438
 * Callers:
 *     LdrpGetImageSize @ 0x18003188C (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x1800397F0 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x1800304C8 (LdrpInitMuiCrits.c)
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
      if ( *((_QWORD *)LoadAsDataTable + 6 * v3 - 6) == a1 )
      {
        v2 = *((_QWORD *)LoadAsDataTable + 6 * v3 - 4);
        break;
      }
      --v3;
    }
  }
  RtlLeaveCriticalSection(&LoadAsDataCrits);
  return v2;
}
