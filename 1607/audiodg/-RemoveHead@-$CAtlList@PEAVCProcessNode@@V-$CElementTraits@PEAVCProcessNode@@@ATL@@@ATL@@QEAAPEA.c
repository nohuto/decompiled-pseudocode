/*
 * XREFs of ?RemoveHead@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@QEAAPEAVCProcessNode@@XZ @ 0x1400251E8
 * Callers:
 *     ?CleanupProcessNodeList@@YAXAEAV?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@@Z @ 0x14002DE08 (-CleanupProcessNodeList@@YAXAEAV-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@.c)
 * Callees:
 *     ?FreeNode@?$CAtlList@PEAVCProcessNode@@V?$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAVCNode@12@@Z @ 0x140025230 (-FreeNode@-$CAtlList@PEAVCProcessNode@@V-$CElementTraits@PEAVCProcessNode@@@ATL@@@ATL@@AEAAXPEAV.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::RemoveHead(__int64 a1)
{
  __int64 *v1; // rdx
  __int64 v2; // rax
  __int64 v3; // rbx

  v1 = *(__int64 **)a1;
  if ( !*(_QWORD *)a1 )
    ATL::AtlThrowImpl(-2147467259);
  v2 = *v1;
  v3 = v1[2];
  *(_QWORD *)a1 = *v1;
  if ( v2 )
    *(_QWORD *)(v2 + 8) = 0LL;
  else
    *(_QWORD *)(a1 + 8) = 0LL;
  ATL::CAtlList<CProcessNode *,ATL::CElementTraits<CProcessNode *>>::FreeNode();
  return v3;
}
