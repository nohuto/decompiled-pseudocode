/*
 * XREFs of RtlULongMult @ 0x1800DB9D8
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongMult(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  unsigned __int64 v3; // r9

  v3 = a2 * (unsigned __int64)a1;
  if ( v3 > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
