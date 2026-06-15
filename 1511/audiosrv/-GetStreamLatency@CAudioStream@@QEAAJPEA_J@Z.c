/*
 * XREFs of ?GetStreamLatency@CAudioStream@@QEAAJPEA_J@Z @ 0x18007D3DC
 * Callers:
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x180087F40 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::GetStreamLatency(CAudioStream *this, __int64 *a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**((_QWORD **)this + 7) + 152LL))(
         *((_QWORD *)this + 7),
         *((_QWORD *)this + 6),
         a2);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x17u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v2);
  }
  return (unsigned int)v2;
}
