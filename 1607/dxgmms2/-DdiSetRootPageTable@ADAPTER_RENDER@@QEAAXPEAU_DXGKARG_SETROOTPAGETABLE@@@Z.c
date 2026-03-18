/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C000F8F0
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C0043F50 (VidSchiSubmitRenderVirtualCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((void (__fastcall *)(ADAPTER_RENDER *, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface[37])(this, a2);
}
