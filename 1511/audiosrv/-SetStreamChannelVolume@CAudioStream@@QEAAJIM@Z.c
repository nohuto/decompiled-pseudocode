/*
 * XREFs of ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x18007DCFC
 * Callers:
 *     ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x1800889E0 (-SetChannelVolume@CVADServer@@UEAAJIM@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_qdg @ 0x18006F92C (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioStream::SetStreamChannelVolume(CAudioStream *this, unsigned int a2, float a3)
{
  __int64 v4; // rbx
  TraceLoggingHProvider v5; // rcx

  v4 = a2;
  v5 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x200000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x30u,
      (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids,
      this,
      a2,
      a3);
    v5 = WPP_GLOBAL_Control;
  }
  if ( (unsigned int)v4 < *((_DWORD *)this + 18) )
  {
    *(float *)(*((_QWORD *)this + 12) + 4 * v4) = a3;
    (*(void (__fastcall **)(CAudioStream *))(*(_QWORD *)this + 128LL))(this);
    return 0LL;
  }
  else
  {
    if ( v5 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v5 + 28) & 0x40) != 0
      && *((_BYTE *)v5 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v5 + 2), 0x31u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, -2147024809);
    }
    return 2147942487LL;
  }
}
