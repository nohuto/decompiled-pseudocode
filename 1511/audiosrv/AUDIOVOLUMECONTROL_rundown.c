/*
 * XREFs of AUDIOVOLUMECONTROL_rundown @ 0x180003800
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18000F5E0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 */

unsigned int __fastcall AUDIOVOLUMECONTROL_rundown(CVolumeStrip *this)
{
  unsigned int (__fastcall *v2)(CVolumeStrip *__hidden); // rdi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 24LL, &WPP_196b41b4f5a2aeeda9cf96382b85a072_Traceguids, this);
  }
  v2 = *(unsigned int (__fastcall **)(CVolumeStrip *__hidden))(*(_QWORD *)this + 16LL);
  if ( v2 == CVolumeStrip::Release )
    return CVolumeStrip::Release(this);
  else
    return v2(this);
}
