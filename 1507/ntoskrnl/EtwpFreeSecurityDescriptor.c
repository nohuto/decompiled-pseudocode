/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x1404D3424
 * Callers:
 *     EtwpAccessCheckFromState @ 0x1404D33A8 (EtwpAccessCheckFromState.c)
 *     EtwpAllocGuidEntry @ 0x1404D4290 (EtwpAllocGuidEntry.c)
 *     EtwpCheckGuidAccess @ 0x1404D4700 (EtwpCheckGuidAccess.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpUpdateTrace @ 0x1405C48A0 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
