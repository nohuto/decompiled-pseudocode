/*
 * XREFs of RtlUnicodeStringToInteger @ 0x180075D40
 * Callers:
 *     RtlpMuiRegAddMultiSzToLangFallbackList @ 0x18001D214 (RtlpMuiRegAddMultiSzToLangFallbackList.c)
 *     RtlGetFileMUIPath @ 0x18003F210 (RtlGetFileMUIPath.c)
 *     RtlGetIntegerAtom @ 0x180043F90 (RtlGetIntegerAtom.c)
 *     RtlQueryImageFileKeyOption @ 0x18007D1E0 (RtlQueryImageFileKeyOption.c)
 *     LdrpInitializeExecutionOptions @ 0x1800902B4 (LdrpInitializeExecutionOptions.c)
 *     RtlGetUILanguageInfo @ 0x1800DC890 (RtlGetUILanguageInfo.c)
 *     RtlUnicodeStringToLcid @ 0x1800DCE2C (RtlUnicodeStringToLcid.c)
 *     RtlpSetPreferredUILanguages @ 0x1800DEC00 (RtlpSetPreferredUILanguages.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1800EB1AC (RtlpMuiRegAddAlternateCodePage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUnicodeStringToInteger(unsigned __int16 *a1, unsigned int a2, int *a3)
{
  unsigned int v5; // r9d
  int v6; // r10d
  unsigned __int16 *v7; // r8
  int v8; // edx
  unsigned __int16 v9; // r14
  unsigned __int16 v10; // cx
  int v11; // r11d
  unsigned int v12; // eax
  __int16 v14; // ax

  v5 = 0;
  v6 = 0;
  if ( !*a1 || (*(_BYTE *)a1 & 1) != 0 )
  {
LABEL_49:
    v5 = -1073741811;
    goto LABEL_19;
  }
  v7 = (unsigned __int16 *)*((_QWORD *)a1 + 1);
  v8 = *a1 >> 1;
  v9 = 0;
  if ( v8 )
  {
    while ( 1 )
    {
      --v8;
      v9 = *v7++;
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
      v10 = *v7++;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( a2 )
  {
    switch ( a2 )
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
  a2 = 10;
  v11 = 0;
  if ( v10 == 48 )
  {
    if ( v8 )
    {
      --v8;
      v14 = *v7++;
      switch ( v14 )
      {
        case 'x':
          a2 = 16;
          v11 = 4;
          break;
        case 'o':
          a2 = 8;
          v11 = 3;
          break;
        case 'b':
          a2 = 2;
          v11 = 1;
          break;
        default:
          ++v8;
          --v7;
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
    if ( v12 >= a2 )
      break;
    v6 = v11 ? v12 | (v6 << v11) : v12 + a2 * v6;
    if ( !v8 )
      break;
LABEL_15:
    --v8;
    v10 = *v7++;
  }
  if ( v9 == 45 )
    v6 = -v6;
LABEL_19:
  *a3 = v6;
  return v5;
}
