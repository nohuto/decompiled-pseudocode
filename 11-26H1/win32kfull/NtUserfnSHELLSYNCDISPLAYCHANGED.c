/*
 * XREFs of NtUserfnSHELLSYNCDISPLAYCHANGED @ 0x1402C1EC0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserfnSHELLSYNCDISPLAYCHANGED(__int64 a1)
{
  PtiCurrent(a1);
  UserSetLastError(5);
  return 0LL;
}
