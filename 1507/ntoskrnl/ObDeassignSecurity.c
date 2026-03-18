/*
 * XREFs of ObDeassignSecurity @ 0x140557BA0
 * Callers:
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 * Callees:
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 */

__int64 __fastcall ObDeassignSecurity(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx

  v5 = *a1;
  *a1 = 0LL;
  ObDereferenceSecurityDescriptor(v5 & 0xFFFFFFFFFFFFFFF0uLL, (v5 & 0xF) + 1, a3, a4);
  return 0LL;
}
