/*
 * XREFs of ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C0020C80
 * Callers:
 *     <none>
 * Callees:
 *     Template_pj @ 0x1C001E7C0 (Template_pj.c)
 */

__int64 __fastcall DxgkPowerRuntimeControlCallback(
        DXGADAPTER *this,
        const struct _GUID *a2,
        void *a3,
        __int64 a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_pj((__int64)this, &Dxgk_PowerRuntimeControlRequest, (__int64)a3, this, a2);
  return DXGADAPTER::DdiPowerRuntimeControlRequest(this, a2, a3, a4, a5, a6, a7);
}
