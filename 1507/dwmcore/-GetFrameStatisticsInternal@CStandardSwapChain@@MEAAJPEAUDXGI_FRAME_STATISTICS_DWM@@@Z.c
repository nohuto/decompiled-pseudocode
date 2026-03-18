/*
 * XREFs of ?GetFrameStatisticsInternal@CStandardSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18013CE10
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CStandardSwapChain::GetFrameStatisticsInternal(
        CStandardSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  int v3; // eax
  unsigned int v4; // ebx
  int v5; // eax
  _DWORD v7[4]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v8; // [rsp+40h] [rbp-28h]

  v3 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 36) + 128LL))(*((_QWORD *)this + 36), v7);
  v4 = v3;
  if ( v3 >= 0 )
  {
    v5 = v7[0];
    *((_QWORD *)a2 + 1) = 0LL;
    *(_DWORD *)a2 = v5;
    *((_DWORD *)a2 + 1) = v5;
    *((_DWORD *)a2 + 4) = v7[2];
    *((_QWORD *)a2 + 3) = v8;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0xE4u);
  }
  return v4;
}
