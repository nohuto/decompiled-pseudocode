/*
 * XREFs of ?Initialize@CMeterControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003F680
 * Callers:
 *     ?Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003DCE8 (-Initialize@CMeterHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x180042680 (-Initialize@CMeterSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetChannelCount@CMeterHardware@@MEAAJPEAI@Z @ 0x18003DD70 (-GetChannelCount@CMeterHardware@@MEAAJPEAI@Z.c)
 *     ?GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z @ 0x180042620 (-GetChannelCount@CMeterSoftware@@MEAAJPEAI@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMeterControlBase::Initialize(CMeterControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  __int64 (__fastcall *v4)(CMeterHardware *, unsigned int *); // rbx
  int ChannelCount; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 24);
  if ( v3 < 0
    || ((v4 = *(__int64 (__fastcall **)(CMeterHardware *, unsigned int *))(*(_QWORD *)this + 40LL),
         v4 != CMeterHardware::GetChannelCount)
      ? ((char *)v4 != (char *)CMeterSoftware::GetChannelCount
       ? (ChannelCount = v4(this, (unsigned int *)this + 8))
       : (ChannelCount = CMeterSoftware::GetChannelCount(this, (unsigned int *)this + 8)))
      : (ChannelCount = CMeterHardware::GetChannelCount(this, (unsigned int *)this + 8)),
        v3 = ChannelCount,
        ChannelCount < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xDu,
        (__int64)&WPP_c4b6e3fb0b78b7ef89729a36f54e7633_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
