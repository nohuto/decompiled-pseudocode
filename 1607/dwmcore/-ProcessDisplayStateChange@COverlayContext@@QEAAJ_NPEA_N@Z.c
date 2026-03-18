/*
 * XREFs of ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x1800BA0CC
 * Callers:
 *     ?UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z @ 0x18003CC2C (-UpdateDisplaySet@CComposition@@IEAAJPEAJ@Z.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x1800740C4 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x1800745A0 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x180074700 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x180075780 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x180078F2C (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

__int64 __fastcall COverlayContext::ProcessDisplayStateChange(COverlayContext *this, char a2, bool *a3)
{
  bool v6; // si
  int MultiplaneOverlayCaps; // eax
  unsigned int v8; // edi
  unsigned int i; // edx
  __int64 v10; // rax
  bool v12; // zf
  int v13; // eax
  __int128 v14; // xmm1
  __int64 v15; // xmm0_8
  __int64 v16; // rax
  __int64 v17; // rcx
  _OWORD Buf1[2]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+50h] [rbp-38h]
  int v20; // [rsp+58h] [rbp-30h]

  memset_0(Buf1, 0, 0x2CuLL);
  v6 = 0;
  MultiplaneOverlayCaps = COverlayContext::GetMultiplaneOverlayCaps(this, (struct DXGI_MULTIPLANE_OVERLAY_CAPS *)Buf1);
  v8 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MultiplaneOverlayCaps, 0x580u);
  }
  else
  {
    if ( a2 || memcmp_0(Buf1, (char *)this + 128, 0x2CuLL) )
    {
      v12 = *((_DWORD *)this + 66) == 0;
      v13 = v20;
      v14 = Buf1[1];
      *((_OWORD *)this + 8) = Buf1[0];
      v15 = v19;
      *((_OWORD *)this + 9) = v14;
      *((_QWORD *)this + 20) = v15;
      *((_DWORD *)this + 42) = v13;
      if ( !v12 || *((_BYTE *)this + 1089) )
      {
        *((_BYTE *)this + 1094) = 1;
        v6 = 1;
      }
    }
    for ( i = 0; i < *((_DWORD *)this + 66); *(_DWORD *)(*((_QWORD *)this + 30) + v17 + 204) = 0 )
    {
      v16 = i++;
      v17 = 232 * v16;
      *(_DWORD *)(*((_QWORD *)this + 30) + v17 + 200) = 0;
    }
    v10 = *((_QWORD *)this + 120);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 84) = 0;
      *(_DWORD *)(v10 + 88) = 0;
    }
    *a3 = v6;
  }
  return v8;
}
