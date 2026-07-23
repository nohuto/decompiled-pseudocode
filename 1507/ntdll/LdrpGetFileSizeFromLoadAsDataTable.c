/*
 * XREFs of LdrpGetFileSizeFromLoadAsDataTable @ 0x1800381AC
 * Callers:
 *     LdrpGetImageSize @ 0x180017484 (LdrpGetImageSize.c)
 *     LdrpResGetMappingSize @ 0x18001AFF0 (LdrpResGetMappingSize.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     LdrpInitMuiCrits @ 0x18003823C (LdrpInitMuiCrits.c)
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
