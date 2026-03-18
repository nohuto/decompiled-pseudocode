/*
 * XREFs of operator_delete @ 0x1C0068918
 * Callers:
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00688F8 (--_GCMutex@@QEAAPEAXI@Z.c)
 *     ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00AF450 (--_ECMonitorPDO@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall operator_delete(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4D504F47u);
}
