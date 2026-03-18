/*
 * XREFs of ?Present@CAnalogRenderTarget@@UEAAJ_NI@Z @ 0x1801267F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?WaitForNextFrameStart@CAnalogCompositorClient@@QEAAJPEAX@Z @ 0x180127964 (-WaitForNextFrameStart@CAnalogCompositorClient@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall CAnalogRenderTarget::Present(CAnalogRenderTarget *this)
{
  int v1; // ebx
  __int64 v3; // rdi
  int v4; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 12) == 3 )
  {
    v3 = *((_QWORD *)this + 20);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)v3 + 176LL))(
             *((_QWORD *)this + 20),
             0LL,
             0LL,
             0LL);
      v1 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x389u);
    }
    if ( v1 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v1, 0x158u);
  }
  else if ( *((_DWORD *)this + 12) == 2 )
  {
    if ( *((_BYTE *)this + 175) )
    {
      CAnalogCompositorClient::WaitForNextFrameStart(this, 0LL);
      if ( *((_BYTE *)this + 176) )
      {
        NtTokenManagerConfirmOutstandingAnalogToken();
        *((_BYTE *)this + 176) = 0;
      }
    }
  }
  return (unsigned int)v1;
}
