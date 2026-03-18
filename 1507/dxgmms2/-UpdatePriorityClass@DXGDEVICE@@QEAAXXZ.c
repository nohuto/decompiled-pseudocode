/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAXXZ @ 0x1C000E164
 * Callers:
 *     VidSchSyncPriorityDevice @ 0x1C0079840 (VidSchSyncPriorityDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this)
{
  ((void (__fastcall *)(DXGDEVICE *))DxgCoreInterface[7])(this);
}
