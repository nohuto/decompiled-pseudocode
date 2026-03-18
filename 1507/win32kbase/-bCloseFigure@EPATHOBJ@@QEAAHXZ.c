/*
 * XREFs of ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C0025860
 * Callers:
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C003E1D4 (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     bPolyPolygon @ 0x1C00690F0 (bPolyPolygon.c)
 *     PATHOBJ_bCloseFigure @ 0x1C00B0250 (PATHOBJ_bCloseFigure.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00B3F60 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall EPATHOBJ::bCloseFigure(EPATHOBJ *this)
{
  __int64 result; // rax
  __int64 v2; // rdx
  int v3; // r8d

  result = *((_QWORD *)this + 1);
  if ( result )
  {
    v2 = *(_QWORD *)(result + 40);
    result = 1LL;
    if ( v2 )
    {
      v3 = *(_DWORD *)(v2 + 16);
      if ( (v3 & 8) == 0 )
      {
        *(_DWORD *)(v2 + 16) = v3 | 8;
        ++*((_DWORD *)this + 1);
      }
    }
    *(_DWORD *)(*((_QWORD *)this + 1) + 72LL) |= 1u;
  }
  return result;
}
