/*
 * XREFs of DestroyWindowsTimers @ 0x1C0068948
 * Callers:
 *     xxxFreeWindow @ 0x1C0066C00 (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C00FF3E8 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C004AC90 (FreeTimer.c)
 */

_QWORD *__fastcall DestroyWindowsTimers(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  struct tagTIMER *v4; // rcx

  result = (_QWORD *)gtmrListHead[0];
  v3 = (_QWORD *)gtmrListHead[0];
  while ( v3 != result )
  {
    v4 = (struct tagTIMER *)(v3 - 9);
    v3 = (_QWORD *)*v3;
    if ( *((_QWORD *)v4 + 11) == a1 )
    {
      FreeTimer(v4);
      result = (_QWORD *)gtmrListHead[0];
    }
  }
  return result;
}
