/*
 * XREFs of RtlAppendStringToString @ 0x1800D2550
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlAppendStringToString(unsigned __int16 *a1, __int16 *a2)
{
  unsigned __int16 v2; // di
  __int64 v4; // rcx

  v2 = *a2;
  if ( *a2 )
  {
    v4 = *a1;
    if ( (int)(v4 + v2) > a1[1] )
      return 3221225507LL;
    memmove((void *)(*((_QWORD *)a1 + 1) + v4), *((const void **)a2 + 1), v2);
    *a1 += v2;
  }
  return 0LL;
}
