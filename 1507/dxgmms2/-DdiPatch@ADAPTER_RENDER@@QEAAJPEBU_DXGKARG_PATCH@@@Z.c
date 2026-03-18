/*
 * XREFs of ?DdiPatch@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_PATCH@@@Z @ 0x1C000E0BC
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1C0076E90 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1C00772CC (VidSchiSubmitRenderCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_RENDER::DdiPatch(ADAPTER_RENDER *this, struct _DXGKARG_PATCH *a2)
{
  return ((__int64 (__fastcall **)(ADAPTER_RENDER *, struct _DXGKARG_PATCH *))DxgCoreInterface)[24](this, a2);
}
