/*
 * XREFs of WPP_SF_g @ 0x1800711D8
 * Callers:
 *     ?PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x1800350A4 (-PersistSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 *     ?GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z @ 0x18006EBD0 (-GetVolumeStepInfo@CVolumeControlBase@@UEAAJPEAI0@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180072330 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?GetPeakValue@CAudioSession@@UEAAJPEAM@Z @ 0x180078E30 (-GetPeakValue@CAudioSession@@UEAAJPEAM@Z.c)
 *     ?LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z @ 0x180079A2C (-LoadEndpointVolumeInformation@CPerEndpointVolumeAudioSession@@AEAAJPEBGPEAVCVolumeStrip@@@Z.c)
 *     ?GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z @ 0x1800819AC (-GetChannelPeakValues@CAudioStream@@QEAAJIPEAM@Z.c)
 *     ?GetPeakValue@CAudioStream@@QEAAJPEAM@Z @ 0x180081C78 (-GetPeakValue@CAudioStream@@QEAAJPEAM@Z.c)
 *     ?MeasureClockDrift@CMonitor@@AEAAXNN@Z @ 0x18009A164 (-MeasureClockDrift@CMonitor@@AEAAXNN@Z.c)
 *     ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x1800A41B4 (--0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_g(__int64 a1, unsigned __int16 a2, __int64 a3, double a4)
{
  double v5; // [rsp+68h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, a3, a2, &v5);
}
