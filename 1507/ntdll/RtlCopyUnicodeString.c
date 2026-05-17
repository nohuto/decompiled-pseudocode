/*
 * XREFs of RtlCopyUnicodeString @ 0x18001FCD0
 * Callers:
 *     EtwpQueryUmLogger @ 0x18000A2D0 (EtwpQueryUmLogger.c)
 *     RtlConvertSidToUnicodeString @ 0x18001FD80 (RtlConvertSidToUnicodeString.c)
 *     LdrpSearchPath @ 0x18003F450 (LdrpSearchPath.c)
 *     RtlpComputeLangListCheckSum @ 0x180050794 (RtlpComputeLangListCheckSum.c)
 *     RtlCanonicalizeDomainName @ 0x18005D9C0 (RtlCanonicalizeDomainName.c)
 *     LdrGetDllFullName @ 0x18006C490 (LdrGetDllFullName.c)
 *     LdrGetDllDirectory @ 0x180072480 (LdrGetDllDirectory.c)
 *     AvrfMiniLoadDll @ 0x1800C6398 (AvrfMiniLoadDll.c)
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
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
