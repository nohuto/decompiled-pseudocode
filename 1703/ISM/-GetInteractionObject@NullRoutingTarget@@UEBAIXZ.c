/*
 * XREFs of ?GetInteractionObject@NullRoutingTarget@@UEBAIXZ @ 0x180011320
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall NullRoutingTarget::GetInteractionObject(NullRoutingTarget *this)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 152, 255);
  return 0LL;
}
