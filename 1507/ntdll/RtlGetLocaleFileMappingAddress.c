/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x180048E90
 * Callers:
 *     RtlpLoadNlsData @ 0x180048DB4 (RtlpLoadNlsData.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x180093BA0 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x1800947F0 (NtInitializeNlsFiles.c)
 */

__int64 __fastcall RtlGetLocaleFileMappingAddress(signed __int64 *a1, int *a2, __int64 *a3)
{
  __int64 result; // rax
  signed __int64 v7; // rcx

  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  if ( gBaseAddress )
  {
    *a1 = gBaseAddress;
    *a2 = gDefaultLocaleId;
    *a3 = gDefaultCasingTableSize;
  }
  else
  {
    result = NtInitializeNlsFiles();
    if ( (int)result < 0 )
      return result;
    v7 = *a1;
    gDefaultLocaleId = *a2;
    gDefaultCasingTableSize = *a3;
    if ( _InterlockedCompareExchange64(&gBaseAddress, v7, 0LL) )
    {
      NtUnmapViewOfSection(-1LL);
      *a1 = gBaseAddress;
    }
  }
  return 0LL;
}
