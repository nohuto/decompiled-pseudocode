/*
 * XREFs of ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180012820
 * Callers:
 *     ?Initialize@COverlayContext@@IEAAJXZ @ 0x180012A00 (-Initialize@COverlayContext@@IEAAJXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x180012D20 (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     Template_qq @ 0x1800E1F4C (Template_qq.c)
 */

__int64 __fastcall COverlayContext::GetMultiplaneOverlayCaps(
        COverlayContext *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  unsigned int v2; // ebx
  int v4; // eax
  __int64 v5; // rcx

  v2 = 0;
  if ( CCommonRegistryData::m_fOverlayTestMode && CCommonRegistryData::m_dwOverlayTestMode >= 4 )
  {
    if ( CCommonRegistryData::m_dwOverlayTestMode == 4 )
    {
      *((_DWORD *)a2 + 6) = 0;
      *((_DWORD *)a2 + 7) = 0;
      *((_DWORD *)a2 + 8) = 0;
      *(_DWORD *)a2 = 3;
      *((_DWORD *)a2 + 1) = 3;
      *((_DWORD *)a2 + 9) = 1065353216;
      *((_DWORD *)a2 + 10) = 1065353216;
      *((_DWORD *)a2 + 2) = 2;
      *((_DWORD *)a2 + 3) = 6;
      *((_DWORD *)a2 + 4) = 1090519040;
      *((_DWORD *)a2 + 5) = 1048576000;
    }
    else
    {
      memset_0(a2, 0, 0x2CuLL);
    }
  }
  else
  {
    v4 = (*(__int64 (__fastcall **)(_QWORD, struct DXGI_MULTIPLANE_OVERLAY_CAPS *))(**((_QWORD **)this + 2) + 368LL))(
           *((_QWORD *)this + 2),
           a2);
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x6C6u);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v5, &EVTDESC_OVERLAY_GETCAPS, *(unsigned int *)a2, *((unsigned int *)a2 + 3));
    }
  }
  return v2;
}
