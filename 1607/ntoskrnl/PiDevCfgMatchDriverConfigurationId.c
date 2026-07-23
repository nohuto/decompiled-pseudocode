/*
 * XREFs of PiDevCfgMatchDriverConfigurationId @ 0x1401CEB38
 * Callers:
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 * Callees:
 *     _wcsnicmp @ 0x14014DE10 (_wcsnicmp.c)
 */

bool __fastcall PiDevCfgMatchDriverConfigurationId(__int64 a1, const wchar_t *a2)
{
  unsigned __int16 v4; // si
  char v5; // bl
  const wchar_t *v6; // rdi
  size_t v7; // rsi

  v4 = *(_WORD *)(a1 + 40) >> 1;
  v5 = 0;
  if ( !wcsnicmp(a2, *(const wchar_t **)(a1 + 48), v4) && a2[v4] == 58 )
  {
    v6 = &a2[v4 + 1];
    v7 = *(_WORD *)(a1 + 72) >> 1;
    if ( !wcsnicmp(v6, *(const wchar_t **)(a1 + 80), v7) )
      return v6[v7] == 44;
  }
  return v5;
}
