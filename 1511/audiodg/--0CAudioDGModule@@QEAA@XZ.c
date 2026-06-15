/*
 * XREFs of ??0CAudioDGModule@@QEAA@XZ @ 0x140008C98
 * Callers:
 *     _dynamic_initializer_for___AtlModule__ @ 0x140001000 (_dynamic_initializer_for___AtlModule__.c)
 * Callees:
 *     ??0?$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ @ 0x140001B54 (--0-$CAtlExeModuleT@VCAudioDGModule@@@ATL@@QEAA@XZ.c)
 *     TraceLoggingRegisterEx @ 0x140017628 (TraceLoggingRegisterEx.c)
 */

CAudioDGModule *__fastcall CAudioDGModule::CAudioDGModule(CAudioDGModule *this)
{
  int v1; // eax
  void (__stdcall *v2)(LPCGUID, ULONG, UCHAR, ULONGLONG, ULONGLONG, PEVENT_FILTER_DESCRIPTOR, PVOID); // rdx
  void *v3; // r8
  int v4; // ecx
  GUID *v6; // [rsp+40h] [rbp-18h] BYREF

  ATL::CAtlExeModuleT<CAudioDGModule>::CAtlExeModuleT<CAudioDGModule>();
  _AtlModule = (__int64)&CAudioDGModule::`vftable';
  qword_140055BD0 = 0LL;
  v6 = &GUID_NULL;
  byte_140055BDC = 0;
  xmmword_140055BC0 = 0LL;
  qword_140055BE0 = 0LL;
  g_fEventTracingEnabled = 1;
  v1 = EtwRegisterTraceGuidsW(AeWmiCallback, 0LL, &AEWMIGUID, 1LL, &v6, 0LL, 0LL, &qword_14003F020);
  v4 = g_fEventTracingEnabled;
  if ( v1 )
    v4 = 0;
  g_fEventTracingEnabled = v4;
  TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, v2, v3);
  return (CAudioDGModule *)&_AtlModule;
}
