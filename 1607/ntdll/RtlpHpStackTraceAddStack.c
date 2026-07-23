/*
 * XREFs of RtlpHpStackTraceAddStack @ 0x1800F80E4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlpAllocateHeapInternal @ 0x180022DE0 (RtlpAllocateHeapInternal.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlCaptureStackBackTrace @ 0x1800325A0 (RtlCaptureStackBackTrace.c)
 *     RtlpHpMetadataFree @ 0x18004F70C (RtlpHpMetadataFree.c)
 *     RtlpHpMetadataAlloc @ 0x180050754 (RtlpHpMetadataAlloc.c)
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 *     RtlStackDbStackAdd @ 0x180101814 (RtlStackDbStackAdd.c)
 *     RtlStackDbStackRemove @ 0x180101E68 (RtlStackDbStackRemove.c)
 */

int __fastcall RtlpHpStackTraceAddStack(__int64 a1)
{
  _RTL_RUN_ONCE *v1; // rcx
  PVOID *v2; // rax
  unsigned __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rbx
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v1 = (_RTL_RUN_ONCE *)(a1 + 136);
  else
    v1 = (_RTL_RUN_ONCE *)(a1 + 368);
  LODWORD(v2) = RtlRunOnceExecuteOnce(v1, (PRTL_RUN_ONCE_INIT_FN)RtlpHpPerHeapStackTraceInitialize, 0LL, &Context);
  if ( (int)v2 >= 0 )
  {
    if ( Context )
    {
      v2 = (PVOID *)RtlpHpMetadataAlloc(0x600uLL, 0);
      v3 = (unsigned __int64)v2;
      if ( v2 )
      {
        if ( RtlCaptureStackBackTrace(3u, 0xC0u, v2, 0LL) )
        {
          v6 = RtlStackDbStackAdd(v4, v3);
          if ( !v6 || (unsigned int)RtlpHpStackTraceAllocAdd((PRTL_SRWLOCK)Context) )
            v6 = 0LL;
          if ( v6 )
            RtlStackDbStackRemove(v5, v6);
        }
        LODWORD(v2) = RtlpHpMetadataFree(v3);
      }
    }
  }
  return (int)v2;
}
