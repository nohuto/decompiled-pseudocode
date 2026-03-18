/*
 * XREFs of PspSiloInitializeSuiteMask @ 0x14067ED58
 * Callers:
 *     PspSiloInitializeUserSharedData @ 0x14067EDB8 (PspSiloInitializeUserSharedData.c)
 * Callees:
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     ExGetSuiteMask @ 0x140575AF4 (ExGetSuiteMask.c)
 *     PspSiloGetMultiUserTsFromRegistry @ 0x14067EC48 (PspSiloGetMultiUserTsFromRegistry.c)
 *     PspSiloGetSuiteMaskStringFromRegistry @ 0x14067ECD4 (PspSiloGetSuiteMaskStringFromRegistry.c)
 */

__int64 __fastcall PspSiloInitializeSuiteMask(__int64 a1)
{
  int SuiteMaskStringFromRegistry; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+48h] [rbp+10h] BYREF

  SuiteMaskStringFromRegistry = PspSiloGetSuiteMaskStringFromRegistry(&UnicodeString);
  if ( SuiteMaskStringFromRegistry >= 0 )
  {
    SuiteMaskStringFromRegistry = PspSiloGetMultiUserTsFromRegistry(&v5);
    if ( SuiteMaskStringFromRegistry >= 0 )
      *(_DWORD *)(a1 + 20) = ExGetSuiteMask((__int64)UnicodeString.Buffer, v5);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
  }
  return (unsigned int)SuiteMaskStringFromRegistry;
}
