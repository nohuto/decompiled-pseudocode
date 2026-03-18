/*
 * XREFs of ?DxgkUnreferenceDxgResource@@YAXPEAVDXGRESOURCE@@@Z @ 0x1C0065A50
 * Callers:
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0068868 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 * Callees:
 *     <none>
 */

void __fastcall DxgkUnreferenceDxgResource(struct _EX_RUNDOWN_REF *a1)
{
  ExReleaseRundownProtection(a1 + 9);
}
