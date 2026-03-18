/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x14046D564
 * Callers:
 *     EtwpAccessCheckFromState @ 0x14046D4E8 (EtwpAccessCheckFromState.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x1404CEC4C (EtwpCheckGuidAccess.c)
 *     EtwpAllocGuidEntry @ 0x1404CEEAC (EtwpAllocGuidEntry.c)
 *     EtwpUpdateTrace @ 0x140545148 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeSecurityDescriptor(void **a1)
{
  void *v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    if ( v2 != (void *)EtwpDefaultTraceSecurityDescriptor && v2 != (void *)WmipDefaultAccessSd )
      ExFreePoolWithTag(v2, 0);
    *a1 = 0LL;
  }
}
