/*
 * XREFs of MiLocatePhysicalViewInTree @ 0x140224844
 * Callers:
 *     MiAweViewRemover @ 0x1406A5CE0 (MiAweViewRemover.c)
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 * Callees:
 *     MiPhysicalViewCompareVpn @ 0x140224884 (MiPhysicalViewCompareVpn.c)
 */

_QWORD *__fastcall MiLocatePhysicalViewInTree(__int64 a1, _QWORD *a2)
{
  _QWORD *v2; // rbx
  int v4; // eax

  v2 = (_QWORD *)*a2;
  while ( v2 )
  {
    v4 = MiPhysicalViewCompareVpn(a1, v2);
    if ( v4 >= 0 )
    {
      if ( v4 <= 0 )
        return v2;
      v2 = (_QWORD *)v2[1];
    }
    else
    {
      v2 = (_QWORD *)*v2;
    }
  }
  return v2;
}
