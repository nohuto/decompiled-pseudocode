/*
 * XREFs of GsDriverEntry @ 0x1C000D000
 * Callers:
 *     <none>
 * Callees:
 *     CsTerminate @ 0x1C000BF84 (CsTerminate.c)
 *     CsInitialize @ 0x1C000D030 (CsInitialize.c)
 *     __security_init_cookie @ 0x1C000DCA0 (__security_init_cookie.c)
 */

NTSTATUS __stdcall GsDriverEntry(PDRIVER_OBJECT DriverObject, PUNICODE_STRING RegistryPath)
{
  __int64 v2; // rdx
  NTSTATUS result; // eax
  NTSTATUS v4; // ebx

  _security_init_cookie();
  result = CsInitialize(v2);
  v4 = result;
  if ( result < 0 )
  {
    CsTerminate();
    return v4;
  }
  return result;
}
