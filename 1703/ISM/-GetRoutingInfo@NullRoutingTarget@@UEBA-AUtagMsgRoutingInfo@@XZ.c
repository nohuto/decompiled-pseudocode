/*
 * XREFs of ?GetRoutingInfo@NullRoutingTarget@@UEBA?AUtagMsgRoutingInfo@@XZ @ 0x1800112D0
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void *__fastcall NullRoutingTarget::GetRoutingInfo(__int64 a1, void *a2)
{
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 4, 143, 255);
  memset(a2, 0, 0x28uLL);
  return a2;
}
