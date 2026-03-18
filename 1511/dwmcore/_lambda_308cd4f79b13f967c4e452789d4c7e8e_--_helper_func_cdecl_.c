/*
 * XREFs of _lambda_308cd4f79b13f967c4e452789d4c7e8e_::_helper_func_cdecl_ @ 0x1800096A0
 * Callers:
 *     ?GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV?$CPtrArray@VCResource@@@@PEA_N3@Z @ 0x1800096F8 (-GetVisualListenersInfoImpl@@YAXP6APEAVIVisualListenerInfoProvider@@PEAVCResource@@@ZAEBV-$CPtrA.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180048660 (-IsOfType@CVisual@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 */

__int64 __fastcall lambda_308cd4f79b13f967c4e452789d4c7e8e_::_helper_func_cdecl_(__int64 a1)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v3)(__int64, __int64); // rsi
  char v4; // al

  v1 = 0LL;
  v3 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL);
  if ( v3 == CVisual::IsOfType )
    v4 = CVisual::IsOfType(a1, 78LL);
  else
    v4 = v3(a1, 78LL);
  if ( v4 )
    return a1 + 56;
  return v1;
}
