/*
 * XREFs of ?ProcessDisplayStateChange@COverlayContext@@QEAAJ_NPEA_N@Z @ 0x18007F4F4
 * Callers:
 *     ?ProcessDisplayStateChange@CRenderTargetManager@@QEAAJXZ @ 0x18007B074 (-ProcessDisplayStateChange@CRenderTargetManager@@QEAAJXZ.c)
 *     ?HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z @ 0x18007C248 (-HandleWindowErrors@CHwndRenderTarget@@IEAAJJ@Z.c)
 *     ?CheckDeviceState@CHwndRenderTarget@@UEAAJXZ @ 0x18007C760 (-CheckDeviceState@CHwndRenderTarget@@UEAAJXZ.c)
 *     ?GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO@@@Z @ 0x18007C8A0 (-GetPresentStatistics@CHwndRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@PEAU_UNSIGNED_RATIO.c)
 *     ?Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z @ 0x18007E1D0 (-Render@CHwndRenderTarget@@UEAAJ_NPEA_N@Z.c)
 * Callees:
 *     ?GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18007EE64 (-GetMultiplaneOverlayCaps@COverlayContext@@AEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BC8BA (memcmp_0.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
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

  LODWORD(Buf1[0]) = 0;
  memset_0((char *)Buf1 + 4, 0, 0x28uLL);
  v6 = 0;
  MultiplaneOverlayCaps = COverlayContext::GetMultiplaneOverlayCaps(this, (struct DXGI_MULTIPLANE_OVERLAY_CAPS *)Buf1);
  v8 = MultiplaneOverlayCaps;
  if ( MultiplaneOverlayCaps < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, MultiplaneOverlayCaps, 0x5EEu);
  }
  else
  {
    if ( a2 || memcmp_0(Buf1, (char *)this + 92, 0x2CuLL) )
    {
      v12 = *((_DWORD *)this + 56) == 0;
      v13 = v20;
      v14 = Buf1[1];
      *(_OWORD *)((char *)this + 92) = Buf1[0];
      v15 = v19;
      *(_OWORD *)((char *)this + 108) = v14;
      *(_QWORD *)((char *)this + 124) = v15;
      *((_DWORD *)this + 33) = v13;
      if ( !v12 || *((_BYTE *)this + 841) )
      {
        *((_BYTE *)this + 846) = 1;
        v6 = 1;
      }
    }
    for ( i = 0; i < *((_DWORD *)this + 56); *(_DWORD *)(*((_QWORD *)this + 25) + v17 + 196) = 0 )
    {
      v16 = i++;
      v17 = 224 * v16;
      *(_DWORD *)(*((_QWORD *)this + 25) + v17 + 192) = 0;
    }
    v10 = *((_QWORD *)this + 89);
    if ( v10 )
    {
      *(_DWORD *)(v10 + 84) = 0;
      *(_DWORD *)(v10 + 88) = 0;
    }
    *a3 = v6;
  }
  return v8;
}
