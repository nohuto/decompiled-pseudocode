/*
 * XREFs of W32kCddDisableGdiHwAcceleration @ 0x1402139D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall W32kCddDisableGdiHwAcceleration(__int64 a1)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rcx

  v1 = 0LL;
  if ( PtiCurrent(a1) )
    v1 = *((_QWORD *)PtiCurrent(v2) + 85);
  return (v1 >> 34) & 1;
}
