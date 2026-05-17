/*
 * XREFs of RtlCopyUnicodeString @ 0x180015220
 * Callers:
 *     LdrpSearchPath @ 0x18000EBF0 (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x180011954 (RtlpComputeLangListCheckSum.c)
 *     RtlConvertSidToUnicodeString @ 0x1800149E0 (RtlConvertSidToUnicodeString.c)
 *     EtwpQueryUmLogger @ 0x180051CEC (EtwpQueryUmLogger.c)
 *     RtlCanonicalizeDomainName @ 0x180055610 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x180079B30 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x1800820D0 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800D7614 (AvrfMiniLoadDll.c)
 *     QueryFeatureOverride @ 0x1800E2BB0 (QueryFeatureOverride.c)
 * Callees:
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void __fastcall RtlCopyUnicodeString(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v3; // eax
  __int64 v4; // rsi
  const void *v5; // rdx
  void *v6; // rcx
  unsigned __int64 v7; // rdi

  if ( a2 )
  {
    v3 = *a2;
    v4 = *((_QWORD *)a1 + 1);
    if ( (unsigned __int16)v3 > a1[1] )
      v3 = a1[1];
    v5 = (const void *)*((_QWORD *)a2 + 1);
    v6 = (void *)*((_QWORD *)a1 + 1);
    *a1 = v3;
    v7 = v3;
    memmove(v6, v5, v3);
    if ( (unsigned __int64)*a1 + 2 <= a1[1] )
      *(_WORD *)(v4 + 2 * (v7 >> 1)) = 0;
  }
  else
  {
    *a1 = 0;
  }
}
