/*
 * XREFs of ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18006D980
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x180066BA8 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     WPP_SF_q_guid_ @ 0x18006E2CC (WPP_SF_q_guid_.c)
 */

__int64 __fastcall CMuteHardware::OnNotify(CMuteHardware *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  int v8; // eax

  v6 = 0;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q_guid_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      28,
      (unsigned int)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      (_DWORD)this,
      (__int64)a3);
  }
  v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)((char *)this + 60);
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)((char *)this + 60) )
    v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)((char *)this + 68);
  if ( v7 )
  {
    CMuteHardware::GetMuteValue(this, (int *)this + 6);
    v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _GUID *))(**((_QWORD **)this + 2) + 48LL))(
           *((_QWORD *)this + 2),
           a2,
           a3);
    v6 = v8;
    if ( v8 < 0
      && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x1Du,
        (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
        v8);
    }
  }
  return v6;
}
