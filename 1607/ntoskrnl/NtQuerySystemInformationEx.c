/*
 * XREFs of NtQuerySystemInformationEx @ 0x1404B30E0
 * Callers:
 *     <none>
 * Callees:
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

NTSTATUS __cdecl NtQuerySystemInformationEx(
        SYSTEM_INFORMATION_CLASS SystemInformationClass,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID SystemInformation,
        ULONG SystemInformationLength,
        PULONG ReturnLength)
{
  __int32 v8; // ecx
  __int32 v9; // ecx
  __int32 v10; // ecx
  __int32 v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // edx
  char *v16; // rcx

  if ( !InputBuffer || !InputBufferLength )
    return -1073741811;
  if ( SystemInformationClass <= SystemProcessorCycleTimeInformation )
  {
    if ( SystemInformationClass != SystemProcessorCycleTimeInformation
      && SystemInformationClass != SystemLogicalProcessorInformation
      && SystemInformationClass != SystemProcessorPerformanceInformation
      && SystemInformationClass != SystemInterruptInformation
      && SystemInformationClass != SystemProcessorIdleInformation
      && SystemInformationClass != SystemProcessorPowerInformation
      && SystemInformationClass != SystemProcessorIdleCycleTimeInformation
      && SystemInformationClass != SystemProcessorPerformanceDistribution )
    {
      if ( SystemInformationClass != SystemLogicalProcessorAndGroupInformation )
        return -1073741821;
LABEL_30:
      v15 = 4;
      goto LABEL_13;
    }
LABEL_31:
    v15 = 2;
    goto LABEL_13;
  }
  v8 = SystemInformationClass - 121;
  if ( !v8 )
    goto LABEL_31;
  v9 = v8 - 20;
  if ( !v9 )
    goto LABEL_31;
  v10 = v9 - 19;
  if ( !v10 )
    goto LABEL_31;
  v11 = v10 - 5;
  if ( !v11 )
    goto LABEL_12;
  v12 = v11 - 10;
  if ( !v12 )
    goto LABEL_12;
  v13 = v12 - 3;
  if ( !v13 )
    goto LABEL_12;
  v14 = v13 - 2;
  if ( !v14 )
    goto LABEL_30;
  if ( v14 != 1 )
    return -1073741821;
LABEL_12:
  v15 = 8;
LABEL_13:
  if ( KeGetCurrentThread()->PreviousMode )
  {
    if ( ((v15 - 1) & (unsigned int)InputBuffer) != 0 )
      ExRaiseDatatypeMisalignment();
    v16 = (char *)InputBuffer + InputBufferLength;
    if ( (unsigned __int64)v16 > 0x7FFFFFFF0000LL || v16 < InputBuffer )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  return ExpQuerySystemInformation(
           SystemInformationClass,
           (LOGICAL_PROCESSOR_RELATIONSHIP *)InputBuffer,
           InputBufferLength,
           (unsigned __int64)SystemInformation,
           SystemInformationLength,
           ReturnLength);
}
