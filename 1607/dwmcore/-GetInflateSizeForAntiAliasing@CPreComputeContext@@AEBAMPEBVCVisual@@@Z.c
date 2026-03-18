/*
 * XREFs of ?GetInflateSizeForAntiAliasing@CPreComputeContext@@AEBAMPEBVCVisual@@@Z @ 0x1801120E0
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180062110 (-PostSubgraph@CPreComputeContext@@UEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

float __fastcall CPreComputeContext::GetInflateSizeForAntiAliasing(CPreComputeContext *this, const struct CVisual *a2)
{
  if ( *((_DWORD *)this + 46) || (*((_BYTE *)a2 + 152) & 0x20) != 0 )
    return FLOAT_4_0;
  if ( (*(unsigned __int8 (__fastcall **)(const struct CVisual *))(*(_QWORD *)a2 + 256LL))(a2) )
    return FLOAT_0_5;
  return 0.0;
}
