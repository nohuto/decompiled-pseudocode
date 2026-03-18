/*
 * XREFs of ?ADAPTER_RENDER_DdiGetRootPageTableSize@@YA_KPEAVADAPTER_RENDER@@PEAU_DXGKARG_GETROOTPAGETABLESIZE@@@Z @ 0x1C000CDB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned __int64 __fastcall ADAPTER_RENDER_DdiGetRootPageTableSize(
        struct ADAPTER_RENDER *a1,
        struct _DXGKARG_GETROOTPAGETABLESIZE *a2)
{
  return ADAPTER_RENDER::DdiGetRootPageTableSize(a1, a2);
}
