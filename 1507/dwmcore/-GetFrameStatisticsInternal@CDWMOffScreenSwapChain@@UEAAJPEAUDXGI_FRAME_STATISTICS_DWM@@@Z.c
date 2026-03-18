/*
 * XREFs of ?GetFrameStatisticsInternal@CDWMOffScreenSwapChain@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18008C260
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x3A7u);
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
