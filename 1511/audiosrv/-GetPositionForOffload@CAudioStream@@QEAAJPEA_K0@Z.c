/*
 * XREFs of ?GetPositionForOffload@CAudioStream@@QEAAJPEA_K0@Z @ 0x18007D284
 * Callers:
 *     ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x180087E40 (-GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

__int64 __fastcall CAudioStream::GetPositionForOffload(CAudioStream *this, unsigned __int64 *a2, unsigned __int64 *a3)
{
  int v3; // ebx

  v3 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**((_QWORD **)this + 7) + 136LL))(
         *((_QWORD *)this + 7),
         a2,
         a3);
  if ( v3 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x15u, (__int64)&WPP_2c8db717297dbf78a9a5be3fc6d4b938_Traceguids, v3);
  }
  return (unsigned int)v3;
}
