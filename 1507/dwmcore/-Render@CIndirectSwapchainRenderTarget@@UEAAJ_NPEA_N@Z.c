/*
 * XREFs of ?Render@CIndirectSwapchainRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800EEA90
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z @ 0x1800ED270 (-Render@COffScreenRenderTarget@@UEAAJ_NPEA_N@Z.c)
 *     ?EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EE234 (-EnsureMetadataBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
 *     ?TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ @ 0x1800EEBF8 (-TryTargetNextBuffer@CIndirectSwapchainRenderTarget@@AEAAJXZ.c)
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
  if ( *((_BYTE *)this + 240) )
  {
    Buffer = CIndirectSwapchainRenderTarget::TryTargetNextBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 40));
    v3 = Buffer;
    if ( Buffer >= 0 )
    {
      if ( *((_BYTE *)this + 240) && (*((_BYTE *)this + 376) & 0x10) == 0 )
      {
        LOBYTE(v8) = a2;
        v9 = COffScreenRenderTarget::Render(this, v8, a3);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0xE0u);
          return v3;
        }
        *((_BYTE *)this + 376) |= 4u;
        v10 = CIndirectSwapchainRenderTarget::EnsureMetadataBuffer((CIndirectSwapchainRenderTarget *)((char *)this - 40));
        v3 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xE4u);
          return v3;
        }
      }
      *a3 = 1;
      return v3;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, Buffer, 0xD4u);
  }
  return v3;
}
