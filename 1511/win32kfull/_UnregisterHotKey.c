/*
 * XREFs of _UnregisterHotKey @ 0x1C008A5A4
 * Callers:
 *     NtUserUnregisterHotKey @ 0x1C008A530 (NtUserUnregisterHotKey.c)
 *     _RegisterWindowArrangementCallout @ 0x1C00D5A10 (_RegisterWindowArrangementCallout.c)
 * Callees:
 *     UserSetLastError @ 0x1C00503B0 (UserSetLastError.c)
 *     ?FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z @ 0x1C008A958 (-FindHotKey@@YAHPEAUtagTHREADINFO@@PEAUtagWND@@HIIHPEAPEAUtagHOTKEY@@@Z.c)
 */

__int64 __fastcall UnregisterHotKey(struct tagWND *a1, int a2)
{
  struct tagHOTKEY *v3; // [rsp+60h] [rbp+18h] BYREF

  if ( (unsigned int)FindHotKey(gptiCurrent, a1, a2, 0, 0, 1, &v3) )
  {
    qword_1C03234F8 = 0LL;
    return 1LL;
  }
  else
  {
    UserSetLastError(1419);
    return 0LL;
  }
}
