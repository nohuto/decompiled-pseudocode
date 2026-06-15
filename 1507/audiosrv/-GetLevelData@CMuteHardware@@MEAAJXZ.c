/*
 * XREFs of ?GetLevelData@CMuteHardware@@MEAAJXZ @ 0x18003E1D0
 * Callers:
 *     ?Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z @ 0x18003E0E0 (-Initialize@CMuteControlBase@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CMuteHardware::GetLevelData(CMuteHardware *this)
{
  __int64 v1; // rsi
  int v2; // ebx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
    v2 = (*(__int64 (__fastcall **)(_QWORD, char *))(*(_QWORD *)v1 + 32LL))(*((_QWORD *)this + 6), (char *)this + 24);
  else
    v2 = -2147467261;
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x12u,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      v2);
  }
  return (unsigned int)v2;
}
