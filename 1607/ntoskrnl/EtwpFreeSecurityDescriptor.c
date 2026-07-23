/*
 * XREFs of EtwpFreeSecurityDescriptor @ 0x140406F58
 * Callers:
 *     EtwpAccessCheckFromState @ 0x140406EDC (EtwpAccessCheckFromState.c)
 *     EtwpAllocGuidEntry @ 0x14048E200 (EtwpAllocGuidEntry.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpCheckGuidAccess @ 0x140491D18 (EtwpCheckGuidAccess.c)
 *     EtwpUpdateTrace @ 0x14053F6F8 (EtwpUpdateTrace.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
