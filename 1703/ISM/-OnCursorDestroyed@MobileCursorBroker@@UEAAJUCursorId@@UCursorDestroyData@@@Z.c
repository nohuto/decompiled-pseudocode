/*
 * XREFs of ?OnCursorDestroyed@MobileCursorBroker@@UEAAJUCursorId@@UCursorDestroyData@@@Z @ 0x1800263F0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall MobileCursorBroker::OnCursorDestroyed(__int64 a1)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 451, 255);
  return 2147549183LL;
}
