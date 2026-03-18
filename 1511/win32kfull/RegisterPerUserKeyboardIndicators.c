/*
 * XREFs of RegisterPerUserKeyboardIndicators @ 0x1C009D544
 * Callers:
 *     PrepareForLogoff @ 0x1C009D4B0 (PrepareForLogoff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPerUserKeyboardIndicators(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 48;
  v2 = (unsigned __int16)((BYTE4(gafAsyncKeyState[2]) & 2) + 48);
  return FastWriteProfileStringW(a1, 13LL, L"InitialKeyboardIndicators", &v2);
}
