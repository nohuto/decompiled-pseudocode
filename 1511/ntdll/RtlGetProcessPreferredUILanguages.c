/*
 * XREFs of RtlGetProcessPreferredUILanguages @ 0x1800DC6C0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpCreateProcessRegistryInfo @ 0x18003B8A0 (RtlpCreateProcessRegistryInfo.c)
 *     RtlpInitMuiCriticalSection @ 0x18003D4E4 (RtlpInitMuiCriticalSection.c)
 *     LdrpConvertLangFallbackListToMultiSz @ 0x18003DA68 (LdrpConvertLangFallbackListToMultiSz.c)
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
  result = RtlpCreateProcessRegistryInfo(&v11, (__int64)NumberOfLanguages, (__int64)Languages);
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
