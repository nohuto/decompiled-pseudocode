/*
 * XREFs of ?DxgkPowerRuntimeControlCallback@@YAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C001AB00
 * Callers:
 *     <none>
 * Callees:
 *     Template_pj @ 0x1C001C0A0 (Template_pj.c)
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
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
    Template_pj((_DWORD)this, (unsigned int)&Dxgk_PowerRuntimeControlRequest, (_DWORD)a3, (_DWORD)this, (__int64)a2);
  return DXGADAPTER::DdiPowerRuntimeControlRequest(this, a2, a3, a4, a5, a6, a7);
}
