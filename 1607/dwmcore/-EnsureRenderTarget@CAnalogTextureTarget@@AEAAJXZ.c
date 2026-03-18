/*
 * XREFs of ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18016624C
 * Callers:
 *     ?CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ @ 0x180166060 (-CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x180166898 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x180166170 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x1801679C4 (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::EnsureRenderTarget(CAnalogTextureTarget *this)
{
  unsigned int v1; // ebx
  struct CAnalogDisplayRenderTarget **v2; // rsi
  int v4; // eax
  int v5; // eax

  v1 = 0;
  v2 = (struct CAnalogDisplayRenderTarget **)((char *)this + 264);
  if ( !*((_QWORD *)this + 33) )
  {
    v4 = CAnalogTextureTarget::EnsureAnalogDisplay(this);
    v1 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1A8u);
    }
    else
    {
      v5 = CAnalogDisplayRenderTarget::Create(
             (const struct _GUID *)(*((_QWORD *)this + 2) + 252LL),
             *((_DWORD *)this + 68),
             *((const struct CDisplay **)this + 19),
             v2);
      v1 = v5;
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1ADu);
      }
      else
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)*v2 + 22) + 248LL))(
          (__int64)*v2 + 176,
          (unsigned int)(*((_DWORD *)this + 42) - *((_DWORD *)this + 40)),
          (unsigned int)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41)));
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)*v2 + 22) + 256LL))(
          (__int64)*v2 + 176,
          *((unsigned int *)this + 40),
          *((unsigned int *)this + 41));
        *((_BYTE *)this + 276) = 1;
      }
    }
  }
  return v1;
}
