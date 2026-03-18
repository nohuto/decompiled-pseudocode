/*
 * XREFs of ?vRestorePath@@YAXAEAVXDCOBJ@@J@Z @ 0x1C027C120
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vRestorePath(struct XDCOBJ *a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)a1;
  if ( *(_QWORD *)(v1 + 168) )
  {
    if ( (*(_DWORD *)(v1 + 176) & 2) == 0 )
    {
      *(_DWORD *)(v1 + 176) &= ~1u;
      DC::hpath((DC *)v1, 0LL);
    }
  }
}
