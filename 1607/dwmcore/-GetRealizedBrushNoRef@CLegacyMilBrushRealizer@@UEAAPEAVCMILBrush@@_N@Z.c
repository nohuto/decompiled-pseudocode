/*
 * XREFs of ?GetRealizedBrushNoRef@CLegacyMilBrushRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18002E9E0
 * Callers:
 *     ?GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z @ 0x18002EC40 (-GetRealizedBrushNoRef@CBrushResourceRealizer@@UEAAPEAVCMILBrush@@_N@Z.c)
 * Callees:
 *     <none>
 */

struct CMILBrush *__fastcall CLegacyMilBrushRealizer::GetRealizedBrushNoRef(CLegacyMilBrushRealizer *this, char a2)
{
  struct CMILBrush *result; // rax

  result = (struct CMILBrush *)*((_QWORD *)this + 12);
  if ( a2 && !result )
  {
    result = (CLegacyMilBrushRealizer *)((char *)this + 16);
    if ( this != (CLegacyMilBrushRealizer *)-16LL )
      return (CLegacyMilBrushRealizer *)((char *)this + 40);
  }
  return result;
}
