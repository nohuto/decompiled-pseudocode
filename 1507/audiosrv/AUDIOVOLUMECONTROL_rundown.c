/*
 * XREFs of AUDIOVOLUMECONTROL_rundown @ 0x180032460
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18001D2C0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 */

__int64 __fastcall AUDIOVOLUMECONTROL_rundown(CVolumeStrip *this)
{
  __int64 (__fastcall *v2)(CVolumeStrip *); // rdi

  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      26LL,
      &WPP_890e168e4d5dba4455ca7d4f19a944e5_Traceguids,
      this);
  }
  v2 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)this + 16LL);
  if ( v2 == CVolumeStrip::Release )
    return CVolumeStrip::Release(this);
  else
    return v2(this);
}
