/*
 * XREFs of ?IsSameAsTarget@NullRoutingTarget@@UEBA_NAEBUtagMsgRoutingInfo@@@Z @ 0x1800111C0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

bool __fastcall NullRoutingTarget::IsSameAsTarget(NullRoutingTarget *this, const struct tagMsgRoutingInfo *a2)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 89, 255);
  return 0;
}
