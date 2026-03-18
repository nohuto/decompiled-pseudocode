/*
 * XREFs of ?EnsureRenderTarget@CAnalogTextureTarget@@AEAAJXZ @ 0x18013C0F8
 * Callers:
 *     ?CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ @ 0x18013BF00 (-CheckDeviceState@CAnalogTextureTarget@@UEAAJXZ.c)
 *     ?RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z @ 0x18013C844 (-RenderSlate@CAnalogTextureTarget@@AEAAJPEA_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ @ 0x18013BFE4 (-EnsureAnalogDisplay@CAnalogTextureTarget@@AEAAJXZ.c)
 *     ?Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z @ 0x18013DACC (-Create@CAnalogDisplayRenderTarget@@SAJAEBU_GUID@@KPEBVCDisplay@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CAnalogTextureTarget::EnsureRenderTarget(CAnalogTextureTarget *this)
{
  unsigned int v1; // ebp
  struct CAnalogDisplayRenderTarget **v2; // r12
  int v4; // eax
  int v5; // eax

  v1 = 0;
  v2 = (struct CAnalogDisplayRenderTarget **)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
  {
    v4 = CAnalogTextureTarget::EnsureAnalogDisplay((struct CVisualTree **)this);
    v1 = v4;
    if ( v4 >= 0 )
    {
      v5 = CAnalogDisplayRenderTarget::Create(
             (const struct _GUID *)(*((_QWORD *)this + 2) + 252LL),
             *((_DWORD *)this + 48),
             *((const struct CDisplay **)this + 10),
             v2);
      v1 = v5;
      if ( v5 >= 0 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)*v2 + 22) + 240LL))(
          (__int64)*v2 + 176,
          (unsigned int)(*((_DWORD *)this + 24) - *((_DWORD *)this + 22)),
          (unsigned int)(*((_DWORD *)this + 25) - *((_DWORD *)this + 23)));
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*((_QWORD *)*v2 + 22) + 248LL))(
          (__int64)*v2 + 176,
          *((unsigned int *)this + 22),
          *((unsigned int *)this + 23));
        *((_BYTE *)this + 196) = 1;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x1BAu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x1B5u);
    }
  }
  return v1;
}
