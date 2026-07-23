/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1800E59B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x180013B84 (RtlpInitMuiCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014530 (RtlpCreateProcessRegistryInfo.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x1800145AC (LdrpConvertLangFallbackListToMultiSz.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 */

NTSTATUS __cdecl RtlGetProcessPreferredUILanguages(
        ULONG Flags,
        PULONG NumberOfLanguages,
        PZZWSTR Languages,
        PULONG ReturnLength)
{
  unsigned __int8 v7; // bl
  NTSTATUS result; // eax
  __int64 v9; // rsi
  NTSTATUS v10; // ebx
  __int64 v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = 0LL;
  v7 = Flags;
  if ( !ReturnLength || !NumberOfLanguages || !Languages && *ReturnLength )
    return -1073741811;
  if ( !Flags )
  {
    v7 = 8;
    goto LABEL_8;
  }
  if ( (Flags & 0xFFFFFFF3) != 0 || (Flags & 0xC) == 12 )
    return -1073741811;
LABEL_8:
  result = RtlpCreateProcessRegistryInfo(&v11);
  if ( result >= 0 )
  {
    v9 = v11;
    if ( !*(_QWORD *)(v11 + 72) )
      return LdrpConvertLangFallbackListToMultiSz(0LL, v11, Languages, ReturnLength, v7, 0, (int *)NumberOfLanguages);
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection(&RegistryInfoCritSect);
    v10 = LdrpConvertLangFallbackListToMultiSz(
            *(_QWORD *)(v9 + 72),
            v9,
            Languages,
            ReturnLength,
            v7,
            0,
            (int *)NumberOfLanguages);
    RtlLeaveCriticalSection(&RegistryInfoCritSect);
    return v10;
  }
  return result;
}
