/*
 * XREFs of WdmlibProcgrpInitialize @ 0x1C00D3144
 * Callers:
 *     ?Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0021F98 (-Register@_FX_DRIVER_TRACKER_CACHE_AWARE@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 * Callees:
 *     <none>
 */

void WdmlibProcgrpInitialize(void)
{
  signed __int32 DeviceExtension_high; // eax
  signed __int32 v1; // ett
  _UNICODE_STRING ApiName; // [rsp+20h] [rbp-10h] BYREF

  if ( _InterlockedCompareExchange((_DWORD *)&WPP_GLOBAL_WDF_Control.DeviceExtension + 1, 1, 0) > 0 )
  {
    do
    {
      _m_prefetchw((char *)&WPP_GLOBAL_WDF_Control.DeviceExtension + 4);
      DeviceExtension_high = HIDWORD(WPP_GLOBAL_WDF_Control.DeviceExtension);
      do
      {
        v1 = DeviceExtension_high;
        DeviceExtension_high = _InterlockedCompareExchange(
                                 (_DWORD *)&WPP_GLOBAL_WDF_Control.DeviceExtension + 1,
                                 DeviceExtension_high,
                                 DeviceExtension_high);
      }
      while ( v1 != DeviceExtension_high );
    }
    while ( DeviceExtension_high != 2 );
  }
  else
  {
    RtlInitUnicodeString(&ApiName, L"KeGetCurrentProcessorNumberEx");
    PfnKeGetCurrentProcessorNumberEx = (unsigned int (__fastcall *)(_PROCESSOR_NUMBER *))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeGetCurrentProcessorNumberEx )
      PfnKeGetCurrentProcessorNumberEx = (unsigned int (__fastcall *)(_PROCESSOR_NUMBER *))ProcgrpGetCurrentProcessorNumberEx;
    RtlInitUnicodeString(&ApiName, L"KeQueryActiveProcessorCountEx");
    PfnKeQueryActiveProcessorCountEx = (unsigned int (__fastcall *)(unsigned __int16))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeQueryActiveProcessorCountEx )
      PfnKeQueryActiveProcessorCountEx = (unsigned int (__fastcall *)(unsigned __int16))ProcgrpQueryActiveProcessorCountEx;
    RtlInitUnicodeString(&ApiName, L"KeQueryMaximumProcessorCountEx");
    PfnKeQueryMaximumProcessorCountEx = (unsigned int (__fastcall *)(unsigned __int16))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeQueryMaximumProcessorCountEx )
      PfnKeQueryMaximumProcessorCountEx = (unsigned int (__fastcall *)(unsigned __int16))ProcgrpQueryMaximumProcessorCountEx;
    RtlInitUnicodeString(&ApiName, L"KeQueryMaximumProcessorCount");
    PfnKeQueryMaximumProcessorCount = (unsigned int (__fastcall *)())MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeQueryMaximumProcessorCount )
      PfnKeQueryMaximumProcessorCount = (unsigned int (__fastcall *)())ProcgrpQueryMaximumProcessorCount;
    RtlInitUnicodeString(&ApiName, L"KeQueryGroupAffinity");
    PfnKeQueryGroupAffinity = (unsigned __int64 (__fastcall *)(unsigned __int16))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeQueryGroupAffinity )
      PfnKeQueryGroupAffinity = ProcgrpQueryGroupAffinity;
    RtlInitUnicodeString(&ApiName, L"KeQueryActiveGroupCount");
    PfnKeQueryActiveGroupCount = (unsigned __int16 (__fastcall *)())MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeQueryActiveGroupCount )
      PfnKeQueryActiveGroupCount = (unsigned __int16 (__fastcall *)())FxDmaSystemTransaction::GetAdapterControlReturnValue;
    RtlInitUnicodeString(&ApiName, L"KeQueryMaximumGroupCount");
    PfnKeQueryMaximumGroupCount = (unsigned __int16 (__fastcall *)())MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeQueryMaximumGroupCount )
      PfnKeQueryMaximumGroupCount = (unsigned __int16 (__fastcall *)())FxDmaSystemTransaction::GetAdapterControlReturnValue;
    RtlInitUnicodeString(&ApiName, L"KeGetProcessorNumberFromIndex");
    PfnKeGetProcessorNumberFromIndex = (int (__fastcall *)(unsigned int, _PROCESSOR_NUMBER *))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeGetProcessorNumberFromIndex )
      PfnKeGetProcessorNumberFromIndex = (int (__fastcall *)(unsigned int, _PROCESSOR_NUMBER *))ProcgrpGetProcessorNumberFromIndex;
    RtlInitUnicodeString(&ApiName, L"KeGetProcessorIndexFromNumber");
    PfnKeGetProcessorIndexFromNumber = (unsigned int (__fastcall *)(_PROCESSOR_NUMBER *))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeGetProcessorIndexFromNumber )
      PfnKeGetProcessorIndexFromNumber = (unsigned int (__fastcall *)(_PROCESSOR_NUMBER *))ProcgrpGetProcessorIndexFromNumber;
    RtlInitUnicodeString(&ApiName, L"KeSetSystemAffinityThreadEx");
    PfnKeSetSystemAffinityThreadEx = (unsigned __int64 (__fastcall *)(unsigned __int64))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeSetSystemAffinityThreadEx )
      PfnKeSetSystemAffinityThreadEx = ProcgrpSetSystemAffinityThreadEx;
    RtlInitUnicodeString(&ApiName, L"KeSetSystemGroupAffinityThread");
    PfnKeSetSystemGroupAffinityThread = (void (__fastcall *)(_GROUP_AFFINITY *, _GROUP_AFFINITY *))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeSetSystemGroupAffinityThread )
      PfnKeSetSystemGroupAffinityThread = ProcgrpSetSystemGroupAffinityThread;
    RtlInitUnicodeString(&ApiName, L"KeRevertToUserAffinityThreadEx");
    PfnKeRevertToUserAffinityThreadEx = (void (__fastcall *)(unsigned __int64))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeRevertToUserAffinityThreadEx )
      PfnKeRevertToUserAffinityThreadEx = ProcgrpRevertToUserAffinityThreadEx;
    RtlInitUnicodeString(&ApiName, L"KeRevertToUserGroupAffinityThread");
    PfnKeRevertToUserGroupAffinityThread = (void (__fastcall *)(_GROUP_AFFINITY *))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeRevertToUserGroupAffinityThread )
      PfnKeRevertToUserGroupAffinityThread = ProcgrpRevertToUserGroupAffinityThread;
    RtlInitUnicodeString(&ApiName, L"KeSetTargetProcessorDpcEx");
    PfnKeSetTargetProcessorDpcEx = (int (__fastcall *)(_KDPC *, _PROCESSOR_NUMBER *))MmGetSystemRoutineAddress(&ApiName);
    if ( !PfnKeSetTargetProcessorDpcEx )
      PfnKeSetTargetProcessorDpcEx = (int (__fastcall *)(_KDPC *, _PROCESSOR_NUMBER *))ProcgrpSetTargetProcessorDpcEx;
    _InterlockedAdd((_DWORD *)&WPP_GLOBAL_WDF_Control.DeviceExtension + 1, 1u);
  }
}
