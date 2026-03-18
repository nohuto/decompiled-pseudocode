/*
 * XREFs of EtwpCCSwapStart @ 0x14056BADC
 * Callers:
 *     EtwpUpdateGroupMasks @ 0x14054A404 (EtwpUpdateGroupMasks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpCCSwapStart(unsigned int a1)
{
  unsigned int v1; // ebp
  __int64 v2; // rdi
  unsigned int v3; // esi
  __int64 *v4; // r14
  __int64 *v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rbx
  PVOID PoolWithTag; // rax
  unsigned int i; // ebp
  __int64 v11; // rbx
  __int64 v12; // rbx

  v1 = KeNumberProcessors_0;
  v2 = a1;
  if ( CCSwapNumLoggersPerClockType[a1] || (v3 = 0, !(_DWORD)KeNumberProcessors_0) )
  {
LABEL_9:
    ++CCSwapNumLoggersPerClockType[v2];
    return 0LL;
  }
  v4 = KiProcessorBlock;
  v5 = KiProcessorBlock;
  while ( 1 )
  {
    v6 = v3 >= (unsigned int)KeNumberProcessors_0 ? 0LL : *v5;
    v7 = *(_QWORD *)(v6 + 24536);
    if ( !*(_QWORD *)(v7 + 8 * v2 + 2848) )
      break;
    *(_BYTE *)(v2 + v7 + 2840) = 0;
LABEL_8:
    ++v3;
    ++v5;
    **(_DWORD **)(v7 + 8 * v2 + 2848) = 0;
    if ( v3 >= v1 )
      goto LABEL_9;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x400uLL, 0x77734343u);
  *(_QWORD *)(v7 + 8 * v2 + 2848) = PoolWithTag;
  if ( PoolWithTag )
    goto LABEL_8;
  for ( i = 0; i < v3; ++v4 )
  {
    if ( i >= (unsigned int)KeNumberProcessors_0 )
      v11 = 0LL;
    else
      v11 = *v4;
    v12 = *(_QWORD *)(v11 + 24536);
    ExFreePoolWithTag(*(PVOID *)(v12 + 8 * v2 + 2848), 0);
    *(_QWORD *)(v12 + 8 * v2 + 2848) = 0LL;
    ++i;
  }
  return 3221225495LL;
}
