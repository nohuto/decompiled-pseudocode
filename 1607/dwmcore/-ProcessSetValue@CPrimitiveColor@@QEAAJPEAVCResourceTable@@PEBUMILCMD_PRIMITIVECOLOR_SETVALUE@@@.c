/*
 * XREFs of ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x18010E368
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18001BBA8 (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::ProcessSetValue(
        CPrimitiveColor *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVECOLOR_SETVALUE *a3)
{
  if ( *((float *)this + 42) != *((float *)a3 + 2)
    || *((float *)this + 43) != *((float *)a3 + 3)
    || *((float *)this + 44) != *((float *)a3 + 4)
    || *((float *)this + 45) != *((float *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 168) = *(_OWORD *)((char *)a3 + 8);
    CPrimitiveColor::OnColorChanged(this);
  }
  return 0LL;
}
