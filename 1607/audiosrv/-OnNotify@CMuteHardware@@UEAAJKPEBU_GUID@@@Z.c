/*
 * XREFs of ?OnNotify@CMuteHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18002D960
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMuteValue@CMuteHardware@@QEAAJPEAH@Z @ 0x180025F28 (-GetMuteValue@CMuteHardware@@QEAAJPEAH@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180033B00 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q_guid_ @ 0x1800564F0 (WPP_SF_q_guid_.c)
 */

__int64 __fastcall CMuteHardware::OnNotify(CMuteHardware *this, unsigned int a2, const struct _GUID *a3)
{
  unsigned int v6; // ebx
  __int64 v7; // rax
  CVolumeStrip *v8; // rcx
  __int64 (__fastcall *v9)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *); // rax
  int v10; // eax

  v6 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q_guid_(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20,
      (unsigned int)&WPP_5d80dfde78b839f7e098599d7a4ea935_Traceguids,
      (_DWORD)this,
      (__int64)a3);
  }
  v7 = *(_QWORD *)&a3->Data1 - *(_QWORD *)((char *)this + 60);
  if ( *(_QWORD *)&a3->Data1 == *(_QWORD *)((char *)this + 60) )
    v7 = *(_QWORD *)a3->Data4 - *(_QWORD *)((char *)this + 68);
  if ( v7 )
  {
    CMuteHardware::GetMuteValue(this, (int *)this + 6);
    v8 = (CVolumeStrip *)*((_QWORD *)this + 2);
    v9 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *))(*(_QWORD *)v8 + 48LL);
    if ( v9 == CVolumeStrip::OnNotify )
      v10 = CVolumeStrip::OnNotify(v8, a2, a3);
    else
      v10 = v9(v8, a2, a3);
    v6 = v10;
    if ( v10 < 0 )
      AudSrvTraceLoggingErrorHelper("CMuteHardware::OnNotify", 583, v10);
  }
  return v6;
}
