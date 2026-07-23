/*
 * XREFs of LdrpIsVerifierActivationFilterMatched @ 0x1800C09AC
 * Callers:
 *     LdrpInitializeExecutionOptions @ 0x1800BE35C (LdrpInitializeExecutionOptions.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x18001F3D0 (RtlInitUnicodeString.c)
 *     RtlQueryApplicationKeyOption @ 0x18007146C (RtlQueryApplicationKeyOption.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     LdrpLogDbgPrint @ 0x1800BC478 (LdrpLogDbgPrint.c)
 *     LdrpIsSubstringFound @ 0x1800C08D8 (LdrpIsSubstringFound.c)
 */

__int64 __fastcall LdrpIsVerifierActivationFilterMatched(__int64 a1, void *a2, void *a3)
{
  unsigned int v4; // edi
  WCHAR *v5; // rbx
  __int64 v6; // rax
  WCHAR *v7; // rsi
  WCHAR v8; // ax
  const WCHAR *v9; // rdx
  const char *v10; // rax
  __int64 v12; // [rsp+30h] [rbp-258h]
  _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-248h] BYREF
  WCHAR SourceString[256]; // [rsp+50h] [rbp-238h] BYREF

  SourceString[0] = 0;
  if ( (int)RtlQueryApplicationKeyOption(
              a2,
              a3,
              (__int64)L"VerifierActivationFilter",
              1LL,
              (__int64)SourceString,
              512,
              v12,
              0LL) < 0 )
  {
    return 1;
  }
  else
  {
    if ( (LdrpDebugFlags & 5) != 0 )
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6709,
        "LdrpIsVerifierActivationFilterMatched",
        2,
        "VerifierActivationFilter found, contents = \"%ws\"\n",
        SourceString);
    v4 = 0;
    if ( SourceString[0] == 42 || !SourceString[0] )
    {
      v4 = 1;
    }
    else
    {
      v5 = SourceString;
      v6 = -1LL;
      do
        ++v6;
      while ( SourceString[v6] );
      v7 = &SourceString[v6];
      do
      {
        if ( v5 >= v7 )
          break;
        while ( *v5 == 32 || *v5 == 9 )
          ++v5;
        v8 = *v5;
        v9 = v5;
        if ( !*v5 )
          break;
        do
        {
          if ( v8 == 32 )
            break;
          if ( v8 == 9 )
            break;
          v8 = *++v5;
        }
        while ( *v5 );
        if ( v9 == v5 )
          break;
        *v5 = 0;
        RtlInitUnicodeString(&DestinationString, v9);
        if ( (unsigned int)LdrpIsSubstringFound(
                             (unsigned __int16 *)(*(_QWORD *)(a1 + 32) + 112LL),
                             &DestinationString.Length) )
          v4 = 1;
        ++v5;
      }
      while ( !v4 );
    }
    if ( (LdrpDebugFlags & 5) != 0 )
    {
      v10 = (const char *)&Flags;
      if ( !v4 )
        v10 = "not ";
      LdrpLogDbgPrint(
        (unsigned int)"minkernel\\ntdll\\ldrinit.c",
        6763,
        "LdrpIsVerifierActivationFilterMatched",
        2,
        "VerifierActivationFilter match %sfound.\n",
        v10);
    }
  }
  return v4;
}
