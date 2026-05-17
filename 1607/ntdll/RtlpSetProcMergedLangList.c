/*
 * XREFs of RtlpSetProcMergedLangList @ 0x1800847CC
 * Callers:
 *     RtlGetThreadPreferredUILanguages @ 0x180013DA0 (RtlGetThreadPreferredUILanguages.c)
 * Callees:
 *     RtlpInitMuiCriticalSection @ 0x180013B94 (RtlpInitMuiCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 */

__int64 __fastcall RtlpSetProcMergedLangList(__int64 a1, __int64 a2)
{
  if ( !a2 || !a1 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 96) )
  {
    RtlpInitMuiCriticalSection();
    RtlEnterCriticalSection((__int64)&RegistryInfoCritSect);
    if ( !*(_QWORD *)(a1 + 96) )
    {
      *(_DWORD *)(a2 + 40) |= 0x40u;
      *(_DWORD *)a1 |= 0x200u;
      *(_QWORD *)(a1 + 96) = a2;
    }
    RtlLeaveCriticalSection((__int64)&RegistryInfoCritSect);
  }
  return 0LL;
}
