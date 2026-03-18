/*
 * XREFs of ?UpdatePriorityClass@DXGDEVICE@@QEAAX_N@Z @ 0x1C001C4BC
 * Callers:
 *     VidSchSyncPriorityDevice @ 0x1C003AD20 (VidSchSyncPriorityDevice.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGDEVICE::UpdatePriorityClass(DXGDEVICE *this)
{
  ((void (__fastcall *)(DXGDEVICE *))DxgCoreInterface[7])(this);
}
