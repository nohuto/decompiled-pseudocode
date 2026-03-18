/*
 * XREFs of MiAllocateAccessLog @ 0x140099C40
 * Callers:
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 * Callees:
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiInitializePageAccessLogging @ 0x140099D30 (MiInitializePageAccessLogging.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  __int16 *v2; // rcx
  SIZE_T v3; // rsi
  _QWORD **v4; // rdi
  PVOID PoolWithTag; // rdx
  _QWORD *v6; // rdx
  _QWORD *result; // rax
  _QWORD *v8; // rax
  void *v9; // rcx

  v2 = MiSystemPartition;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
    v2 = MiPartitionIdToPointer(*(_WORD *)(a1 + 180));
  if ( *((_QWORD *)v2 + 688) < 0x400uLL
    || *((__int64 *)v2 + 696) < 1024
    || (unsigned __int64)(MiState[0] - qword_14034E658) < 0x800 )
  {
    v3 = 512LL;
  }
  else
  {
    v3 = 4096LL;
  }
  v4 = *(_QWORD ***)(a1 + 16);
  if ( v4 )
  {
    v8 = *v4;
    if ( v3 == 512 || v8 && *v8 )
    {
      MiEmptyPageAccessLog(*(PVOID *)(a1 + 16));
      v4 = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x63416D4Du);
  if ( PoolWithTag )
  {
LABEL_9:
    *(_QWORD *)(a1 + 16) = PoolWithTag;
    MiInitializePageAccessLogging(a1, PoolWithTag, v3);
    result = v6;
    *v6 = v4;
  }
  else
  {
    while ( 1 )
    {
      v9 = *(void **)(a1 + 16);
      if ( v9 )
      {
        MiEmptyPageAccessLog(v9);
        v4 = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      v3 >>= 1;
      if ( v3 < 0x200 )
        return 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v3, 0x63416D4Du);
      if ( PoolWithTag )
        goto LABEL_9;
    }
  }
  return result;
}
