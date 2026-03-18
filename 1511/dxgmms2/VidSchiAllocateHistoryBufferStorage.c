/*
 * XREFs of VidSchiAllocateHistoryBufferStorage @ 0x1C008A340
 * Callers:
 *     VidSchSubmitCommand @ 0x1C0039780 (VidSchSubmitCommand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiAllocateHistoryBufferStorage(__int64 a1, unsigned int a2)
{
  __int64 v4; // rdi
  PVOID PoolWithTag; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  PVOID v8; // rax
  __int64 v9; // rcx

  if ( a2 <= 4 )
  {
    *(_QWORD *)(a1 + 592) = a1 + 152;
    *(_QWORD *)(a1 + 248) = a1 + 184;
    return 0LL;
  }
  v4 = a2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x75424856u);
  *(_QWORD *)(a1 + 592) = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v4, 0x75424856u);
    *(_QWORD *)(a1 + 248) = v8;
    if ( v8 )
      return 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 592), 0);
    *(_QWORD *)(a1 + 592) = 0LL;
    v7 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v7 + 24) = 8395LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v7 + 24) = 8383LL;
  }
  WdLogEvent5_WdLowResource(v7);
  return 3221225495LL;
}
