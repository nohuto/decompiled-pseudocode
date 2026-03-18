/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x1800306B0
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180083520 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CD2DBitmapCache::AddInvalidRegion(CD2DBitmapCache *this, const struct CRegion *a2)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 i; // rbp
  __int64 v8; // rdi
  int v9; // eax
  int v10; // ebx
  int v11; // eax

  v2 = *((_QWORD *)this + 7);
  v3 = 0;
  if ( v2 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, const struct CRegion *))(*(_QWORD *)(v2 + 16) + 32LL))(v2 + 16, a2);
    v3 = v11;
    if ( v11 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x4Fu);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v8 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    v9 = (*(__int64 (__fastcall **)(__int64, const struct CRegion *))(*(_QWORD *)(v8 + 264) + 32LL))(v8 + 264, a2);
    v10 = v9;
    if ( v9 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x56u);
    if ( !v3 || v3 >= 0 && v10 < 0 )
      v3 = v10;
  }
  return (unsigned int)v3;
}
