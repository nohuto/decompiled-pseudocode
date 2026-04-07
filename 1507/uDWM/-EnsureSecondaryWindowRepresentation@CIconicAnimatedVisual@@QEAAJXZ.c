/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x18009B778
 * Callers:
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x18009B854 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x180007C20 (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180035018 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 */

__int64 __fastcall CIconicAnimatedVisual::EnsureSecondaryWindowRepresentation(CIconicAnimatedVisual *this)
{
  CSecondaryWindowRepresentation **v1; // rsi
  unsigned int v3; // ebx
  _DWORD *v4; // rbp
  HMONITOR v5; // rax
  int ScaleFactorForMonitorImp; // eax
  int v7; // r9d
  int v8; // eax
  enum DEVICE_SCALE_FACTOR v10; // [rsp+50h] [rbp+8h] BYREF

  v1 = (CSecondaryWindowRepresentation **)((char *)this + 272);
  v3 = 0;
  if ( !*((_QWORD *)this + 34) && *((_QWORD *)this + 35) )
  {
    v4 = (_DWORD *)((char *)this + 336);
    v5 = MonitorFromRect((LPCRECT)this + 21, 2u);
    ScaleFactorForMonitorImp = GetScaleFactorForMonitorImp(v5, &v10);
    v3 = ScaleFactorForMonitorImp;
    if ( ScaleFactorForMonitorImp >= 0 )
    {
      v7 = v4[2] - *v4;
      if ( v7 < 0 )
        v7 = 0;
      v8 = CSecondaryWindowRepresentation::Create(
             *((_DWORD *)this + 92) | 0x802u,
             (__int64)this + 264,
             *((_QWORD *)this + 35),
             v7,
             v10,
             v1);
      v3 = v8;
      if ( v8 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x53u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ScaleFactorForMonitorImp, 0x4Cu);
    }
  }
  return v3;
}
