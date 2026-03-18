/*
 * XREFs of DisableUserkTraceLogging @ 0x1402A8D10
 * Callers:
 *     <none>
 * Callees:
 *     TlgUnregisterAggregateProvider @ 0x1403E2F40 (TlgUnregisterAggregateProvider.c)
 */

NTSTATUS DisableUserkTraceLogging()
{
  REGHANDLE v0; // rcx
  REGHANDLE v1; // rcx
  REGHANDLE v2; // rcx
  REGHANDLE v3; // rcx

  v0 = qword_1403AAA50;
  qword_1403AAA50 = 0LL;
  dword_1403AAA30 = 0;
  EtwUnregister(v0);
  TlgUnregisterAggregateProvider();
  v1 = RegHandle;
  RegHandle = 0LL;
  dword_1403AA9C0 = 0;
  EtwUnregister(v1);
  v2 = qword_1403AAA88;
  qword_1403AAA88 = 0LL;
  dword_1403AAA68 = 0;
  EtwUnregister(v2);
  v3 = qword_1403AAAC0;
  qword_1403AAAC0 = 0LL;
  dword_1403AAAA0 = 0;
  return EtwUnregister(v3);
}
