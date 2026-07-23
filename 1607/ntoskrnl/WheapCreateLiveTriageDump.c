/*
 * XREFs of WheapCreateLiveTriageDump @ 0x1406BB0E0
 * Callers:
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1403E07FC (WheapCreateTriageDumpFromPreviousSession.c)
 * Callees:
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x140167490 (RtlCaptureContext.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KeCapturePersistentThreadState @ 0x1401C80E8 (KeCapturePersistentThreadState.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WheapInsertTriageDataBlock @ 0x1406BB1E0 (WheapInsertTriageDataBlock.c)
 */

__int64 __fastcall WheapCreateLiveTriageDump(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rsi
  PVOID PoolWithTag; // rbx
  int inserted; // edi
  ULONG v6; // esi
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  v2 = a1 + 40;
  v3 = *(int *)(*(_QWORD *)(a1 + 32) + 40LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40000uLL, 0x61656857u);
  if ( PoolWithTag )
  {
    ContextRecord.ContextFlags = 1048587;
    RtlCaptureContext(&ContextRecord);
    v6 = KeCapturePersistentThreadState((__int64)&ContextRecord, 0LL, 292, v3, v2, 0LL, 0LL, (size_t)PoolWithTag);
    inserted = WheapInsertTriageDataBlock(PoolWithTag, v2, *(unsigned int *)(v2 + 20));
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x61656857u);
    }
    else
    {
      WheapTriageDump = PoolWithTag;
      WheapTriageDumpLength = v6;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)inserted;
}
