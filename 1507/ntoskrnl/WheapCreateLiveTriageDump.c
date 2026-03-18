/*
 * XREFs of WheapCreateLiveTriageDump @ 0x1406FD08C
 * Callers:
 *     WheapCreateTriageDumpFromPreviousSession @ 0x140404E68 (WheapCreateTriageDumpFromPreviousSession.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     RtlCaptureContext @ 0x14018B560 (RtlCaptureContext.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeCapturePersistentThreadState @ 0x1401F561C (KeCapturePersistentThreadState.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     WheapInsertTriageDataBlock @ 0x1406FD194 (WheapInsertTriageDataBlock.c)
 */

__int64 __fastcall WheapCreateLiveTriageDump(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  PVOID PoolWithTag; // rbx
  int inserted; // edi
  ULONG v5; // esi
  CONTEXT ContextRecord; // [rsp+40h] [rbp-4E8h] BYREF

  memset(&ContextRecord, 0, sizeof(ContextRecord));
  v1 = a1 + 40;
  v2 = *(int *)(*(_QWORD *)(a1 + 32) + 40LL);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x40000uLL, 0x61656857u);
  if ( PoolWithTag )
  {
    ContextRecord.ContextFlags = 1048587;
    RtlCaptureContext(&ContextRecord);
    v5 = KeCapturePersistentThreadState((__int64)&ContextRecord, 0LL, 292, v2, v1, 0LL, 0LL, (size_t)PoolWithTag);
    inserted = WheapInsertTriageDataBlock(PoolWithTag, v1, *(unsigned int *)(v1 + 20));
    if ( inserted < 0 )
    {
      ExFreePoolWithTag(PoolWithTag, 0x61656857u);
    }
    else
    {
      WheapTriageDump = PoolWithTag;
      WheapTriageDumpLength = v5;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)inserted;
}
