/*
 * XREFs of ?WaitForNextFrameStart@CAnalogCompositorClient@@QEAAJPEAX@Z @ 0x180127964
 * Callers:
 *     ?Present@CAnalogRenderTarget@@UEAAJ_NI@Z @ 0x1801267F0 (-Present@CAnalogRenderTarget@@UEAAJ_NI@Z.c)
 *     ?WaitForVBlank@CAnalogRenderTarget@@UEAAJPEAX@Z @ 0x1801279B0 (-WaitForVBlank@CAnalogRenderTarget@@UEAAJPEAX@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogCompositorClient::WaitForNextFrameStart(CAnalogCompositorClient *this, void *a2)
{
  return (*(__int64 (__fastcall **)(__int64, void *))(*(_QWORD *)qword_180195FD0 + 80LL))(qword_180195FD0, a2);
}
