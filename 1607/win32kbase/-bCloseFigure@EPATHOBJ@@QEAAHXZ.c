/*
 * XREFs of ?bCloseFigure@EPATHOBJ@@QEAAHXZ @ 0x1C00469A0
 * Callers:
 *     bPolyPolygon @ 0x1C00833F0 (bPolyPolygon.c)
 *     ?bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z @ 0x1C00834CC (-bOutline@RGNOBJ@@QEAAHAEAVEPATHOBJ@@PEAVEXFORMOBJ@@@Z.c)
 *     PATHOBJ_bCloseFigure @ 0x1C00BE1F0 (PATHOBJ_bCloseFigure.c)
 *     ?iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z @ 0x1C00C1AE0 (-iCombine@DC@@QEAAJPEAVEXFORMOBJ@@PEAU_RECTL@@J@Z.c)
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
