/*
 * XREFs of ?RemoveAt@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x14000BBD4
 * Callers:
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ @ 0x14000E950 (-ResolveFormatConflictsLeftRight@CPipeInstance@@AEAAJXZ.c)
 *     ?ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ @ 0x14000F5C0 (-ResolveFormatConflictsRightLeft@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140027140 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

void __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAt(_QWORD *a1, _QWORD *a2)
{
  _QWORD *v2; // r8
  __int64 v3; // rax
  bool v4; // zf

  v2 = a1;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  if ( a2 != (_QWORD *)*a1 )
    a1 = (_QWORD *)a2[1];
  *a1 = *a2;
  v3 = a2[1];
  if ( a2 == (_QWORD *)v2[1] )
    v2[1] = v3;
  else
    *(_QWORD *)(*a2 + 8LL) = v3;
  *a2 = v2[4];
  v4 = v2[2]-- == 1LL;
  v2[4] = a2;
  if ( v4 )
    ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveAll((__int64)v2);
}
