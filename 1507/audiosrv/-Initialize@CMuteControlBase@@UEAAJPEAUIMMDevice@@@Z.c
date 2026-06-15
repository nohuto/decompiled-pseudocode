/*
 * XREFs of ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E0E0
 * Callers:
 *     ?Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z @ 0x18003E2C0 (-Initialize@CMuteHardware@@QEAAJPEAUIMMDevice@@PEAUIPartsList@@@Z.c)
 *     ?Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006D410 (-Initialize@CMuteSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x18003E1D0 (-GetLevelData@CMuteHardware@@MEAAJXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMuteControlBase::Initialize(CMuteControlBase *this, struct IMMDevice *a2)
{
  int v3; // ebx
  __int64 (__fastcall *v4)(CMuteHardware *__hidden); // rbx
  int LevelData; // eax

  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, char *))a2->lpVtbl->GetId)(a2, (char *)this + 32);
  if ( v3 < 0
    || ((v4 = *(__int64 (__fastcall **)(CMuteHardware *__hidden))(*(_QWORD *)this + 112LL),
         v4 != CMuteHardware::GetLevelData)
      ? (LevelData = v4(this))
      : (LevelData = CMuteHardware::GetLevelData(this)),
        v3 = LevelData,
        LevelData < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0xDu,
        (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
        v3);
    }
  }
  return (unsigned int)v3;
}
