/*
 * XREFs of _UnregisterHotKey @ 0x1C0097BF4
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C0097B80 (NtUserUnregisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00ED9E0 (_RegisterWindowArrangementCallout.c)
 * Callees:
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C009805C (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z.c)
 *     UserSetLastError @ 0x1C00A6F5C (UserSetLastError.c)
 */

__int64 __fastcall UnregisterHotKey(struct tagWND *a1, int a2)
{
  struct tagHOTKEY *v3; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)FindHotKey(gptiCurrent, a1, a2, 0, 0, 1, &v3) )
  {
    qword_1C0328BA0 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419LL);
    return 0LL;
  }
}
