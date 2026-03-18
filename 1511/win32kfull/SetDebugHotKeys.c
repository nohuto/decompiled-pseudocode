/*
 * XREFs of SetDebugHotKeys @ 0x1C009EA50
 * Callers:
 *     RawInputThread @ 0x1C009B5A0 (RawInputThread.c)
 * Callees:
 *     _RegisterHotKey @ 0x1C008A6EC (_RegisterHotKey.c)
 */

__int64 SetDebugHotKeys()
{
  int v0; // eax
  int v1; // ecx
  ULONG_PTR BugCheckParameter2; // [rsp+20h] [rbp-18h]
  ULONG_PTR BugCheckParameter2a; // [rsp+20h] [rbp-18h]
  ULONG_PTR v5; // [rsp+40h] [rbp+8h] BYREF

  FastGetProfileDwordW(0LL, 21LL, L"UserDebuggerHotkey", 0LL, &v5, 0);
  v0 = v5;
  if ( !(_DWORD)v5 )
  {
    if ( (unsigned __int8)gKeyboardInfo > 8u || (v1 = 404, v0 = 123, !_bittest(&v1, (unsigned __int8)gKeyboardInfo)) )
      v0 = 109;
    LODWORD(v5) = v0;
  }
  LODWORD(BugCheckParameter2) = v0;
  RegisterHotKey((struct tagWND *)1, 0LL, 4294967291LL, 0LL, BugCheckParameter2);
  LODWORD(BugCheckParameter2a) = v5;
  return RegisterHotKey((struct tagWND *)1, 0LL, 4294967290LL, 4LL, BugCheckParameter2a);
}
