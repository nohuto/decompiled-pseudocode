/*
 * XREFs of DestroyThreadsTimers @ 0x1C00E1170
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C004AC90 (FreeTimer.c)
 */

_QWORD *__fastcall DestroyThreadsTimers(__int64 a1)
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
    if ( *((_QWORD *)v4 + 3) == a1 || *((_QWORD *)v4 + 13) == a1 )
    {
      FreeTimer(v4);
      result = (_QWORD *)gtmrListHead[0];
    }
  }
  return result;
}
