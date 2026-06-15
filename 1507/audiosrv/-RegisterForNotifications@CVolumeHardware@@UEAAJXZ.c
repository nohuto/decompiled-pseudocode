/*
 * XREFs of ?RegisterForNotifications@CVolumeHardware@@UEAAJXZ @ 0x18003EFB0
 * Callers:
 *     ?Initialize@CVolumeStrip@@QEAAJPEBG@Z @ 0x18003D6A0 (-Initialize@CVolumeStrip@@QEAAJPEBG@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CVolumeHardware::RegisterForNotifications(CVolumeHardware *this)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, GUID *, CVolumeHardware *))(**((_QWORD **)this + 11) + 112LL))(
         *((_QWORD *)this + 11),
         &GUID_7fb7b48f_531d_44a2_bcb3_5ad5a134b3dc,
         this);
  if ( v2 < 0 )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x3Bu,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v2);
    }
  }
  else
  {
    *((_DWORD *)this + 30) = 1;
  }
  return (unsigned int)v2;
}
