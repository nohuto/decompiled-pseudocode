/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x1801087B0
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x1801084D0 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 *     ?PresentOutOfFrameDirectFlip@CMagnifierRenderTarget@@UEAAJXZ @ 0x180108540 (-PresentOutOfFrameDirectFlip@CMagnifierRenderTarget@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x180107B20 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x1801088E0 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x1801089C0 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     Template_xddd @ 0x180108AA0 (Template_xddd.c)
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
    v4 = *((_DWORD *)this + 150);
    if ( v4 < *((_DWORD *)this + 148) )
    {
      v5 = *((_DWORD *)this + 151);
      if ( v5 < *((_DWORD *)this + 149) )
      {
        *((_DWORD *)this + 151) = v5 + 1;
      }
      else
      {
        v6 = *((_DWORD *)this + 146) - *((_DWORD *)this + 144);
        v7 = *((_DWORD *)this + 68) / v6;
        *((_DWORD *)this + 154) = v4 / v7 * (*((_DWORD *)this + 147) - *((_DWORD *)this + 145));
        *((_DWORD *)this + 153) = v6 * (v4 % v7);
        v8 = CMagnifierRenderTarget::SliceRect(this);
        v3 = v8;
        if ( v8 >= 0 )
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xddd(
              v10,
              v9,
              *((_QWORD *)this + 33),
              *((_DWORD *)this + 150),
              *((_DWORD *)this + 153),
              *((_DWORD *)this + 154));
          ++*((_DWORD *)this + 150);
          *((_DWORD *)this + 151) = 0;
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x489u);
        }
      }
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x473u);
  }
  if ( v3 < 0 || *((int *)this + 156) < 0 || *((_DWORD *)this + 150) >= *((_DWORD *)this + 148) )
    CMagnifierRenderTarget::StopSlicer(this);
  return (unsigned int)v3;
}
