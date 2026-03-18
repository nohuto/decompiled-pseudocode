/*
 * XREFs of ?CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ @ 0x180166060
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18016624C (-EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?ReleaseResources@CAnalogTextureTarget@@AEAAXXZ @ 0x180166560 (-ReleaseResources@CAnalogTextureTarget@@AEAAXXZ.c)
 */

__int64 __fastcall CAnalogTextureTarget::CheckDeviceState(CAnalogTextureTarget *this)
{
  int v1; // edi
  int v3; // eax
  __int64 v4; // rcx
  int v5; // eax

  v1 = 0;
  if ( !*((_QWORD *)this + 19) )
  {
    v3 = CAnalogTextureTarget::EnsureRenderTarget((CAnalogTextureTarget *)((char *)this - 112));
    v1 = v3;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x124u);
  }
  v4 = *((_QWORD *)this + 19);
  if ( v4 )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v4 + 176) + 208LL))(v4 + 176);
    v1 = v5;
    if ( v5 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x129u);
    if ( v1 == 142213121 )
    {
      *((_BYTE *)this + 165) = 1;
    }
    else if ( v1 < 0 )
    {
      CAnalogTextureTarget::ReleaseResources((CAnalogTextureTarget *)((char *)this - 112));
      *((_BYTE *)this + 164) = 1;
    }
    else
    {
      if ( *((_BYTE *)this + 165) )
        *((_BYTE *)this + 164) = 1;
      *((_BYTE *)this + 165) = 0;
    }
  }
  return (unsigned int)v1;
}
