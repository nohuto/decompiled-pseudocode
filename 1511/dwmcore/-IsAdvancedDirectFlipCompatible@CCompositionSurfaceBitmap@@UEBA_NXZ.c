/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000C1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsAdvancedDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdi
  char v2; // si

  v1 = *((_QWORD *)this + 51);
  v2 = 0;
  if ( v1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 112) + 88LL))(v1 + 112) )
    return *(_DWORD *)(*((_QWORD *)this + 50) + 104LL) > 2u;
  return v2;
}
