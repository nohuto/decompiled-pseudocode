/*
 * XREFs of DbgkpDeleteErrorPort @ 0x1405F05F4
 * Callers:
 *     DbgkFlushErrorPort @ 0x1403E7698 (DbgkFlushErrorPort.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     DbgkRegisterErrorPort @ 0x140547930 (DbgkRegisterErrorPort.c)
 *     DbgkpRemoveErrorPort @ 0x1405F0618 (DbgkpRemoveErrorPort.c)
 * Callees:
 *     ObCloseHandle @ 0x1403F6F34 (ObCloseHandle.c)
 */

void __fastcall DbgkpDeleteErrorPort(HANDLE *a1)
{
  ObCloseHandle(a1[1], 0);
  ExFreePoolWithTag(a1, 0);
}
