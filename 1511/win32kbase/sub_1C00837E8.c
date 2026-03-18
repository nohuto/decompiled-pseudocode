/*
 * XREFs of sub_1C00837E8 @ 0x1C00837E8
 * Callers:
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00837C8 (--_GCMutex@@QEAAPEAXI@Z.c)
 *     ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00B30F0 (--_ECMonitorPDO@@UEAAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_1C00837E8(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4D504F47u);
}
