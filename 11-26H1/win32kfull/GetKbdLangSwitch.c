/*
 * XREFs of GetKbdLangSwitch @ 0x140247C74
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x1401CB418 (xxxSystemParametersInfoWorker.c)
 *     xxxUpdatePerUserSystemParameters @ 0x14023F980 (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetKbdLangSwitch(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v4; // rcx
  int v5; // [rsp+48h] [rbp+10h] BYREF
  DWORD DefaultLocaleId; // [rsp+50h] [rbp+18h] BYREF

  v5 = 0;
  DefaultLocaleId = 0;
  FastGetProfileIntW(a1, 25LL, L"Hotkey", 1LL, &v5, 0);
  *(_DWORD *)(W32GetUserSessionState(v2, v1) + 14272) = 0;
  if ( v5 == 4 && ZwQueryDefaultLocale(0, &DefaultLocaleId) >= 0 )
  {
    v4 = (unsigned __int16)DefaultLocaleId;
    if ( (DefaultLocaleId & 0x3FF) == 0x1E )
    {
      LOWORD(v4) = DefaultLocaleId & 0x3FF;
      *(_DWORD *)(W32GetUserSessionState(v4, 1023LL) + 14272) = 1;
    }
  }
  return 1LL;
}
