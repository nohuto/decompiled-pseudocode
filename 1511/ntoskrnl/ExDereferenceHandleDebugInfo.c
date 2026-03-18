/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x14066C7D4
 * Callers:
 *     ExDisableHandleTracing @ 0x1402137F0 (ExDisableHandleTracing.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ExpFreeHandleTable @ 0x1404AE2CC (ExpFreeHandleTable.c)
 *     ExEnableHandleTracing @ 0x14066C82C (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14006C2EC (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  struct _KPROCESS *v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(struct _KPROCESS **)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
  }
}
