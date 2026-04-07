/*
 * XREFs of ?EnsureSecondaryWindowRepresentation@CIconicAnimatedVisual@@QEAAJXZ @ 0x180099A34
 * Callers:
 *     ?EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ @ 0x180099B10 (-EnsureVisualBrush@CIconicAnimatedVisual@@AEAAJXZ.c)
 * Callees:
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x1800357F4 (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z @ 0x1800423BC (-GetScaleFactorForMonitorImp@@YAJPEAUHMONITOR__@@PEAW4DEVICE_SCALE_FACTOR@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
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
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x52u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ScaleFactorForMonitorImp, 0x4Bu);
    }
  }
  return v3;
}
