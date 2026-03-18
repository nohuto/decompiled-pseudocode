/*
 * XREFs of Win32DestroySection @ 0x1C01CBCA8
 * Callers:
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C02A33E4 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
LONG_PTR __stdcall Win32DestroySection(PVOID Object)
{
  return ObfDereferenceObject(Object);
}
