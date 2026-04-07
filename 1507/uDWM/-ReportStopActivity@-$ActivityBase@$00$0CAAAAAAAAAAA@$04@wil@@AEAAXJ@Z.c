/*
 * XREFs of ?ReportStopActivity@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@AEAAXJ@Z @ 0x18006F44C
 * Callers:
 *     ?Destroy@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ @ 0x18006E0D8 (-Destroy@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@IEAAXXZ.c)
 *     ?Stop@?$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z @ 0x18006FC54 (-Stop@-$ActivityBase@$00$0CAAAAAAAAAAA@$04@wil@@QEAAXJ@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall wil::ActivityBase<1,35184372088832,5>::ReportStopActivity(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 8LL))(a1);
}
