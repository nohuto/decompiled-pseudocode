/*
 * XREFs of GetKbdLangSwitch @ 0x1C01126D8
 * Callers:
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  int v2; // [rsp+48h] [rbp+10h] BYREF
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h] BYREF

  FastGetProfileIntW(a1, 25LL, L"Hotkey", 1LL, &v2, 0);
  gbGraveKeyToggle = 0;
  switch ( v2 )
  {
    case 2:
      LOBYTE(gLangToggle[0]) = 17;
      return 1LL;
    case 3:
LABEL_8:
      gLangToggle[0] = 0;
      return 1LL;
    case 4:
      ZwQueryDefaultLocale(0, &DefaultLocaleId);
      gbGraveKeyToggle = (DefaultLocaleId & 0x3FF) == 30;
      goto LABEL_8;
  }
  LOBYTE(gLangToggle[0]) = 18;
  return 1LL;
}
