/*
 * XREFs of sub_18000BBD0 @ 0x18000BBD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BYTE *__fastcall sub_18000BBD0(_BYTE *a1, char a2)
{
  bool v2; // zf
  __int64 v5; // rbx

  v2 = a1[16] == 0;
  *(_QWORD *)a1 = off_18002DEF8;
  if ( !v2 )
  {
    v5 = *((_QWORD *)a1 + 1);
    EventUnregister(*(_QWORD *)(v5 + 32));
    *(_QWORD *)(v5 + 32) = 0LL;
    *(_DWORD *)v5 = 0;
  }
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}
