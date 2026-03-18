/*
 * XREFs of ?ADAPTER_RENDER_NotifyDeferredDestructionComplete@@YAXPEAVADAPTER_RENDER@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0001C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall ADAPTER_RENDER_NotifyDeferredDestructionComplete(
        struct ADAPTER_RENDER *a1,
        struct DXGTERMINATIONTRACKER *a2)
{
  ADAPTER_RENDER::NotifyDeferredDestructionComplete(a1, a2);
}
