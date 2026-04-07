/*
 * XREFs of RtlUIntAdd @ 0x180049EDC
 * Callers:
 *     ?SLGetHelper@@YA_NPEBG@Z @ 0x180049EF4 (-SLGetHelper@@YA_NPEBG@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlUIntAdd(unsigned int a1, int a2, _DWORD *a3)
{
  if ( a1 + a2 < a1 )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = a1 + a2;
    return 0LL;
  }
}
