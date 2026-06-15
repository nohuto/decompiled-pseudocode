/*
 * XREFs of ??0CVolumeGainStage@@QEAA@PEBU_GUID@@M_J_N@Z @ 0x1800A41B4
 * Callers:
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z @ 0x1800A44E8 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z @ 0x1800A5A30 (-OnAutoDuckWorkItem@CDuckingManager@@AEAAJPEAVCDuckWorkItem@@@Z.c)
 * Callees:
 *     WPP_SF_g @ 0x1800711D8 (WPP_SF_g.c)
 *     ConvertDbToEngineVolume @ 0x1800A154C (ConvertDbToEngineVolume.c)
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
  *((float *)this + 12) = ConvertDbToEngineVolume(a3);
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_g(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0xDu,
      (__int64)&WPP_dd246a133bfa023898b772a434e9632f_Traceguids,
      a3);
  }
  return this;
}
