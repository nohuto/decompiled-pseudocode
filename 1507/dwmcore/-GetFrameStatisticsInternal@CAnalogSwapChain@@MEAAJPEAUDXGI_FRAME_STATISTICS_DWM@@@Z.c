/*
 * XREFs of ?GetFrameStatisticsInternal@CAnalogSwapChain@@MEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x180128610
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAnalogSwapChain::GetFrameStatisticsInternal(
        CAnalogSwapChain *this,
        struct DXGI_FRAME_STATISTICS_DWM *a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // r8
  __int64 v8; // rcx
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp-48h] BYREF
  _DWORD v11[4]; // [rsp+38h] [rbp-40h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-30h]

  v4 = (*(__int64 (__fastcall **)(_QWORD, _DWORD *))(**((_QWORD **)this + 36) + 56LL))(*((_QWORD *)this + 36), v11);
  v5 = v4;
  if ( v4 >= 0 )
  {
    *(_DWORD *)a2 = v11[0];
    v6 = v12;
    *((_QWORD *)a2 + 1) = v12;
    *((_DWORD *)a2 + 1) = v6 / *((_QWORD *)this + 37);
    QueryPerformanceCounter(&PerformanceCount);
    v7 = *((_QWORD *)this + 37);
    v8 = v7 * (unsigned int)(PerformanceCount.QuadPart / v7);
    *((_DWORD *)a2 + 4) = PerformanceCount.QuadPart / v7;
    *((_QWORD *)a2 + 3) = v8;
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x168u);
  }
  return v5;
}
