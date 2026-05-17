/*
 * XREFs of RtlCopyUnicodeString @ 0x180019A70
 * Callers:
 *     LdrpSearchPath @ 0x18000BF00 (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x1800107E8 (RtlpComputeLangListCheckSum.c)
 *     RtlConvertSidToUnicodeString @ 0x180019220 (RtlConvertSidToUnicodeString.c)
 *     EtwpQueryUmLogger @ 0x1800448A8 (EtwpQueryUmLogger.c)
 *     RtlCanonicalizeDomainName @ 0x180069350 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x180078250 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x18007E0F0 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800CF6C8 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x1800AB5C0 (memmove.c)
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
