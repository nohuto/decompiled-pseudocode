/*
 * XREFs of MiLocatePhysicalViewInTree @ 0x1401DF40C
 * Callers:
 *     MiAweViewRemover @ 0x140626990 (MiAweViewRemover.c)
 *     NtMapUserPhysicalPages @ 0x140627FF0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140628474 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall MiLocatePhysicalViewInTree(unsigned __int64 a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // r9

  v2 = (_QWORD *)*a2;
  while ( v2 )
  {
    v3 = v2[3];
    if ( a1 > (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) )
    {
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      if ( a1 >= (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) )
        return v2;
      v2 = (_QWORD *)*v2;
    }
  }
  return v2;
}
