/*
 * XREFs of ?OnCursorOrientationChanged@MobileCursorBroker@@UEAAJUCursorId@@UCursorOrientationData@@@Z @ 0x180026430
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall MobileCursorBroker::OnCursorOrientationChanged(__int64 a1)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 466, 255);
  return 2147549183LL;
}
