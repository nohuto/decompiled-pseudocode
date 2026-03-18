/*
 * XREFs of ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18011B788
 * Callers:
 *     ?ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180085CF4 (-ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18011DABC (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011E31C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     <none>
 */

LONGLONG __fastcall QpcStopwatch::GetElapsed(QpcStopwatch *this)
{
  LONGLONG result; // rax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  result = 0LL;
  if ( *(_QWORD *)this )
  {
    QueryPerformanceCounter(&PerformanceCount);
    return PerformanceCount.QuadPart - *(_QWORD *)this;
  }
  return result;
}
