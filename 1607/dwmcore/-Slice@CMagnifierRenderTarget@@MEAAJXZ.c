/*
 * XREFs of ?Slice@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011F230
 * Callers:
 *     ?Present@CMagnifierRenderTarget@@UEAAJ_NI@Z @ 0x18011EF90 (-Present@CMagnifierRenderTarget@@UEAAJ_NI@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ @ 0x18011E6D0 (-EnsureRenderTargets@CMagnifierRenderTarget@@MEAAJXZ.c)
 *     ?SliceRect@CMagnifierRenderTarget@@IEAAJXZ @ 0x18011F364 (-SliceRect@CMagnifierRenderTarget@@IEAAJXZ.c)
 *     ?StopSlicer@CMagnifierRenderTarget@@UEAAJXZ @ 0x18011F440 (-StopSlicer@CMagnifierRenderTarget@@UEAAJXZ.c)
 *     Template_xddd @ 0x18011F520 (Template_xddd.c)
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
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v2, 0x442u);
  }
  else
  {
    v4 = *((_DWORD *)this + 168);
    if ( v4 < *((_DWORD *)this + 166) )
    {
      v5 = *((_DWORD *)this + 169);
      if ( v5 < *((_DWORD *)this + 167) )
      {
        *((_DWORD *)this + 169) = v5 + 1;
      }
      else
      {
        v6 = *((_DWORD *)this + 164) - *((_DWORD *)this + 162);
        v7 = *((_DWORD *)this + 86) / v6;
        *((_DWORD *)this + 172) = v4 / v7 * (*((_DWORD *)this + 165) - *((_DWORD *)this + 163));
        *((_DWORD *)this + 171) = v6 * (v4 % v7);
        v8 = CMagnifierRenderTarget::SliceRect(this);
        v3 = v8;
        if ( v8 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x458u);
        }
        else
        {
          if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
            Template_xddd(
              v10,
              v9,
              *((_QWORD *)this + 42),
              *((_DWORD *)this + 168),
              *((_DWORD *)this + 171),
              *((_DWORD *)this + 172));
          ++*((_DWORD *)this + 168);
          *((_DWORD *)this + 169) = 0;
        }
      }
    }
  }
  if ( v3 < 0 || *((int *)this + 174) < 0 || *((_DWORD *)this + 168) >= *((_DWORD *)this + 166) )
    CMagnifierRenderTarget::StopSlicer(this);
  return (unsigned int)v3;
}
