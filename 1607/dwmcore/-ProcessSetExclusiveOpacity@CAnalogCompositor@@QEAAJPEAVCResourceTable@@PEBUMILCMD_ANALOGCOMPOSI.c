/*
 * XREFs of ?ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY@@@Z @ 0x18010E904
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnalogCompositor::ProcessSetExclusiveOpacity(
        CAnalogCompositor *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY *a3)
{
  return CAnalogCompositor::SetProperty(this, 1LL, 18LL, (char *)a3 + 8);
}
