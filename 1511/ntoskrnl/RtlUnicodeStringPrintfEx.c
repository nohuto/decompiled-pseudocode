/*
 * XREFs of RtlUnicodeStringPrintfEx @ 0x14012C1CC
 * Callers:
 *     PiDevCfgBuildDriverConfigurationId @ 0x140511948 (PiDevCfgBuildDriverConfigurationId.c)
 *     PiDevCfgBuildIndirectString @ 0x140512E14 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 * Callees:
 *     _vsnwprintf @ 0x1401439B8 (_vsnwprintf.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1401BE708 @ 0x1401BE708 (sub_1401BE708.c)
 */

NTSTATUS RtlUnicodeStringPrintfEx(
        PUNICODE_STRING DestinationString,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags,
        NTSTRSAFE_PCWSTR pszFormat,
        ...)
{
  int v6; // r8d
  const wchar_t *v7; // r11
  wchar_t *Buffer; // rcx
  size_t v9; // r14
  NTSTATUS v10; // ebx
  unsigned __int16 Length; // cx
  unsigned __int16 MaximumLength; // ax
  wchar_t *v13; // r15
  size_t v14; // rsi
  size_t v15; // rdi
  int v16; // eax
  NTSTRSAFE_PCWSTR v18; // rax
  size_t v19; // [rsp+40h] [rbp-28h] BYREF
  wchar_t *v20; // [rsp+48h] [rbp-20h]
  wchar_t *v21; // [rsp+50h] [rbp-18h] BYREF
  size_t v22[2]; // [rsp+58h] [rbp-10h] BYREF
  va_list Args; // [rsp+D0h] [rbp+68h] BYREF

  va_start(Args, pszFormat);
  v6 = 0;
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
    v21 = Buffer;
    v13 = Buffer;
    v22[0] = v9;
    LOWORD(v14) = v9;
    v19 = 0LL;
    LOWORD(v15) = 0;
    if ( (dwFlags & 0x100) != 0 )
    {
      v18 = (NTSTRSAFE_PCWSTR)&word_140167200;
      if ( pszFormat )
        v18 = pszFormat;
      v7 = v18;
    }
    v10 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v10 = -1073741811;
    }
    else if ( v9 )
    {
      v16 = vsnwprintf(Buffer, v9, v7, Args);
      if ( v16 < 0 || (v15 = v16, v16 > v9) )
      {
        v15 = v9;
        v19 = v9;
        v10 = -2147483643;
      }
      else
      {
        v19 = v16;
      }
      LODWORD(Buffer) = (_DWORD)v20;
      v14 = v9 - v15;
      v22[0] = v9 - v15;
      v13 = &v20[v15];
      v21 = v13;
      if ( v10 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v14 )
          memset(&v20[v15], (unsigned __int8)dwFlags, 2 * v14);
        goto LABEL_17;
      }
    }
    else
    {
      if ( !*v7 )
      {
LABEL_17:
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
      sub_1401BE708((_DWORD)Buffer, v9, v6, (unsigned int)&v19, (__int64)&v21, (__int64)v22, dwFlags);
      v13 = v21;
      LOWORD(v14) = v22[0];
      LOWORD(v15) = v19;
    }
    goto LABEL_17;
  }
  return v10;
}
