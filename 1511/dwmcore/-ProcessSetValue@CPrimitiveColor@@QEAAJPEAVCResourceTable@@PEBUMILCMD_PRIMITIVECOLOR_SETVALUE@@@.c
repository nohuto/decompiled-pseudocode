/*
 * XREFs of ?ProcessSetValue@CPrimitiveColor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVECOLOR_SETVALUE@@@Z @ 0x1800F92E8
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x18000F9B4 (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 */

__int64 __fastcall CPrimitiveColor::ProcessSetValue(
        CPrimitiveColor *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVECOLOR_SETVALUE *a3)
{
  if ( *((float *)this + 24) != *((float *)a3 + 2)
    || *((float *)this + 25) != *((float *)a3 + 3)
    || *((float *)this + 26) != *((float *)a3 + 4)
    || *((float *)this + 27) != *((float *)a3 + 5) )
  {
    *((_OWORD *)this + 6) = *(_OWORD *)((char *)a3 + 8);
    CPrimitiveColor::OnColorChanged(this);
  }
  return 0LL;
}
