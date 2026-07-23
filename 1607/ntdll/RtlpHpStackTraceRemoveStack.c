/*
 * XREFs of RtlpHpStackTraceRemoveStack @ 0x1800F87F4
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlpHpStackTraceAllocRemove @ 0x1800F847C (RtlpHpStackTraceAllocRemove.c)
 *     RtlStackDbStackRemove @ 0x180101E68 (RtlStackDbStackRemove.c)
 */

int __fastcall RtlpHpStackTraceRemoveStack(__int64 a1, __int64 a2)
{
  _RTL_RUN_ONCE *v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rcx
  PVOID Context; // [rsp+30h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 16) == -571548178 )
    v3 = (_RTL_RUN_ONCE *)(a1 + 136);
  else
    v3 = (_RTL_RUN_ONCE *)(a1 + 368);
  LODWORD(v4) = RtlRunOnceExecuteOnce(v3, (PRTL_RUN_ONCE_INIT_FN)RtlpHpPerHeapStackTraceInitialize, 0LL, &Context);
  if ( (int)v4 >= 0 )
  {
    if ( Context )
    {
      v4 = RtlpHpStackTraceAllocRemove((PRTL_SRWLOCK)Context, a2);
      if ( v4 )
        LODWORD(v4) = RtlStackDbStackRemove(v5, v4);
    }
  }
  return v4;
}
