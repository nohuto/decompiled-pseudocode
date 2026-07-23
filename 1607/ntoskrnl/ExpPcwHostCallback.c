/*
 * XREFs of ExpPcwHostCallback @ 0x140553BC0
 * Callers:
 *     <none>
 * Callees:
 *     PsIsDiskCountersEnabled @ 0x14013CB70 (PsIsDiskCountersEnabled.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     EtwRegisterCounters @ 0x140553AE4 (EtwRegisterCounters.c)
 *     PcwRegister @ 0x140553DEC (PcwRegister.c)
 *     PcwUnregister @ 0x1406B6C0C (PcwUnregister.c)
 */

void __fastcall ExpPcwHostCallback(int a1)
{
  int v1; // ecx
  int v2; // [rsp+20h] [rbp-40h] BYREF
  const wchar_t *v3; // [rsp+28h] [rbp-38h]
  struct _PCW_REGISTRATION_INFORMATION Info; // [rsp+30h] [rbp-30h] BYREF

  v1 = a1 - 1;
  if ( v1 )
  {
    if ( v1 == 1 )
    {
      if ( PcwpEventTracingSessionCounterSet )
      {
        PcwUnregister(PcwpEventTracingSessionCounterSet);
        PcwpEventTracingSessionCounterSet = 0LL;
      }
      if ( PcwpEventTracingCounterSet )
      {
        PcwUnregister(PcwpEventTracingCounterSet);
        PcwpEventTracingCounterSet = 0LL;
      }
      if ( PcwpSynchCounterSet )
      {
        PcwUnregister(PcwpSynchCounterSet);
        PcwpSynchCounterSet = 0LL;
      }
      if ( PcwpSynchNumaCounterSet )
      {
        PcwUnregister(PcwpSynchNumaCounterSet);
        PcwpSynchNumaCounterSet = 0LL;
      }
      if ( PcwpProcessorCounterSet )
      {
        PcwUnregister(PcwpProcessorCounterSet);
        PcwpProcessorCounterSet = 0LL;
      }
      if ( PcwpFileSystemDiskIOCounterSet )
      {
        PcwUnregister(PcwpFileSystemDiskIOCounterSet);
        PcwpFileSystemDiskIOCounterSet = 0LL;
      }
      if ( PcwpThermalCounterSet )
      {
        PcwUnregister(PcwpThermalCounterSet);
        PcwpThermalCounterSet = 0LL;
      }
    }
  }
  else
  {
    EtwRegisterCounters();
    v2 = 2097182;
    v3 = L"Synchronization";
    memset(&Info, 0, sizeof(Info));
    Info.CallbackContext = 0LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`PcwpRegisterSynchCounterSet'::`2'::Descriptors;
    Info.CounterCount = 42;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))KiSynchCounterSetCallback;
    Info.Name = (const _UNICODE_STRING *)&v2;
    Info.Version = 256;
    PcwRegister(&PcwpSynchCounterSet, &Info);
    v2 = 2621478;
    v3 = L"SynchronizationNuma";
    memset(&Info, 0, sizeof(Info));
    Info.CallbackContext = 0LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`PcwpRegisterSynchCounterSet'::`2'::Descriptors;
    Info.Version = 256;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))KiSynchNumaCounterSetCallback;
    Info.CounterCount = 42;
    Info.Name = (const _UNICODE_STRING *)&v2;
    PcwRegister(&PcwpSynchNumaCounterSet, &Info);
    v2 = 2883626;
    v3 = L"Processor Information";
    memset(&Info, 0, sizeof(Info));
    Info.CallbackContext = 0LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`PcwpRegisterProcessorCounterSet'::`2'::Descriptors;
    Info.Version = 256;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))ExProcessorCounterSetCallback;
    Info.CounterCount = 33;
    Info.Name = (const _UNICODE_STRING *)&v2;
    PcwRegister(&PcwpProcessorCounterSet, &Info);
    if ( PsIsDiskCountersEnabled() )
    {
      v2 = 3276848;
      v3 = L"FileSystem Disk Activity";
      memset(&Info, 0, sizeof(Info));
      Info.CallbackContext = 0LL;
      Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`PcwpRegisterFileSystemDiskIOCounterSet'::`2'::Descriptors;
      Info.Version = 256;
      Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))FsRtlDiskIOCounterSetCallback;
      Info.CounterCount = 2;
      Info.Name = (const _UNICODE_STRING *)&v2;
      PcwRegister(&PcwpFileSystemDiskIOCounterSet, &Info);
    }
    v2 = 3276848;
    v3 = L"Thermal Zone Information";
    memset(&Info, 0, sizeof(Info));
    Info.CallbackContext = 0LL;
    Info.Counters = (_PCW_COUNTER_DESCRIPTOR *)&`PcwpRegisterThermalCounterSet'::`2'::Descriptors;
    Info.Version = 256;
    Info.Callback = (int (__fastcall *)(_PCW_CALLBACK_TYPE, _PCW_CALLBACK_INFORMATION *, void *))PoThermalCounterSetCallback;
    Info.CounterCount = 3;
    Info.Name = (const _UNICODE_STRING *)&v2;
    PcwRegister(&PcwpThermalCounterSet, &Info);
  }
}
