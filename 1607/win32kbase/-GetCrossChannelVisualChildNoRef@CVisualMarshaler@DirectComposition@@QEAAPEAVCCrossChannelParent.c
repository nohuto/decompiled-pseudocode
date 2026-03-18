/*
 * XREFs of ?GetCrossChannelVisualChildNoRef@CVisualMarshaler@DirectComposition@@QEAAPEAVCCrossChannelParentVisualMarshaler@2@VResourceHandle@@@Z @ 0x1C0042AC8
 * Callers:
 *     ?CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHandle@@@Z @ 0x1C003EDE0 (-CompleteRemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIVResourceHa.c)
 *     ?CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHandle@@HI0@Z @ 0x1C003EEB8 (-CompleteAddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@QEAAJIIIVResourceHand.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall DirectComposition::CVisualMarshaler::GetCrossChannelVisualChildNoRef(__int64 a1)
{
  _QWORD *v1; // rbx

  v1 = *(_QWORD **)(a1 + 144);
  if ( !v1 )
    return 0LL;
  while ( !(*(unsigned __int8 (__fastcall **)(_QWORD *))(*v1 + 272LL))(v1) )
  {
    v1 = (_QWORD *)v1[19];
    if ( !v1 )
      return 0LL;
  }
  return v1;
}
