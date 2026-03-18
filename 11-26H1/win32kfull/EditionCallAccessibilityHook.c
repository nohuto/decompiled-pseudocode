/*
 * XREFs of EditionCallAccessibilityHook @ 0x1402588E0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?xxxCallHook@@YAHH_K_JH@Z @ 0x14003A510 (-xxxCallHook@@YAHH_K_JH@Z.c)
 */

__int64 __fastcall EditionCallAccessibilityHook(__int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx

  v2 = *((_DWORD *)PtiCurrent(a1) + 178);
  if ( ((*(_DWORD *)(**((_QWORD **)PtiCurrent(v3) + 62) + 16LL) | v2) & 0x800) != 0 )
    return xxxCallHook(11LL, a1, 0LL, 10);
  else
    return 0LL;
}
