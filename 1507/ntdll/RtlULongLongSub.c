/*
 * XREFs of RtlULongLongSub @ 0x180070C34
 * Callers:
 *     LdrpResSearchResourceInsideDirectory @ 0x1800196E8 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongSub(unsigned __int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  if ( a1 < a2 )
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 - a2;
    return 0LL;
  }
}
