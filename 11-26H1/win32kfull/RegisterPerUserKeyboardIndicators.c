/*
 * XREFs of RegisterPerUserKeyboardIndicators @ 0x14025A880
 * Callers:
 *     PrepareForLogoff @ 0x140292110 (PrepareForLogoff.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RegisterPerUserKeyboardIndicators(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rax
  int v5; // [rsp+38h] [rbp+10h] BYREF

  v5 = *(_DWORD *)L"0";
  UserSessionState = W32GetUserSessionState(a1, a2);
  LOWORD(v5) = (*(_BYTE *)(UserSessionState + 14364) & 2) + v5;
  return FastWriteProfileStringW(a1, 13LL, L"InitialKeyboardIndicators", &v5);
}
