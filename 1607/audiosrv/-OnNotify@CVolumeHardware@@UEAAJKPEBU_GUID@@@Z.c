/*
 * XREFs of ?OnNotify@CVolumeHardware@@UEAAJKPEBU_GUID@@@Z @ 0x18002D6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ @ 0x18002D5F4 (-ReadChannelLevelsFromHardware@CVolumeHardware@@IEAAJXZ.c)
 *     ?OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z @ 0x180033B00 (-OnNotify@CVolumeStrip@@UEAAJKPEBU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVolumeHardware::OnNotify(CVolumeHardware *this, unsigned int a2, const struct _GUID *a3)
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
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 42LL, &WPP_2804faa4bc893de444441e4f62789fd8_Traceguids, this);
  }
  v7 = *(_QWORD *)&a3->Data1 - *((_QWORD *)this + 27);
  if ( *(_QWORD *)&a3->Data1 == *((_QWORD *)this + 27) )
    v7 = *(_QWORD *)a3->Data4 - *((_QWORD *)this + 28);
  if ( v7 )
  {
    CVolumeHardware::ReadChannelLevelsFromHardware(this);
    v8 = (CVolumeStrip *)*((_QWORD *)this + 16);
    v9 = *(__int64 (__fastcall **)(CVolumeStrip *__hidden, unsigned int, const struct _GUID *))(*(_QWORD *)v8 + 48LL);
    if ( v9 == CVolumeStrip::OnNotify )
      v10 = CVolumeStrip::OnNotify(v8, a2, a3);
    else
      v10 = v9(v8, a2, a3);
    v6 = v10;
    if ( v10 < 0 )
      AudSrvTraceLoggingErrorHelper("CVolumeHardware::OnNotify", 1372, v10);
  }
  return v6;
}
