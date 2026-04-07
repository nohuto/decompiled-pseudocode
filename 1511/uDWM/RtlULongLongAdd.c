/*
 * XREFs of RtlULongLongAdd @ 0x180048D30
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180048D64 (-SLGetHelper@@YA_NPEBG@Z.c)
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
