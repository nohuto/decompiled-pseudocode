/*
 * XREFs of RtlUnicodeStringToInteger @ 0x18006AEA0
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x180044184 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlGetIntegerAtom @ 0x180068180 (RtlGetIntegerAtom.c)
 *     RtlGetFileMUIPath @ 0x180069A90 (RtlGetFileMUIPath.c)
 *     RtlQueryImageFileKeyOption @ 0x18007F320 (RtlQueryImageFileKeyOption.c)
 *     LdrpInitializeExecutionOptions @ 0x180093C38 (LdrpInitializeExecutionOptions.c)
 *     RtlGetUILanguageInfo @ 0x1800E5B80 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800E6118 (RtlUnicodeStringToLcid.c)
 *     RtlpSetPreferredUILanguages @ 0x1800E7EF0 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800F3F2C (RtlpMuiRegAddAlternateCodePage.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlUnicodeStringToInteger(PUNICODE_STRING String, ULONG Base, PULONG Value)
{
  NTSTATUS v5; // r9d
  ULONG v6; // r10d
  wchar_t *Buffer; // r8
  int v8; // edx
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // cx
  int v11; // r11d
  ULONG v12; // eax
  __int16 v14; // ax

  v5 = 0;
  v6 = 0;
  if ( !String->Length || (String->Length & 1) != 0 )
  {
LABEL_49:
    v5 = -1073741811;
    goto LABEL_19;
  }
  Buffer = String->Buffer;
  v8 = String->Length >> 1;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      --v8;
      v9 = *Buffer++;
      if ( v9 > 0x20u )
        break;
      if ( !v8 )
      {
        v9 = 0;
        break;
      }
    }
  }
  else
  {
    v8 = -1;
  }
  v10 = v9;
  if ( ((v9 - 43) & 0xFFFD) == 0 )
  {
    if ( v8 )
    {
      --v8;
      v10 = *Buffer++;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( Base )
  {
    switch ( Base )
    {
      case 0xAu:
        v11 = 0;
        goto LABEL_16;
      case 2u:
        v11 = 1;
        goto LABEL_16;
      case 8u:
        v11 = 3;
        goto LABEL_16;
      case 0x10u:
        v11 = 4;
        goto LABEL_16;
    }
    goto LABEL_49;
  }
  Base = 10;
  v11 = 0;
  if ( v10 == 48 )
  {
    if ( v8 )
    {
      --v8;
      v14 = *Buffer++;
      switch ( v14 )
      {
        case 'x':
          Base = 16;
          v11 = 4;
          break;
        case 'o':
          Base = 8;
          v11 = 3;
          break;
        case 'b':
          Base = 2;
          v11 = 1;
          break;
        default:
          ++v8;
          --Buffer;
          break;
      }
      if ( v8 )
        goto LABEL_15;
    }
    v10 = 0;
  }
LABEL_16:
  while ( v10 )
  {
    if ( (unsigned __int16)(v10 - 48) > 9u )
    {
      if ( (unsigned __int16)(v10 - 65) <= 5u )
      {
        v12 = v10 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v10 - 97) > 5u )
          break;
        v12 = v10 - 87;
      }
    }
    else
    {
      v12 = v10 - 48;
    }
    if ( v12 >= Base )
      break;
    v6 = v11 ? v12 | (v6 << v11) : v12 + Base * v6;
    if ( !v8 )
      break;
LABEL_15:
    --v8;
    v10 = *Buffer++;
  }
  if ( v9 == 45 )
    v6 = -v6;
LABEL_19:
  *Value = v6;
  return v5;
}
