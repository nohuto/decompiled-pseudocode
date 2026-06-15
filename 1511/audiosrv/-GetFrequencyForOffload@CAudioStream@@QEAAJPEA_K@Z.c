/*
 * XREFs of ?GetFrequencyForOffload@CAudioStream@@QEAAJPEA_K@Z @ 0x18007CF54
 * Callers:
 *     ?GetFrequencyForOffload@CVADServer@@UEAAJPEA_K@Z @ 0x180087D50 (-GetFrequencyForOffload@CVADServer@@UEAAJPEA_K@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::GetFrequencyForOffload(CAudioStream *this, unsigned __int64 *a2)
{
  int v2; // ebx

  v2 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**((_QWORD **)this + 7) + 144LL))(
         *((_QWORD *)this + 7),
         a2);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x16u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v2);
  }
  return (unsigned int)v2;
}
