/*
 * XREFs of TpInitializePackage @ 0x180003584
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateTagHeap @ 0x180003610 (RtlCreateTagHeap.c)
 *     NtQuerySystemInformation @ 0x180093C60 (NtQuerySystemInformation.c)
 */

NTSTATUS TpInitializePackage()
{
  int TagHeap; // eax
  NTSTATUS result; // eax
  _DWORD SystemInformation[262]; // [rsp+20h] [rbp-418h] BYREF
  ULONG ReturnLength; // [rsp+440h] [rbp+8h] BYREF

  TagHeap = RtlCreateTagHeap(NtCurrentPeb()->ProcessHeap);
  ReturnLength = 0;
  TppHeapTag = TagHeap;
  result = NtQuerySystemInformation(
             SystemRegistryQuotaInformation|SystemPerformanceInformation|0x10,
             SystemInformation,
             0x408u,
             &ReturnLength);
  if ( result >= 0 )
  {
    if ( ReturnLength < 4 )
    {
      return -1073741595;
    }
    else
    {
      TppNumberNodes = SystemInformation[0] + 1;
      return 0;
    }
  }
  return result;
}
