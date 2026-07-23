/*
 * XREFs of RtlGetLocaleFileMappingAddress @ 0x180080770
 * Callers:
 *     RtlpLoadNlsData @ 0x18008069C (RtlpLoadNlsData.c)
 * Callees:
 *     NtUnmapViewOfSection @ 0x1800A6960 (NtUnmapViewOfSection.c)
 *     NtInitializeNlsFiles @ 0x1800A8270 (NtInitializeNlsFiles.c)
 */

NTSTATUS __cdecl RtlGetLocaleFileMappingAddress(
        PVOID *BaseAddress,
        PLCID DefaultLocaleId,
        PLARGE_INTEGER DefaultCasingTableSize,
        PULONG CurrentNLSVersion)
{
  NTSTATUS result; // eax
  PVOID v8; // rcx

  if ( !BaseAddress )
    return -1073741585;
  if ( !DefaultLocaleId )
    return -1073741584;
  if ( !DefaultCasingTableSize )
    return -1073741583;
  if ( gBaseAddress )
  {
    *BaseAddress = (PVOID)gBaseAddress;
    *DefaultLocaleId = gDefaultLocaleId;
    DefaultCasingTableSize->QuadPart = gDefaultCasingTableSize;
  }
  else
  {
    result = NtInitializeNlsFiles(BaseAddress, DefaultLocaleId, DefaultCasingTableSize, CurrentNLSVersion);
    if ( result < 0 )
      return result;
    v8 = *BaseAddress;
    gDefaultLocaleId = *DefaultLocaleId;
    gDefaultCasingTableSize = DefaultCasingTableSize->QuadPart;
    if ( _InterlockedCompareExchange64(&gBaseAddress, (signed __int64)v8, 0LL) )
    {
      NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, *BaseAddress);
      *BaseAddress = (PVOID)gBaseAddress;
    }
  }
  return 0;
}
