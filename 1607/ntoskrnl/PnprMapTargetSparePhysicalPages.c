/*
 * XREFs of PnprMapTargetSparePhysicalPages @ 0x1403DBFB0
 * Callers:
 *     <none>
 * Callees:
 *     PnprMapPhysicalPages @ 0x1403DBDEC (PnprMapPhysicalPages.c)
 */

__int64 __fastcall PnprMapTargetSparePhysicalPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned __int64 *a3,
        _QWORD *a4,
        _QWORD *a5)
{
  __int64 v5; // rdi
  int v6; // r10d
  SIZE_T v8; // rdx
  int v9; // ecx
  int v10; // ecx
  SIZE_T v11; // rcx
  int v12; // eax
  int v13; // eax

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v6 = 0;
  if ( a1 == 0x7FFFFFFFFFFFFFFFLL
    || (v6 = PnprMapPhysicalPages((PMDL *)(*(_QWORD *)(PnprContext + 136) + 24 * v5), a1, a3, a4), v6 >= 0) )
  {
    if ( a2 != 0x7FFFFFFFFFFFFFFFLL )
    {
      v6 = PnprMapPhysicalPages((PMDL *)(*(_QWORD *)(PnprContext + 144) + 24 * v5), a2, a3, a5);
      if ( v6 < 0 )
      {
        v11 = PnprContext;
        v12 = *(_DWORD *)(PnprContext + 10744);
        if ( !v12 )
          v12 = 4218;
        *(_DWORD *)(PnprContext + 10744) = v12;
        v13 = *(_DWORD *)(v11 + 10748);
        if ( !v13 )
          v13 = 10;
        *(_DWORD *)(v11 + 10748) = v13;
      }
    }
  }
  else
  {
    v8 = PnprContext;
    v9 = *(_DWORD *)(PnprContext + 10744);
    if ( !v9 )
      v9 = 4206;
    *(_DWORD *)(PnprContext + 10744) = v9;
    v10 = *(_DWORD *)(v8 + 10748);
    if ( !v10 )
      v10 = 10;
    *(_DWORD *)(v8 + 10748) = v10;
  }
  return (unsigned int)v6;
}
