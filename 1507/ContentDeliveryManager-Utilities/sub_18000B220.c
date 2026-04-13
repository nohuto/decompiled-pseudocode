/*
 * XREFs of sub_18000B220 @ 0x18000B220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void *__fastcall sub_18000B220(void *a1, char a2)
{
  bool v2; // zf

  v2 = *((_DWORD *)a1 + 8) == 0;
  *(_QWORD *)a1 = off_18002E1F0;
  if ( !v2 )
    free(*((void **)a1 + 3));
  free(*((void **)a1 + 5));
  *(_QWORD *)a1 = &off_18002D990;
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
