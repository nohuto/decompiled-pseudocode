/*
 * XREFs of NtQuerySystemInformationEx @ 0x14053E6F0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  int v8; // edx
  char *v9; // rcx
  __int32 v11; // ecx
  __int32 v12; // ecx
  __int32 v13; // ecx
  __int32 v14; // ecx
  int v15; // ecx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass > SystemLogicalProcessorAndGroupInformation )
  {
    v11 = SystemInformationClass - 108;
    if ( v11 )
    {
      v12 = v11 - 13;
      if ( v12 )
      {
        v13 = v12 - 20;
        if ( v13 )
        {
          v14 = v13 - 19;
          if ( v14 )
          {
            v15 = v14 - 5;
            if ( !v15 || v15 == 10 )
            {
              v8 = 8;
              goto LABEL_6;
            }
            return -1073741821;
          }
        }
      }
    }
LABEL_15:
    v8 = 2;
    goto LABEL_6;
  }
  if ( SystemInformationClass != SystemLogicalProcessorAndGroupInformation )
  {
    if ( SystemInformationClass != SystemLogicalProcessorInformation
      && SystemInformationClass != SystemProcessorPerformanceInformation
      && SystemInformationClass != SystemInterruptInformation
      && SystemInformationClass != SystemProcessorIdleInformation
      && SystemInformationClass != SystemProcessorPowerInformation
      && SystemInformationClass != SystemProcessorIdleCycleTimeInformation
      && SystemInformationClass != SystemProcessorPerformanceDistribution )
    {
      return -1073741821;
    }
    goto LABEL_15;
  }
  v8 = 4;
LABEL_6:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v8 - 1) & (unsigned int)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
    v9 = (char *)InputBuffer + InputBufferLength;
    if ( (unsigned __int64)v9 > MmUserProbeAddress || v9 < InputBuffer )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  return ExpQuerySystemInformation(
           SystemInformationClass,
           (LOGICAL_PROCESSOR_RELATIONSHIP *)InputBuffer,
           *(__int64 *)&InputBufferLength,
           (ULONG64)SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
