/*
 * XREFs of ?AddInvalidRegion@CD2DBitmapCache@@UEAAJAEBVCRegion@@@Z @ 0x18001B550
 * Callers:
 *     ?AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z @ 0x180046A20 (-AddDirtyRegion@CBitmapRealization@@UEAAJAEBVCRegion@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CD2DBitmapCache::AddInvalidRegion(CD2DBitmapCache *this, const struct CRegion *a2)
{
  __int64 v2; // rdi
  int v3; // esi
  __int64 i; // rbp
  int v8; // eax
  __int64 v9; // rdi
  int v10; // eax
  int v11; // ebx

  v2 = *((_QWORD *)this + 7);
  v3 = 0;
  if ( v2 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, const struct CRegion *))(*(_QWORD *)(v2 + 16) + 32LL))(v2 + 16, a2);
    v3 = v8;
    if ( v8 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x4Fu);
  }
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 22); i = (unsigned int)(i + 1) )
  {
    v9 = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * i);
    v10 = (*(__int64 (__fastcall **)(__int64, const struct CRegion *))(*(_QWORD *)(v9 + 264) + 32LL))(v9 + 264, a2);
    v11 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x56u);
    if ( !v3 || v3 >= 0 && v11 < 0 )
      v3 = v11;
  }
  return (unsigned int)v3;
}
