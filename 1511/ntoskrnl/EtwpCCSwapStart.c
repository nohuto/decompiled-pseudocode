/*
 * XREFs of EtwpCCSwapStart @ 0x140501110
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x140500298 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  ULONG v1; // ebp
  __int64 v2; // rdi
  ULONG v3; // esi
  __int64 v4; // rbx
  PVOID PoolWithTag; // rax
  ULONG i; // ebp
  __int64 v8; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  if ( CCSwapNumLoggersPerClockType[a1] || (v3 = 0, !(_DWORD)KeNumberProcessors_0) )
  {
LABEL_6:
    ++CCSwapNumLoggersPerClockType[v2];
    return 0LL;
  }
  while ( 1 )
  {
    v4 = *(_QWORD *)(KeGetPrcb(v3) + 24536);
    if ( !*(_QWORD *)(v4 + 8 * v2 + 2848) )
      break;
    *(_BYTE *)(v2 + v4 + 2840) = 0;
LABEL_5:
    ++v3;
    **(_DWORD **)(v4 + 8 * v2 + 2848) = 0;
    if ( v3 >= v1 )
      goto LABEL_6;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
  *(_QWORD *)(v4 + 8 * v2 + 2848) = PoolWithTag;
  if ( PoolWithTag )
    goto LABEL_5;
  for ( i = 0; i < v3; ++i )
  {
    v8 = *(_QWORD *)(KeGetPrcb(i) + 24536);
    ExFreePoolWithTag(*(PVOID *)(v8 + 8 * v2 + 2848), 0);
    *(_QWORD *)(v8 + 8 * v2 + 2848) = 0LL;
  }
  return 3221225495LL;
}
