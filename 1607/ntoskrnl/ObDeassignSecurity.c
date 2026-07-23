/*
 * XREFs of ObDeassignSecurity @ 0x1404C54D8
 * Callers:
 *     WmipSecurityMethod @ 0x1404C53C0 (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObDeassignSecurity(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  *a1 = 0LL;
  ObDereferenceSecurityDescriptor(v2 & 0xFFFFFFFFFFFFFFF0uLL, (v2 & 0xF) + 1);
  return 0LL;
}
