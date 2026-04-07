/*
 * XREFs of ?GetScalingInfoForMonitor@@YAJPEAUHMONITOR__@@PEAUSCALINGINFO@@@Z @ 0x180007BC4
 * Callers:
 *     ?GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z @ 0x18001BD84 (-GetScalingFactorForCVI@CDesktopManager@@QEBAMAEBUtagRECT@@@Z.c)
 * Callees:
 *     ??0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z @ 0x180007C68 (--0CImmersiveOrPrimaryMonitor@@QEAA@PEAUHMONITOR__@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall GetScalingInfoForMonitor(HMONITOR a1, struct SCALINGINFO *a2)
{
  CImmersiveOrPrimaryMonitor *v3; // rax
  _BYTE v5[56]; // [rsp+20h] [rbp-48h] BYREF

  v3 = CImmersiveOrPrimaryMonitor::CImmersiveOrPrimaryMonitor((CImmersiveOrPrimaryMonitor *)v5, a1);
  *(_OWORD *)a2 = *(_OWORD *)v3;
  *((_OWORD *)a2 + 1) = *((_OWORD *)v3 + 1);
  *((_QWORD *)a2 + 4) = *((_QWORD *)v3 + 4);
  return *((unsigned int *)v3 + 12);
}
