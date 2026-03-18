/*
 * XREFs of ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x180107EE8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?UpdatePrimitivePropertiesList@CPrimitiveColor@@AEAAXXZ @ 0x180108084 (-UpdatePrimitivePropertiesList@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::ProcessSetValue(
        CPrimitiveColor *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVECOLOR_SETVALUE *a3)
{
  if ( *((float *)this + 30) != *((float *)a3 + 2)
    || *((float *)this + 31) != *((float *)a3 + 3)
    || *((float *)this + 32) != *((float *)a3 + 4)
    || *((float *)this + 33) != *((float *)a3 + 5) )
  {
    *(_OWORD *)((char *)this + 120) = *(_OWORD *)((char *)a3 + 8);
    CPrimitiveColor::UpdatePrimitivePropertiesList(this);
  }
  return 0LL;
}
