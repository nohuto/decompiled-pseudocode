/*
 * XREFs of ?IsAdvancedDirectFlipCompatible@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180007EA0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CCompositionSurfaceBitmap::IsAdvancedDirectFlipCompatible(CCompositionSurfaceBitmap *this)
{
  __int64 v1; // rdi
  char v2; // si

  v1 = *((_QWORD *)this + 50);
  v2 = 0;
  if ( v1 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)(v1 + 112) + 80LL))(v1 + 112) )
    return *(_DWORD *)(*((_QWORD *)this + 49) + 112LL) > 2u;
  return v2;
}
