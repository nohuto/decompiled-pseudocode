/*
 * XREFs of ?GetClass@CMILBrushSolid@@UEAAPEAVCMILBrush@@XZ @ 0x18018C2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CMILBrushSolid::GetClass(CMILBrushSolid *this)
{
  __int64 v1; // rdx

  v1 = 0LL;
  if ( this != (CMILBrushSolid *)56 )
    return (CMILBrushSolid *)((char *)this - 32);
  return (struct CMILBrush *)v1;
}
