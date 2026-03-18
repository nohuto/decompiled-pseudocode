/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18011F7A0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8B18 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800A8CFC (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800BB910 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 */

__int64 __fastcall CIndirectSwapchainRenderTarget::Render(CIndirectSwapchainRenderTarget *this, char a2, bool *a3)
{
  unsigned int v3; // ebx
  int Buffer; // eax
  __int64 v8; // rdx
  int v9; // eax
  int v10; // eax

  v3 = 0;
  *a3 = 0;
  if ( *((_BYTE *)this + 216) )
  {
    Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 112));
    v3 = Buffer;
    if ( Buffer < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0xBFu);
      return v3;
    }
    if ( !*((_BYTE *)this + 216) || (*((_BYTE *)this + 400) & 8) != 0 )
      goto LABEL_9;
    LOBYTE(v8) = a2;
    v9 = COffScreenRenderTarget::Render(this, v8, a3);
    v3 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xCBu);
      return v3;
    }
    *((_BYTE *)this + 400) |= 4u;
    v10 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 112));
    v3 = v10;
    if ( v10 >= 0 )
    {
LABEL_9:
      *a3 = 1;
      return v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xCFu);
  }
  return v3;
}
