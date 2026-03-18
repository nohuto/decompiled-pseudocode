/*
 * XREFs of ExDereferenceHandleDebugInfo @ 0x1406EFF48
 * Callers:
 *     ExDisableHandleTracing @ 0x1402630B0 (ExDisableHandleTracing.c)
 *     ExpFreeHandleTable @ 0x140508CCC (ExpFreeHandleTable.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     ExEnableHandleTracing @ 0x1406EFFA0 (ExEnableHandleTracing.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 * Callees:
 *     PsReturnProcessNonPagedPoolQuota @ 0x14008B8B0 (PsReturnProcessNonPagedPoolQuota.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ExDereferenceHandleDebugInfo(__int64 a1, _DWORD *a2)
{
  int v3; // ebx
  ULONG_PTR v4; // rcx

  if ( _InterlockedExchangeAdd(a2, 0xFFFFFFFF) == 1 )
  {
    v3 = a2[1];
    ExFreePoolWithTag(a2, 0x6474624Fu);
    v4 = *(_QWORD *)(a1 + 16);
    if ( v4 )
      PsReturnProcessNonPagedPoolQuota(v4, (unsigned int)(160 * v3 + 80));
    _InterlockedExchangeAdd(&ExpTotalTraceBuffers, -v3);
  }
}
