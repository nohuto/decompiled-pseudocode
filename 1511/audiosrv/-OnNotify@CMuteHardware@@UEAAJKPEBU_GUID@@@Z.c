/*
 * XREFs of ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18003B050
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x1800411F4 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x1800435B0 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q_guid_ @ 0x18006CCCC (WPP_SF_q_guid_.c)
 */

__int64 __fastcall CMuteHardware::OnNotify(CMuteHardware *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v6; // ebx
  CVolumeStrip *v7; // rbx
  __int64 (__fastcall *v8)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *); // rdi
  int v9; // eax

  v6 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      28,
      (unsigned int)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      (_DWORD)this,
      (__int64)a3);
  }
  if ( *(_QWORD *)&a3->Data1 != *(_QWORD *)((char *)this + 60) || *(_QWORD *)a3->Data4 != *(_QWORD *)((char *)this + 68) )
  {
    CMuteHardware::GetMuteValue(this, (int *)this + 6);
    v7 = (CVolumeStrip *)*((_QWORD *)this + 2);
    v8 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *))(*(_QWORD *)v7 + 48LL);
    if ( v8 == CVolumeStrip::OnNotify )
      v9 = CVolumeStrip::OnNotify(v7, a2, a3);
    else
      v9 = v8(v7, a2, a3);
    v6 = v9;
    if ( v9 < 0
      && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Du,
        (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
        v9);
    }
  }
  return v6;
}
