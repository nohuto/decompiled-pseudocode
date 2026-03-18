/*
 * XREFs of ?AdvanceFrame@CAnalogRenderTarget@@UEAAXI_N@Z @ 0x180126180
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CAnalogRenderTarget::AdvanceFrame(CAnalogRenderTarget *this, unsigned int a2, __int64 a3)
{
  __int64 v3; // rsi

  v3 = *((_QWORD *)this + 20);
  if ( v3 )
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)v3 + 192LL))(*((_QWORD *)this + 20), a2, a3);
  if ( *((_DWORD *)this + 12) == 1 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_180195FD0 + 32LL))(qword_180195FD0);
}
