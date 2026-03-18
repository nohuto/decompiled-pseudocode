/*
 * XREFs of ?ProcessSetOpacity@CAnalogRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_ANALOGRENDERTARGET_SETOPACITY@@@Z @ 0x180126A88
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18006A010 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::ProcessSetOpacity(
        CAnalogRenderTarget *this,
        struct CResourceTable *a2,
        const struct MILCMD_ANALOGRENDERTARGET_SETOPACITY *a3)
{
  (*(void (__fastcall **)(__int64, struct CResourceTable *))(*(_QWORD *)qword_180195FD0 + 56LL))(qword_180195FD0, a2);
  return 0LL;
}
