/*
 * XREFs of ?GetInputSink@NullRoutingTarget@@UEBAPEAXXZ @ 0x180011290
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

void *__fastcall NullRoutingTarget::GetInputSink(NullRoutingTarget *this)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 134, 255);
  return 0LL;
}
