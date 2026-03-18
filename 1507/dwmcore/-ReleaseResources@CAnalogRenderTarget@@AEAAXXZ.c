/*
 * XREFs of ?ReleaseResources@CAnalogRenderTarget@@AEAAXXZ @ 0x180126E1C
 * Callers:
 *     ??1CAnalogRenderTarget@@EEAA@XZ @ 0x180126088 (--1CAnalogRenderTarget@@EEAA@XZ.c)
 *     ?CheckDeviceState@CAnalogRenderTarget@@UEAAJXZ @ 0x180126210 (-CheckDeviceState@CAnalogRenderTarget@@UEAAJXZ.c)
 *     ?ReleaseResourcesForDisplayChange@CAnalogRenderTarget@@UEAAXXZ @ 0x180126ED0 (-ReleaseResourcesForDisplayChange@CAnalogRenderTarget@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ @ 0x18012785C (-UnregisterSwapChain@CAnalogRenderTarget@@AEAAXXZ.c)
 */

void __fastcall CAnalogRenderTarget::ReleaseResources(CAnalogRenderTarget *this)
{
  __int64 v1; // rsi
  __int64 v3; // rsi
  __int64 v4; // rsi

  v1 = *((_QWORD *)this + 33);
  *((_BYTE *)this + 212) = 1;
  if ( v1 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
    *((_QWORD *)this + 33) = 0LL;
  }
  CAnalogRenderTarget::UnregisterSwapChain(this);
  v3 = *((_QWORD *)this + 25);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v3 + 232LL))(*((_QWORD *)this + 25));
  v4 = *((_QWORD *)this + 25);
  if ( v4 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 16LL))(*((_QWORD *)this + 25));
    *((_QWORD *)this + 25) = 0LL;
  }
}
