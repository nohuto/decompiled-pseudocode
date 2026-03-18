/*
 * XREFs of RtlStringCbCatW @ 0x14001B0D8
 * Callers:
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     WmipInsertStaticNames @ 0x1403D2DE0 (WmipInsertStaticNames.c)
 *     PnpConcatPWSTR @ 0x1404E55A0 (PnpConcatPWSTR.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 *     RtlpGetDynamicTimeZoneInfoHandle @ 0x14053C004 (RtlpGetDynamicTimeZoneInfoHandle.c)
 *     PfSnParametersRead @ 0x140540E38 (PfSnParametersRead.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCbCatW(NTSTRSAFE_PWSTR pszDest, size_t cbDest, NTSTRSAFE_PCWSTR pszSrc)
{
  size_t v3; // r10
  NTSTATUS v4; // r9d
  NTSTRSAFE_PWSTR v6; // rbx
  size_t v7; // rax
  size_t v8; // r8
  char *v9; // rcx
  size_t v10; // rdx
  __int64 v11; // r10
  signed __int64 v12; // r11
  __int16 v13; // ax

  v3 = cbDest >> 1;
  v4 = 0;
  v6 = pszDest;
  if ( (cbDest >> 1) - 1 > 0x7FFFFFFE )
    v4 = -1073741811;
  if ( v4 >= 0 )
  {
    v7 = cbDest >> 1;
    v4 = 0;
    if ( v3 )
    {
      do
      {
        if ( !*pszDest )
          break;
        ++pszDest;
        --v7;
      }
      while ( v7 );
      if ( v7 )
      {
        v8 = v3 - v7;
        goto LABEL_9;
      }
    }
    v4 = -1073741811;
  }
  v8 = 0LL;
LABEL_9:
  if ( v4 >= 0 )
  {
    v9 = (char *)&v6[v8];
    v4 = 0;
    v10 = v3 - v8;
    if ( v3 == v8 )
      goto LABEL_19;
    v11 = 2147483646LL;
    v12 = (char *)pszSrc - v9;
    do
    {
      if ( !v11 )
        break;
      v13 = *(_WORD *)&v9[v12];
      if ( !v13 )
        break;
      *(_WORD *)v9 = v13;
      --v11;
      v9 += 2;
      --v10;
    }
    while ( v10 );
    if ( !v10 )
    {
LABEL_19:
      v9 -= 2;
      v4 = -2147483643;
    }
    *(_WORD *)v9 = 0;
  }
  return v4;
}
