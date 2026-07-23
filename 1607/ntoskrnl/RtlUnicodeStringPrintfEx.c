/*
 * XREFs of RtlUnicodeStringPrintfEx @ 0x1401CF540
 * Callers:
 *     PiDevCfgBuildDriverConfigurationId @ 0x140632698 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildIndirectString @ 0x140632930 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x1406399B4 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _vsnwprintf @ 0x14014D224 (_vsnwprintf.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     RtlUnicodeStringExHandleOtherFlags @ 0x1401CF4A8 (RtlUnicodeStringExHandleOtherFlags.c)
 */

NTSTATUS RtlUnicodeStringPrintfEx(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  size_t v6; // r8
  const wchar_t *v7; // r11
  wchar_t *Buffer; // rcx
  size_t v9; // r14
  NTSTATUS v10; // ebx
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  wchar_t *v13; // r15
  size_t v14; // rsi
  size_t v15; // rdi
  NTSTRSAFE_PCWSTR v16; // rax
  int v17; // eax
  size_t pcchNewDestLength; // [rsp+40h] [rbp-28h] BYREF
  wchar_t *v20; // [rsp+48h] [rbp-20h]
  wchar_t *ppszDestEnd; // [rsp+50h] [rbp-18h] BYREF
  size_t pcchRemaining[2]; // [rsp+58h] [rbp-10h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, pszFormat);
  v6 = 0LL;
  v7 = pszFormat;
  Buffer = 0LL;
  v9 = 0LL;
  v20 = 0LL;
  v10 = 0;
  if ( DestinationString || (dwFlags & 0x100) == 0 )
  {
    Length = DestinationString->Length;
    if ( (DestinationString->Length & 1) != 0 )
      return -1073741811;
    MaximumLength = DestinationString->MaximumLength;
    if ( (MaximumLength & 1) != 0 || Length > MaximumLength || MaximumLength == 0xFFFF )
      return -1073741811;
    if ( !DestinationString->Buffer && (Length || MaximumLength) )
    {
      v10 = -1073741811;
      Buffer = 0LL;
    }
    else
    {
      Buffer = DestinationString->Buffer;
      v9 = (unsigned __int64)MaximumLength >> 1;
      v20 = Buffer;
    }
  }
  if ( v10 >= 0 )
  {
    ppszDestEnd = Buffer;
    v13 = Buffer;
    pcchRemaining[0] = v9;
    LOWORD(v14) = v9;
    pcchNewDestLength = 0LL;
    LOWORD(v15) = 0;
    if ( (dwFlags & 0x100) != 0 )
    {
      v16 = (NTSTRSAFE_PCWSTR)&cchOriginalDestLength;
      if ( pszFormat )
        v16 = pszFormat;
      v7 = v16;
    }
    v10 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
    }
    else if ( v9 )
    {
      v17 = vsnwprintf(Buffer, v9, v7, Args);
      if ( v17 < 0 || (v15 = v17, v17 > v9) )
      {
        v15 = v9;
        pcchNewDestLength = v9;
        v10 = -2147483643;
      }
      else
      {
        pcchNewDestLength = v17;
      }
      Buffer = v20;
      v14 = v9 - v15;
      pcchRemaining[0] = v9 - v15;
      v13 = &v20[v15];
      ppszDestEnd = v13;
      if ( v10 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v14 )
          memset(&v20[v15], (unsigned __int8)dwFlags, 2 * v14);
        goto LABEL_22;
      }
    }
    else
    {
      if ( !*v7 )
      {
LABEL_22:
        if ( DestinationString )
          DestinationString->Length = 2 * v15;
        if ( (int)(v10 + 0x80000000) < 0 || v10 == -2147483643 )
        {
          if ( RemainingString )
          {
            RemainingString->Length = 0;
            RemainingString->MaximumLength = 2 * v14;
            RemainingString->Buffer = v13;
          }
        }
        return v10;
      }
      v10 = Buffer != 0LL ? -2147483643 : -1073741811;
    }
    if ( (dwFlags & 0x1C00) != 0 && v9 )
    {
      RtlUnicodeStringExHandleOtherFlags(Buffer, v9, v6, &pcchNewDestLength, &ppszDestEnd, pcchRemaining, dwFlags);
      v13 = ppszDestEnd;
      LOWORD(v14) = pcchRemaining[0];
      LOWORD(v15) = pcchNewDestLength;
    }
    goto LABEL_22;
  }
  return v10;
}
