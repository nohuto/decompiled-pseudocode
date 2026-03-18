/*
 * XREFs of Win32MapViewInSessionSpace @ 0x1C01DF474
 * Callers:
 *     ?SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@@PEAU_PORT_VIEW@@PEAXPEAU_REMOTE_PORT_VIEW@@PEAK46@Z @ 0x1C02A33E4 (-SecureConnectPort@PROXYPORT@@QEAAJPEAPEAXPEAU_UNICODE_STRING@@PEAU_SECURITY_QUALITY_OF_SERVICE@.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall Win32MapViewInSessionSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  return MmMapViewInSessionSpace(Section, MappedBase, ViewSize);
}
