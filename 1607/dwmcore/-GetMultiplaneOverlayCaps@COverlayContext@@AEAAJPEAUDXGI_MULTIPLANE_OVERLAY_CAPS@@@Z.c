/*
 * XREFs of ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180078F2C
 * Callers:
 *     ?Initialize@COverlayContext@@IEAAJXZ @ 0x1800790EC (-Initialize@COverlayContext@@IEAAJXZ.c)
 *     ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800BA0CC (-ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x180106698 (Template_qq.c)
 */

__int64 __fastcall COverlayContext::GetMultiplaneOverlayCaps(
        COverlayContext *this,
        struct DXGI_MULTIPLANE_OVERLAY_CAPS *a2)
{
  unsigned int v2; // edi
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
    v4 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 392LL))(*((_QWORD *)this + 2));
    v2 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x5BEu);
    }
    else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
    {
      Template_qq(v5, &EVTDESC_OVERLAY_GETCAPS, *(unsigned int *)a2, *((unsigned int *)a2 + 3));
    }
  }
  return v2;
}
