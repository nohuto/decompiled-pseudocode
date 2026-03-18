/*
 * XREFs of ?RegisterSourcesForAnimation@CExpression@@QEAAJPEAVCBaseExpression@@@Z @ 0x1801486F4
 * Callers:
 *     ?ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_ADDEXPRESSIONRESOURCES@@PEBXI@Z @ 0x18010A764 (-ProcessAddExpressionResources@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEA.c)
 *     ?ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_CONDITIONALEXPRESSION_ADDCONDITIONANIMATIONRESOURCES@@PEBXI@Z @ 0x18010A904 (-ProcessAddConditionAnimationResources@CConditionalExpression@@QEAAJPEAVCResourceTable@@PEBUMILC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18008B648 (-RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@.c)
 */

__int64 __fastcall CExpression::RegisterSourcesForAnimation(CExpression *this, struct CBaseExpression *a2)
{
  unsigned int v2; // edi
  int v5; // eax
  unsigned int v6; // ebx

  v2 = 0;
  if ( *((_DWORD *)this + 124) )
  {
    while ( 1 )
    {
      v5 = CExpression::RegisterSourceForAnimation(
             this,
             a2,
             (const struct ExpressionReferenceInfo *)(*((_QWORD *)this + 59) + 32LL * v2));
      v6 = v5;
      if ( v5 < 0 )
        break;
      if ( ++v2 >= *((_DWORD *)this + 124) )
        return 0;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x171u);
  }
  else
  {
    return 0;
  }
  return v6;
}
