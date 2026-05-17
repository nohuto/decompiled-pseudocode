/*
 * XREFs of RtlULongLongAdd @ 0x18001A694
 * Callers:
 *     LdrpResGetResourceDirectory @ 0x180018C10 (LdrpResGetResourceDirectory.c)
 *     LdrpResSearchResourceInsideDirectory @ 0x1800196E8 (LdrpResSearchResourceInsideDirectory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongLongAdd(unsigned __int64 a1, __int64 a2, _QWORD *a3)
{
  if ( a1 + a2 < a1 )
  {
    *a3 = -1LL;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 + a2;
    return 0LL;
  }
}
