/*
 * XREFs of VidSchiAllocateHistoryBufferStorage @ 0x1C009FB08
 * Callers:
 *     VidSchSubmitCommand @ 0x1C0042B20 (VidSchSubmitCommand.c)
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
    *(_QWORD *)(a1 + 600) = a1 + 160;
    *(_QWORD *)(a1 + 256) = a1 + 192;
    return 0LL;
  }
  v4 = a2;
  PoolWithTag = ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * a2, 0x75424856u);
  *(_QWORD *)(a1 + 600) = PoolWithTag;
  if ( PoolWithTag )
  {
    v8 = ExAllocatePoolWithTag((POOL_TYPE)512, 16 * v4, 0x75424856u);
    *(_QWORD *)(a1 + 256) = v8;
    if ( v8 )
      return 0LL;
    ExFreePoolWithTag(*(PVOID *)(a1 + 600), 0);
    *(_QWORD *)(a1 + 600) = 0LL;
    v7 = WdLogNewEntry5_WdLowResource(v9);
    *(_QWORD *)(v7 + 24) = 9220LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(v6);
    *(_QWORD *)(v7 + 24) = 9208LL;
  }
  WdLogEvent5_WdLowResource(v7);
  return 3221225495LL;
}
