/*
 * XREFs of ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x180042B90
 * Callers:
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x180042D08 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180043340 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x1800432E0 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterControlBase::Initialize(CMeterControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  int (*v4)(CMeterSoftware *__hidden, unsigned int *); // rbx
  int ChannelCount; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 24);
  if ( v3 < 0
    || ((v4 = *(int (**)(CMeterSoftware *__hidden, unsigned int *))(*(_QWORD *)this + 40LL),
         v4 != CMeterSoftware::GetChannelCount)
      ? (ChannelCount = ((__int64 (__fastcall *)(CMeterControlBase *, char *))v4)(this, (char *)this + 32))
      : (ChannelCount = CMeterSoftware::GetChannelCount(this, (unsigned int *)this + 8)),
        v3 = ChannelCount,
        ChannelCount < 0) )
  {
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0xDu, (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids, v3);
    }
  }
  return (unsigned int)v3;
}
