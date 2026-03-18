/*
 * XREFs of ?VidMmProcessVerifierOption@@YAJPEAVVIDMM_GLOBAL@@PEAVDXGPROCESS@@W4_D3DKMT_VERIFIER_OPTION_MODE@@W4_D3DKMT_PROCESS_VERIFIER_OPTION_TYPE@@PEAT_D3DKMT_PROCESS_VERIFIER_OPTION_DATA@@@Z @ 0x1C001D360
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall VidMmProcessVerifierOption(
        struct VIDMM_GLOBAL *a1,
        struct DXGPROCESS *a2,
        enum _D3DKMT_VERIFIER_OPTION_MODE a3,
        enum _D3DKMT_PROCESS_VERIFIER_OPTION_TYPE a4,
        union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA *a5)
{
  return VIDMM_GLOBAL::ProcessVerifierOption(a1, a2, a3, a4, a5);
}
