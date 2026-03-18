/*
 * XREFs of SetDebugHotKeys @ 0x1C0146C38
 * Callers:
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C003D9A4 (_RegisterHotKey.c)
 */

__int64 SetDebugHotKeys()
{
  int v0; // eax
  int v1; // ecx
  unsigned int v3; // [rsp+40h] [rbp+8h] BYREF

  FastGetProfileDwordW(0LL, 21LL, L"UserDebuggerHotkey", 0LL, &v3, 0);
  v0 = v3;
  if ( !v3 )
  {
    if ( (unsigned __int8)gKeyboardInfo > 8u || (v1 = 404, v0 = 123, !_bittest(&v1, (unsigned __int8)gKeyboardInfo)) )
      v0 = 109;
    v3 = v0;
  }
  RegisterHotKey((struct tagWND *)1, 0LL, -5, 0, v0);
  return RegisterHotKey((struct tagWND *)1, 0LL, -6, 4u, v3);
}
