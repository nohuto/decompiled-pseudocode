/*
 * XREFs of ?GetFrameStatisticsInternal@CDWMOffScreenSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x1800B5550
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CDWMOffScreenSwapChain::GetFrameStatisticsInternal(
        CDWMOffScreenSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // ecx
  __int64 v6; // rax
  _DWORD v8[4]; // [rsp+30h] [rbp-28h] BYREF
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 59) + 40LL))(*((_QWORD *)this + 59), v8);
  v4 = v3;
  if ( v3 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3ACu);
  }
  else
  {
    v5 = v8[2];
    *(_DWORD *)a2 = v8[0];
    *((_DWORD *)a2 + 1) = v8[1];
    v6 = v9;
    *((_QWORD *)a2 + 1) = v9;
    *((_QWORD *)a2 + 3) = v6;
    *((_DWORD *)a2 + 4) = v5;
  }
  return v4;
}
