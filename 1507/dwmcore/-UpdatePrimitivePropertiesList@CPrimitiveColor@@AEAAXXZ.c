/*
 * XREFs of ?UpdatePrimitivePropertiesList@CPrimitiveColor@@AEAAXXZ @ 0x180108084
 * Callers:
 *     ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x180107EE8 (-ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@.c)
 *     ?SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x180107F50 (-SetProperty@CPrimitiveColor@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CPrimitiveColor::UpdatePrimitivePropertiesList(CPrimitiveColor *this)
{
  __int64 i; // r8
  __int64 v2; // rdx

  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 16); *(_BYTE *)(*((_QWORD *)this + 5) + 8 * v2 + 16) = 1 )
  {
    v2 = 3 * i;
    i = (unsigned int)(i + 1);
  }
  CResource::NotifyOnChanged(this, 0, 0LL);
}
