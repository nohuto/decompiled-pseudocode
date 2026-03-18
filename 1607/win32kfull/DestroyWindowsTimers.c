/*
 * XREFs of DestroyWindowsTimers @ 0x1C0056A08
 * Callers:
 *     xxxFreeWindow @ 0x1C00543AC (xxxFreeWindow.c)
 *     ?xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z @ 0x1C0120F94 (-xxxClientShutdown2@@YAJPEAUtagBWL@@I_K@Z.c)
 * Callees:
 *     FreeTimer @ 0x1C00ECEE0 (FreeTimer.c)
 */

_QWORD *__fastcall DestroyWindowsTimers(__int64 a1)
{
  _QWORD *result; // rax
  _QWORD *v3; // rbx
  struct tagTIMER *v4; // rcx

  result = (_QWORD *)gtmrListHead;
  v3 = (_QWORD *)gtmrListHead;
  while ( v3 != result )
  {
    v4 = (struct tagTIMER *)(v3 - 9);
    v3 = (_QWORD *)*v3;
    if ( *((_QWORD *)v4 + 11) == a1 )
    {
      FreeTimer(v4);
      result = (_QWORD *)gtmrListHead;
    }
  }
  return result;
}
