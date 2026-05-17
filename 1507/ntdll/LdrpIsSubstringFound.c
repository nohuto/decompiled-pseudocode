/*
 * XREFs of LdrpIsSubstringFound @ 0x1800C08D8
 * Callers:
 *     LdrpIsVerifierActivationFilterMatched @ 0x1800C09AC (LdrpIsVerifierActivationFilterMatched.c)
 * Callees:
 *     RtlCompareUnicodeStrings @ 0x180035820 (RtlCompareUnicodeStrings.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 */

__int64 __fastcall LdrpIsSubstringFound(unsigned __int16 *a1, unsigned __int16 *a2)
{
  unsigned int v2; // ebx
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rbp
  unsigned __int16 *i; // rsi

  v2 = 0;
  if ( (LdrpDebugFlags & 5) != 0 )
    LdrpLogDbgPrint(
      (unsigned int)"minkernel\\ntdll\\ldrinit.c",
      6623,
      "LdrpIsSubstringFound",
      2,
      "Searching for \"%wZ\" in \"%wZ\"\n",
      a2,
      a1);
  if ( *a1 >= *a2 )
  {
    v5 = *((_QWORD *)a2 + 1);
    v6 = (unsigned __int64)(*a1 - *a2) >> 1;
    v7 = (unsigned __int64)*a2 >> 1;
    for ( i = (unsigned __int16 *)(*((_QWORD *)a1 + 1) + 2 * v6);
          (unsigned int)RtlCompareUnicodeStrings(i, v7, v5, v7, 1);
          --i )
    {
      if ( !v6 )
        return v2;
      --v6;
    }
    return 1;
  }
  return v2;
}
