/*
 * XREFs of ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011E6D0
 * Callers:
 *     ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011F230 (-Slice@CMagnifierRenderTarget@@MEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ @ 0x1800B7ED0 (-ReleaseRenderTargets@COffScreenRenderTarget@@IEAAXXZ.c)
 *     ?EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ @ 0x18011E9A0 (-EnsureSharedRenderTargets@CMagnifierRenderTarget@@AEAAJXZ.c)
 */

__int64 __fastcall CMagnifierRenderTarget::EnsureRenderTargets(CMagnifierRenderTarget *this)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( *((_DWORD *)this + 100) )
  {
    if ( !*((_DWORD *)this + 68) )
    {
      v3 = CMagnifierRenderTarget::EnsureSharedRenderTargets(this);
      v1 = v3;
      if ( v3 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x360u);
        COffScreenRenderTarget::ReleaseRenderTargets(this);
      }
    }
  }
  return v1;
}
