/*
 * XREFs of RtlDisableThreadProfiling @ 0x1800C8300
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 */

NTSTATUS __cdecl RtlDisableThreadProfiling(PVOID PerformanceDataHandle)
{
  int v2; // ebx
  _DWORD v4[4]; // [rsp+20h] [rbp-28h] BYREF
  PVOID v5; // [rsp+30h] [rbp-18h]

  v4[3] = 0;
  v5 = PerformanceDataHandle;
  v2 = NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadCounterProfiling, v4, 0x18u);
  if ( v2 >= 0 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, PerformanceDataHandle);
  return v2;
}
