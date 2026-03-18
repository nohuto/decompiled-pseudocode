/*
 * XREFs of ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18000F9B4
 * Callers:
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1800AC580 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x1800F92E8 (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@.c)
 * Callees:
 *     ?UpdateContextColor@CD2DPrimitiveProperties@@QEAAJAEBU_D3DCOLORVALUE@@@Z @ 0x18000FE44 (-UpdateContextColor@CD2DPrimitiveProperties@@QEAAJAEBU_D3DCOLORVALUE@@@Z.c)
 */

void __fastcall CPrimitiveColor::OnColorChanged(CPrimitiveColor *this)
{
  __int64 i; // rdi

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 18); i = (unsigned int)(i + 1) )
    CD2DPrimitiveProperties::UpdateContextColor(
      *(CD2DPrimitiveProperties **)(*((_QWORD *)this + 6) + 8 * i),
      (const struct _D3DCOLORVALUE *)this + 6);
  CResource::NotifyOnChanged((char *)this + 8, 0LL, 0LL);
}
