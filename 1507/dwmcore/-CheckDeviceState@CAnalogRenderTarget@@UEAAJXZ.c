/*
 * XREFs of ?CheckDeviceState@CAnalogRenderTarget@@UEAAJXZ @ 0x180126210
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ @ 0x180126408 (-EnsureRenderTarget@CAnalogRenderTarget@@AEAAJXZ.c)
 *     ?ReleaseResources@CAnalogRenderTarget@@AEAAXXZ @ 0x180126E1C (-ReleaseResources@CAnalogRenderTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CAnalogRenderTarget::CheckDeviceState(CAnalogRenderTarget *this)
{
  int v1; // ebx
  int v3; // eax
  __int64 v4; // rsi
  int v5; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 12) == 3 )
  {
    if ( !*((_QWORD *)this + 20) )
    {
      v3 = CAnalogRenderTarget::EnsureRenderTarget((CAnalogRenderTarget *)((char *)this - 40));
      v1 = v3;
      if ( v3 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x1F7u);
    }
    v4 = *((_QWORD *)this + 20);
    if ( v4 )
    {
      v5 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 200LL))(*((_QWORD *)this + 20));
      v1 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1FCu);
      if ( v1 == 142213121 )
      {
        *((_BYTE *)this + 173) = 1;
      }
      else if ( v1 < 0 )
      {
        CAnalogRenderTarget::ReleaseResources((CAnalogRenderTarget *)((char *)this - 40));
        *((_BYTE *)this + 172) = 1;
      }
      else
      {
        if ( *((_BYTE *)this + 173) )
          *((_BYTE *)this + 172) = 1;
        *((_BYTE *)this + 173) = 0;
      }
    }
  }
  return (unsigned int)v1;
}
