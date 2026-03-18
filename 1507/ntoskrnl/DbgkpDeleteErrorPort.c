/*
 * XREFs of DbgkpDeleteErrorPort @ 0x1406691C4
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x140553854 (DbgkFlushErrorPort.c)
 *     DbgkRegisterErrorPort @ 0x1405BE8F4 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1406691E8 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x1404A4D60 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *a1)
{
  ObCloseHandle(a1[1], 0);
  ExFreePoolWithTag(a1, 0);
}
