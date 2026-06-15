/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x140012558
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x140001000 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140015AD0 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     TraceLoggingRegisterEx @ 0x140016BCC (TraceLoggingRegisterEx.c)
 */

CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  void (__stdcall *v2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v3; // r8
  int v4; // ecx
  CAudioDGModule *result; // rax

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>(this);
  _AtlModule = &CAudioDGModule::`vftable';
  qword_140054CA0 = 0LL;
  byte_140054CAC = 0;
  xmmword_140054C90 = 0LL;
  qword_140054CB0 = 0LL;
  g_fEventTracingEnabled = 1;
  v1 = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID);
  v4 = g_fEventTracingEnabled;
  if ( v1 )
    v4 = 0;
  g_fEventTracingEnabled = v4;
  TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1400540B0, v2, v3);
  result = (CAudioDGModule *)&_AtlModule;
  g_SysFxUtilTlp = (TraceLoggingHProvider)&dword_1400540B0;
  return result;
}
