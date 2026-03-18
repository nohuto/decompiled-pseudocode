/*
 * XREFs of ?ProcessSetExclusiveOpacity@CAnalogCompositor@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY@@@Z @ 0x1800F98E0
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x180096A00 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 __fastcall CAnalogCompositor::ProcessSetExclusiveOpacity(
        CAnalogCompositor *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGCOMPOSITOR_SETEXCLUSIVEOPACITY *a3)
{
  (*(void (__fastcall **)(_QWORD, struct CResourceTable *))(*(_QWORD *)xmmword_1801A3FB0 + 56LL))(xmmword_1801A3FB0, a2);
  return 0LL;
}
