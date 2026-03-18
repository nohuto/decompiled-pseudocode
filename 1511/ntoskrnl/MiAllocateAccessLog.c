/*
 * XREFs of MiAllocateAccessLog @ 0x1400D7D70
 * Callers:
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiInitializePageAccessLogging @ 0x1400D7E70 (MiInitializePageAccessLogging.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  int *v2; // rcx
  unsigned __int16 v3; // ax
  SIZE_T v4; // rsi
  _QWORD **v5; // rdi
  PVOID PoolWithTag; // rdx
  _QWORD *v7; // rdx
  _QWORD *result; // rax
  _QWORD *v9; // rax
  _QWORD *v10; // rcx

  v2 = MiSystemPartition;
  if ( (*(_BYTE *)(a1 + 216) & 7) == 0 )
  {
    v3 = *(_WORD *)(a1 + 180);
    if ( v3 != 1023 )
      v2 = *(int **)(qword_1402FEC28 + 8LL * v3);
  }
  if ( *((_QWORD *)v2 + 736) < 0x420uLL
    || *((__int64 *)v2 + 744) < 1056
    || (unsigned __int64)(MiState[0] - qword_1402FE198) < 0x800 )
  {
    v4 = 512LL;
  }
  else
  {
    v4 = 4096LL;
  }
  v5 = *(_QWORD ***)(a1 + 16);
  if ( v5 )
  {
    v9 = *v5;
    if ( v4 == 512 || v9 && *v9 )
    {
      MiEmptyPageAccessLog(*(_QWORD **)(a1 + 16));
      v5 = 0LL;
      *(_QWORD *)(a1 + 16) = 0LL;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
  if ( PoolWithTag )
  {
LABEL_10:
    *(_QWORD *)(a1 + 16) = PoolWithTag;
    MiInitializePageAccessLogging(a1, PoolWithTag, v4);
    result = v7;
    *v7 = v5;
  }
  else
  {
    while ( 1 )
    {
      v10 = *(_QWORD **)(a1 + 16);
      if ( v10 )
      {
        MiEmptyPageAccessLog(v10);
        v5 = 0LL;
        *(_QWORD *)(a1 + 16) = 0LL;
      }
      v4 >>= 1;
      if ( v4 < 0x200 )
        return 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
      if ( PoolWithTag )
        goto LABEL_10;
    }
  }
  return result;
}
