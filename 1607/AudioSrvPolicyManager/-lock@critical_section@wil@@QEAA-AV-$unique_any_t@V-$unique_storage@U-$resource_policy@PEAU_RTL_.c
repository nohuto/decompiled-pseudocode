/*
 * XREFs of ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180003DC0 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BAAC (-TsSessionNewPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BBEC (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001C420 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001C6B4 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001CD34 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_SessionGetAudioProtocol @ 0x18001E4F0 (TS_SessionGetAudioProtocol.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18001E6B0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     ?EnterCriticalSection@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@1@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18001F734 (-EnterCriticalSection@wil@@YA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRI.c)
 */

_QWORD *__fastcall wil::critical_section::lock(__int64 a1, _QWORD *a2)
{
  wil::EnterCriticalSection(a2);
  return a2;
}
