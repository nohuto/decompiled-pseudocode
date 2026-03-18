/*
 * XREFs of ?ProcessClearColorResources@CPrimitiveGroup@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES@@@Z @ 0x18000F1D4
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ @ 0x18004C614 (-ReleaseColorResources@CPrimitiveGroup@@AEAAXXZ.c)
 *     ?ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z @ 0x18004C6FC (-ReleasePrimitiveCaches@CPrimitiveGroup@@AEAAX_N@Z.c)
 */

__int64 __fastcall CPrimitiveGroup::ProcessClearColorResources(
        CPrimitiveGroup *this,
        struct CResourceTable *a2,
        const struct MILCMD_PRIMITIVEGROUP_CLEARCOLORRESOURCES *a3)
{
  CPrimitiveGroup::ReleaseColorResources(this);
  CPrimitiveGroup::ReleasePrimitiveCaches(this, 1);
  return 0LL;
}
