/*
 * XREFs of ?CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ @ 0x18013BF00
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18013C0F8 (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?ReleaseResources@CAnalogTextureTarget@@AEAAXXZ @ 0x18013C4E4 (-ReleaseResources@CAnalogTextureTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CAnalogTextureTarget::CheckDeviceState(CAnalogTextureTarget *this)
{
  int v1; // ebx
  int v3; // eax
  __int64 v4; // rdi
  int v5; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 18) )
  {
    v3 = CAnalogTextureTarget::EnsureRenderTarget((CAnalogTextureTarget *)((char *)this - 40));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x131u);
  }
  v4 = *((_QWORD *)this + 18);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 176) + 200LL))(v4 + 176);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x136u);
    if ( v1 == 142213121 )
    {
      *((_BYTE *)this + 157) = 1;
    }
    else if ( v1 < 0 )
    {
      CAnalogTextureTarget::ReleaseResources((CAnalogTextureTarget *)((char *)this - 40));
      *((_BYTE *)this + 156) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 157) )
        *((_BYTE *)this + 156) = 1;
      *((_BYTE *)this + 157) = 0;
    }
  }
  return (unsigned int)v1;
}
