/*
 * XREFs of RegisterPerUserKeyboardIndicators @ 0x1C01331E4
 * Callers:
 *     PrepareForLogoff @ 0x1C0133150 (PrepareForLogoff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPerUserKeyboardIndicators(__int64 a1)
{
  int v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 48;
  v2 = (unsigned __int16)((gafAsyncKeyState[36] & 2) + 48);
  return FastWriteProfileStringW(a1, 13LL, L"InitialKeyboardIndicators", &v2);
}
