/*
 * XREFs of ?Present@CComposition@@QEAAJPEAUFRAME_TIME_INFO@@@Z @ 0x18009DFE8
 * Callers:
 *     ?PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z @ 0x18008F880 (-PresentFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@I_N1@Z.c)
 * Callees:
 *     ?Present@CRenderTargetManager@@QEAAJIPEAI@Z @ 0x18007B3A4 (-Present@CRenderTargetManager@@QEAAJIPEAI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ProcessPostPresent@CComposition@@QEAAJ_N@Z @ 0x180095920 (-ProcessPostPresent@CComposition@@QEAAJ_N@Z.c)
 *     TemplateEventDescriptor @ 0x1800BA27C (TemplateEventDescriptor.c)
 *     Template_xx @ 0x180100478 (Template_xx.c)
 */

__int64 __fastcall CComposition::Present(CComposition *this, struct FRAME_TIME_INFO *a2)
{
  char v4; // si
  LARGE_INTEGER v5; // r9
  int v6; // eax
  __int64 v7; // rcx
  int v8; // ebx
  int v9; // eax
  __int64 v10; // rcx
  int v11; // esi
  LARGE_INTEGER v12; // r9
  LARGE_INTEGER PerformanceCount; // [rsp+40h] [rbp+8h] BYREF

  PerformanceCount.QuadPart = 0LL;
  v4 = 1;
  *((_QWORD *)this + 43) = a2;
  if ( *((_DWORD *)this + 76) )
  {
    QueryPerformanceCounter(&PerformanceCount);
    v5 = PerformanceCount;
  }
  else
  {
    v5.QuadPart = 0LL;
    PerformanceCount.QuadPart = 0LL;
  }
  if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Template_xx)(
      this,
      &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Start,
      this,
      (LARGE_INTEGER)v5.QuadPart);
  v6 = CRenderTargetManager::Present(
         *((CRenderTargetManager **)this + 4),
         *(_DWORD *)(*(_QWORD *)a2 + 96LL),
         (unsigned int *)(*(_QWORD *)a2 + 164LL));
  v8 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x6ADu);
    goto LABEL_10;
  }
  if ( v6 )
  {
    if ( v6 != 142213130 )
      goto LABEL_10;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_DXGI_PRESENT_POSTPONED);
    SetEvent(*(HANDLE *)(*((_QWORD *)this + 63) + 96LL));
    v8 = 142213130;
  }
  else if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
  {
    TemplateEventDescriptor(v7, &EVTDESC_SCHEDULE_DXGI_PRESENT_SUCCEEDED);
  }
  v4 = 0;
LABEL_10:
  v9 = CComposition::ProcessPostPresent(this, v4);
  v11 = v9;
  if ( v9 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x6C7u);
  if ( !v8 )
    goto LABEL_13;
  if ( v8 < 0 )
    goto LABEL_19;
  if ( v11 < 0 )
LABEL_13:
    v8 = v11;
  if ( v8 >= 0 )
  {
    if ( *((_DWORD *)this + 76) )
    {
      QueryPerformanceCounter(&PerformanceCount);
      v12 = PerformanceCount;
    }
    else
    {
      v12.QuadPart = 0LL;
      PerformanceCount.QuadPart = 0LL;
    }
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 2) != 0 )
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))Template_xx)(
        v10,
        &EVTDESC_MILEVENT_MEDIA_UCE_PRESENTEVENT_Stop,
        this,
        (LARGE_INTEGER)v12.QuadPart);
  }
LABEL_19:
  *((_QWORD *)this + 43) = 0LL;
  return (unsigned int)v8;
}
