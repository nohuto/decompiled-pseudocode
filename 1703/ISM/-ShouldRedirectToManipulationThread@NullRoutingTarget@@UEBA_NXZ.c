/*
 * XREFs of ?ShouldRedirectToManipulationThread@NullRoutingTarget@@UEBA_NXZ @ 0x180011210
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

bool __fastcall NullRoutingTarget::ShouldRedirectToManipulationThread(NullRoutingTarget *this)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq((__int64)this, &MinInput_Warning_CheckResult, 4, 116, 255);
  return 0;
}
