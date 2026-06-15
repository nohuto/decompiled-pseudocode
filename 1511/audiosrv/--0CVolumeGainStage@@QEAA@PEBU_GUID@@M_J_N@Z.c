/*
 * XREFs of ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x1800A1520
 * Callers:
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A1858 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A2D5C (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_g @ 0x18006F8F0 (WPP_SF_g.c)
 *     ConvertDbToEngineVolume @ 0x1800A8F6C (ConvertDbToEngineVolume.c)
 */

CVolumeGainStage *__fastcall CVolumeGainStage::CVolumeGainStage(
        CVolumeGainStage *this,
        const struct _GUID *a2,
        float a3,
        __int64 a4,
        bool a5)
{
  *(_QWORD *)this = &CGainStage::`vftable';
  *((_DWORD *)this + 2) = 1;
  *((_BYTE *)this + 32) = a5;
  *((_DWORD *)this + 9) = 1;
  *((_OWORD *)this + 1) = DuckingPolicyGuid;
  *((_QWORD *)this + 5) = a4;
  *(_QWORD *)this = &CVolumeGainStage::`vftable';
  *((float *)this + 12) = ConvertDbToEngineVolume(1LL);
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_g(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_dd246a133bfa023898b772a434e9632f_Traceguids, a3);
  }
  return this;
}
