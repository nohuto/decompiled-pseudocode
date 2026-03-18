/*
 * XREFs of ?GetPixelFormat@CDesktopRenderTarget@@UEAAJPEAW4DXGI_FORMAT@@@Z @ 0x180076840
 * Callers:
 *     ?GetPixelFormat@CDesktopRenderTarget@@WCI@EAAJPEAW4DXGI_FORMAT@@@Z @ 0x1800BF8B0 (-GetPixelFormat@CDesktopRenderTarget@@WCI@EAAJPEAW4DXGI_FORMAT@@@Z.c)
 * Callees:
 *     ?GetDisplayPixelFormat@CDisplaySet@@QEBA?AW4DXGI_FORMAT@@VDisplayId@@@Z @ 0x180035DB8 (-GetDisplayPixelFormat@CDisplaySet@@QEBA-AW4DXGI_FORMAT@@VDisplayId@@@Z.c)
 *     ?GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z @ 0x180038AF8 (-GetCurrentDisplaySet@CDisplayManager@@QEAAJPEAPEBVCDisplaySet@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDesktopRenderTarget::GetPixelFormat(CDesktopRenderTarget *this, enum DXGI_FORMAT *a2)
{
  unsigned int v2; // ebx
  __int64 *v3; // rdi
  int CurrentDisplaySet; // eax

  v2 = 0;
  *a2 = DXGI_FORMAT_B8G8R8A8_UNORM;
  v3 = (__int64 *)((char *)this + 248);
  if ( *((_QWORD *)this + 31)
    || (CurrentDisplaySet = CDisplayManager::GetCurrentDisplaySet(this, (const struct CDisplaySet **)v3),
        v2 = CurrentDisplaySet,
        CurrentDisplaySet >= 0) )
  {
    *a2 = CDisplaySet::GetDisplayPixelFormat(*v3, (unsigned int)DisplayId::None);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, CurrentDisplaySet, 0x55Au);
  }
  return v2;
}
