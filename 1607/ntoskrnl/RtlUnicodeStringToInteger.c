/*
 * XREFs of RtlUnicodeStringToInteger @ 0x1404A31F0
 * Callers:
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401406C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140894 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlGetIntegerAtom @ 0x1404283AC (RtlGetIntegerAtom.c)
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 *     _PnpParseIndirectResourceString @ 0x1404A3088 (_PnpParseIndirectResourceString.c)
 *     ExpSetCurrentUserUILanguage @ 0x1405493B0 (ExpSetCurrentUserUILanguage.c)
 *     ExpGetCurrentUserUILanguage @ 0x140549964 (ExpGetCurrentUserUILanguage.c)
 *     ExpGetUILanguagePolicy @ 0x140549A8C (ExpGetUILanguagePolicy.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C5D8 (CmpGetAcpiProfileInformation.c)
 *     WdipSemLoadNextEndEvent @ 0x140565058 (WdipSemLoadNextEndEvent.c)
 *     WdipSemLoadNextScenario @ 0x1405658A8 (WdipSemLoadNextScenario.c)
 *     PopDetectSimulatedHeteroProcessors @ 0x14056AE44 (PopDetectSimulatedHeteroProcessors.c)
 *     PiDcInitUpdateProperties @ 0x140577CF8 (PiDcInitUpdateProperties.c)
 *     PiCMDeleteDeviceKey @ 0x1406470A0 (PiCMDeleteDeviceKey.c)
 *     _PnpGetGenericStorePropertyKeys @ 0x1406DC340 (_PnpGetGenericStorePropertyKeys.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlUnicodeStringToInteger(PCUNICODE_STRING String, ULONG Base, PULONG Value)
{
  ULONG v4; // ebx
  ULONG v5; // r9d
  NTSTATUS v6; // esi
  unsigned __int16 Length; // ax
  wchar_t *Buffer; // r10
  int v9; // r8d
  unsigned __int16 v10; // di
  unsigned __int16 v11; // ax
  int v12; // r11d
  unsigned int v13; // edx
  __int16 v15; // ax

  v4 = Base;
  v5 = 0;
  v6 = 0;
  Length = String->Length;
  if ( !String->Length || (Length & 1) != 0 )
    goto LABEL_39;
  Buffer = String->Buffer;
  v9 = Length >> 1;
  v10 = 0;
  if ( v9 )
  {
    while ( 1 )
    {
      --v9;
      v10 = *Buffer++;
      if ( v10 > 0x20u )
        break;
      if ( !v9 )
      {
        v10 = 0;
        break;
      }
    }
  }
  else
  {
    v9 = -1;
  }
  v11 = v10;
  if ( ((v10 - 43) & 0xFFFD) == 0 )
  {
    if ( v9 )
    {
      --v9;
      v11 = *Buffer++;
    }
    else
    {
      v11 = 0;
    }
  }
  if ( !Base )
  {
    v4 = 10;
    v12 = 0;
    if ( v11 == 48 )
    {
      if ( !v9 )
        goto LABEL_41;
      --v9;
      v15 = *Buffer++;
      switch ( v15 )
      {
        case 'x':
          v4 = 16;
          v12 = 4;
          break;
        case 'o':
          v4 = 8;
          v12 = 3;
          break;
        case 'b':
          v4 = 2;
          v12 = 1;
          break;
        default:
          ++v9;
          --Buffer;
          break;
      }
      if ( v9 )
      {
        --v9;
        v11 = *Buffer++;
      }
      else
      {
LABEL_41:
        v11 = 0;
      }
    }
    goto LABEL_9;
  }
  if ( Base != 16 )
  {
    switch ( Base )
    {
      case 2u:
        v12 = 1;
        goto LABEL_9;
      case 8u:
        v12 = 3;
        goto LABEL_9;
      case 0xAu:
        v12 = 0;
        goto LABEL_9;
    }
LABEL_39:
    v6 = -1073741811;
    goto LABEL_22;
  }
  v12 = 4;
LABEL_9:
  while ( v11 )
  {
    if ( (unsigned __int16)(v11 - 48) > 9u )
    {
      if ( (unsigned __int16)(v11 - 65) <= 5u )
      {
        v13 = v11 - 55;
      }
      else
      {
        if ( (unsigned __int16)(v11 - 97) > 5u )
          break;
        v13 = v11 - 87;
      }
    }
    else
    {
      v13 = v11 - 48;
    }
    if ( v13 >= v4 )
      break;
    v5 = v12 ? v13 | (v5 << v12) : v13 + v4 * v5;
    if ( !v9 )
      break;
    --v9;
    v11 = *Buffer++;
  }
  if ( v10 == 45 )
    v5 = -v5;
LABEL_22:
  *Value = v5;
  return v6;
}
