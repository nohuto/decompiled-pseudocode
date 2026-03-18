/*
 * XREFs of RtlUnicodeStringCopyStringEx @ 0x1401339D0
 * Callers:
 *     PiDevCfgLogDeviceConfigured @ 0x140513368 (PiDevCfgLogDeviceConfigured.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 * Callees:
 *     sub_140133B9C @ 0x140133B9C (sub_140133B9C.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     sub_1401BE708 @ 0x1401BE708 (sub_1401BE708.c)
 */

NTSTATUS __stdcall RtlUnicodeStringCopyStringEx(
        PUNICODE_STRING DestinationString,
        NTSTRSAFE_PCWSTR pszSrc,
        PUNICODE_STRING RemainingString,
        ULONG dwFlags)
{
  NTSTATUS v7; // ebx
  __int64 v8; // r8
  __int64 v9; // rsi
  __int64 v10; // rdx
  void *v11; // r15
  __int64 v12; // rdi
  const wchar_t *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r10
  __int64 v16; // rcx
  void *v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+48h] [rbp-18h] BYREF
  _QWORD v20[2]; // [rsp+50h] [rbp-10h] BYREF

  v7 = sub_140133B9C((_DWORD)DestinationString, (unsigned int)v20, (unsigned int)&v19, dwFlags);
  if ( v7 < 0 )
    return v7;
  v8 = v20[0];
  v9 = 0LL;
  v10 = v19;
  v11 = (void *)v20[0];
  v18 = (void *)v20[0];
  v12 = v19;
  v20[0] = 0LL;
  if ( (dwFlags & 0x100) != 0 )
  {
    v13 = (const wchar_t *)&word_140167200;
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
  if ( v19 )
  {
    v14 = 0x7FFFLL;
    v15 = v8 - (_QWORD)pszSrc;
    v16 = v19;
    do
    {
      if ( !v14 )
        break;
      if ( !*pszSrc )
        break;
      *(NTSTRSAFE_PCWSTR)((char *)pszSrc + v15) = *pszSrc;
      --v14;
      ++pszSrc;
      ++v9;
      --v16;
    }
    while ( v16 );
    if ( !v16 && v14 && *pszSrc )
      v7 = -2147483643;
    v12 -= v9;
    v20[0] = v9;
    v19 = v12;
    v11 = (void *)(v8 + 2 * v9);
    v18 = v11;
    if ( v7 >= 0 )
    {
      if ( (dwFlags & 0x200) != 0 && v12 )
        memset(v11, (unsigned __int8)dwFlags, 2 * v12);
      goto LABEL_15;
    }
LABEL_24:
    if ( (dwFlags & 0x1C00) != 0 && v10 )
    {
      sub_1401BE708(v8, v10, v8, (unsigned int)v20, (__int64)&v18, (__int64)&v19, dwFlags);
      v11 = v18;
      LOWORD(v12) = v19;
      LOWORD(v9) = v20[0];
    }
    goto LABEL_15;
  }
  if ( *pszSrc )
  {
    v7 = v8 != 0 ? -2147483643 : -1073741811;
    goto LABEL_24;
  }
LABEL_15:
  if ( DestinationString )
    DestinationString->Length = 2 * v9;
  if ( (int)(v7 + 0x80000000) < 0 || v7 == -2147483643 )
  {
    if ( RemainingString )
    {
      RemainingString->Length = 0;
      RemainingString->MaximumLength = 2 * v12;
      RemainingString->Buffer = (wchar_t *)v11;
    }
  }
  return v7;
}
