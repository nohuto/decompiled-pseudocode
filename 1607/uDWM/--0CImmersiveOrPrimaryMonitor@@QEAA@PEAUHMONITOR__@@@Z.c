/*
 * XREFs of ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x180042404
 * Callers:
 *     ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180042360 (-GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800423BC (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 * Callees:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x1800424A0 (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 */

CImmersiveOrPrimaryMonitor *__fastcall CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor(
        CImmersiveOrPrimaryMonitor *this,
        HMONITOR a2)
{
  __int128 v4; // xmm1
  __int64 v5; // xmm0_8
  int v6; // eax
  bool v7; // sf
  CImmersiveOrPrimaryMonitor *result; // rax
  __int128 v9; // [rsp+20h] [rbp-38h] BYREF
  __int128 v10; // [rsp+30h] [rbp-28h]
  __int64 v11; // [rsp+40h] [rbp-18h]

  memset_0(&v9, 0, 0x28uLL);
  LODWORD(v10) = 96;
  LODWORD(v9) = 100;
  *((_QWORD *)&v9 + 1) = 0x6400000064LL;
  *((_QWORD *)this + 5) = a2;
  v4 = v10;
  *(_OWORD *)this = v9;
  v5 = v11;
  *((_OWORD *)this + 1) = v4;
  *((_QWORD *)this + 4) = v5;
  if ( a2 )
    v6 = CImmersiveOrPrimaryMonitor::_initimpl(a2, this);
  else
    v6 = -2147024809;
  v7 = v6 < 0;
  *((_DWORD *)this + 12) = v6;
  result = this;
  *((_BYTE *)this + 36) = !v7;
  return result;
}
