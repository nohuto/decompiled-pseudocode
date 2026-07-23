/*
 * XREFs of RtlUnicodeStringCopyStringEx @ 0x14013C564
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 * Callees:
 *     RtlUnicodeStringValidateDestWorker @ 0x14013C6BC (RtlUnicodeStringValidateDestWorker.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x1401CF4A8 (RtlUnicodeStringExHandleOtherFlags.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall RtlUnicodeStringCopyStringEx(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags)
{
  int v7; // ebx
  wchar_t *v8; // r8
  wchar_t *v9; // rsi
  size_t v10; // rdx
  wchar_t *v11; // r15
  size_t v12; // rdi
  const wchar_t *v13; // rax
  __int64 v14; // rax
  signed __int64 v15; // r10
  size_t v16; // rcx
  wchar_t **ppszDestEnd; // [rsp+20h] [rbp-40h]
  wchar_t *v19; // [rsp+40h] [rbp-20h] BYREF
  size_t pcchDest; // [rsp+48h] [rbp-18h] BYREF
  wchar_t *ppszDest[2]; // [rsp+50h] [rbp-10h] BYREF

  v7 = RtlUnicodeStringValidateDestWorker(
         DestinationString,
         ppszDest,
         &pcchDest,
         *(size_t **)&dwFlags,
         (const size_t)ppszDestEnd,
         dwFlags);
  if ( v7 < 0 )
    return v7;
  v8 = ppszDest[0];
  v9 = 0LL;
  v10 = pcchDest;
  v11 = ppszDest[0];
  v19 = ppszDest[0];
  v12 = pcchDest;
  ppszDest[0] = 0LL;
  if ( (dwFlags & 0x100) != 0 )
  {
    v13 = (const wchar_t *)&cchOriginalDestLength;
    if ( pszSrc )
      v13 = pszSrc;
    pszSrc = v13;
  }
  v7 = 0;
  if ( (dwFlags & 0xFFFFE000) != 0 )
  {
    v7 = -1073741811;
    goto LABEL_24;
  }
  if ( pcchDest )
  {
    v14 = 0x7FFFLL;
    v15 = (char *)v8 - (char *)pszSrc;
    v16 = pcchDest;
    do
    {
      if ( !v14 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v15) = *pszSrc;
      --v14;
      ++pszSrc;
      v9 = (wchar_t *)((char *)v9 + 1);
      --v16;
    }
    while ( v16 );
    if ( !v16 && v14 && *pszSrc )
      v7 = -2147483643;
    v12 -= (unsigned __int64)v9;
    ppszDest[0] = v9;
    pcchDest = v12;
    v11 = &v8[(_QWORD)v9];
    v19 = v11;
    if ( v7 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v12 )
        memset(v11, (unsigned __int8)dwFlags, 2 * v12);
      goto LABEL_15;
    }
LABEL_24:
    if ( (dwFlags & 0x1C00) != 0 && v10 )
    {
      RtlUnicodeStringExHandleOtherFlags(v8, v10, (size_t)v8, (size_t *)ppszDest, &v19, &pcchDest, dwFlags);
      v11 = v19;
      LOWORD(v12) = pcchDest;
      LOWORD(v9) = ppszDest[0];
    }
    goto LABEL_15;
  }
  if ( *pszSrc )
  {
    v7 = v8 != 0LL ? -2147483643 : -1073741811;
    goto LABEL_24;
  }
LABEL_15:
  if ( DestinationString )
    DestinationString->Length = 2 * (_WORD)v9;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
  {
    if ( RemainingString )
    {
      RemainingString->Length = 0;
      RemainingString->MaximumLength = 2 * v12;
      RemainingString->Buffer = v11;
    }
  }
  return v7;
}
