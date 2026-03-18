/*
 * XREFs of ?GreSynchronizeTimer@@YAXPEAXI_K_J@Z @ 0x1C0290E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall GreSynchronizeTimer(void *a1)
{
  vSynchronizeDriver(128);
}
