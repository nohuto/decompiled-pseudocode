/*
 * XREFs of RtlpInitializeLangRegistryInfo @ 0x180070C30
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 *     RtlpCreateProcessRegistryInfo @ 0x180014540 (RtlpCreateProcessRegistryInfo.c)
 *     RtlUpdateProcessRegistryInfo @ 0x1800706C4 (RtlUpdateProcessRegistryInfo.c)
 *     RtlGetUILanguageInfo @ 0x1800E5AC0 (RtlGetUILanguageInfo.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7E30 (RtlpSetPreferredUILanguages.c)
 * Callees:
 *     RtlpMuiRegCreateAndLoadRegistryInfo @ 0x180070C5C (RtlpMuiRegCreateAndLoadRegistryInfo.c)
 */

__int64 __fastcall RtlpInitializeLangRegistryInfo(_QWORD *a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return 3221225485LL;
  if ( !*a1 )
    return RtlpMuiRegCreateAndLoadRegistryInfo();
  return result;
}
