/*
 * XREFs of ?DdiSetRootPageTable@ADAPTER_RENDER@@QEAAXPEAU_DXGKARG_SETROOTPAGETABLE@@@Z @ 0x1C000E104
 * Callers:
 *     VidSchiSubmitRenderVirtualCommand @ 0x1C002E320 (VidSchiSubmitRenderVirtualCommand.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::DdiSetRootPageTable(ADAPTER_RENDER *this, struct _DXGKARG_SETROOTPAGETABLE *a2)
{
  ((__int64 (__fastcall **)(ADAPTER_RENDER *, struct _DXGKARG_SETROOTPAGETABLE *))DxgCoreInterface)[37](this, a2);
}
