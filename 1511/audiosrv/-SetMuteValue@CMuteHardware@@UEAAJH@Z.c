/*
 * XREFs of ?SetMuteValue@CMuteHardware@@UEAAJH@Z @ 0x18006C9F0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qD @ 0x180048AE8 (WPP_SF_qD.c)
 */

__int64 __fastcall CMuteHardware::SetMuteValue(CMuteHardware *this, unsigned int a2)
{
  __int64 v4; // rsi

  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x10000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Bu,
      (__int64)&WPP_f04eba8ba5fc4b283a8b90cd0990f6b1_Traceguids,
      this,
      a2);
  }
  v4 = *((_QWORD *)this + 6);
  if ( v4 )
    return (*(__int64 (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)v4 + 24LL))(
             *((_QWORD *)this + 6),
             a2,
             (char *)this + 60);
  else
    return 2147500035LL;
}
