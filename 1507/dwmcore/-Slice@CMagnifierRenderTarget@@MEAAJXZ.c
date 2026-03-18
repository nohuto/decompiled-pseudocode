/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1800ED9C0
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1800ECB00 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CMagnifierRenderTarget@@UEAAJXZ @ 0x1800ECB70 (-PresentOutOfFrameDirectFlip@CMagnifierRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x1800EC130 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x1800EDAF0 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1800EDBD0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     Template_xddd @ 0x1800EDD28 (Template_xddd.c)
 */

__int64 __fastcall CMagnifierRenderTarget::Slice(CMagnifierRenderTarget *this)
{
  int v2; // eax
  int v3; // edi
  unsigned int v4; // r9d
  unsigned int v5; // eax
  unsigned int v6; // r8d
  unsigned int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx

  v2 = CMagnifierRenderTarget::EnsureRenderTargets(this);
  v3 = v2;
  if ( v2 >= 0 )
  {
    v4 = *((_DWORD *)this + 156);
    if ( v4 < *((_DWORD *)this + 154) )
    {
      v5 = *((_DWORD *)this + 157);
      if ( v5 < *((_DWORD *)this + 155) )
      {
        *((_DWORD *)this + 157) = v5 + 1;
      }
      else
      {
        v6 = *((_DWORD *)this + 152) - *((_DWORD *)this + 150);
        v7 = *((_DWORD *)this + 74) / v6;
        *((_DWORD *)this + 160) = v4 / v7 * (*((_DWORD *)this + 153) - *((_DWORD *)this + 151));
        *((_DWORD *)this + 159) = v6 * (v4 % v7);
        v8 = CMagnifierRenderTarget::SliceRect(this);
        v3 = v8;
        if ( v8 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xddd(
              v10,
              v9,
              *((_QWORD *)this + 36),
              *((_DWORD *)this + 156),
              *((_DWORD *)this + 159),
              *((_DWORD *)this + 160));
          ++*((_DWORD *)this + 156);
          *((_DWORD *)this + 157) = 0;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x500u);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x4EAu);
  }
  if ( v3 < 0 || *((int *)this + 162) < 0 || *((_DWORD *)this + 156) >= *((_DWORD *)this + 154) )
    CMagnifierRenderTarget::StopSlicer(this);
  return (unsigned int)v3;
}
