/*
 * XREFs of MiAllocateAccessLog @ 0x1400886E0
 * Callers:
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiInitializePageAccessLogging @ 0x140088810 (MiInitializePageAccessLogging.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiAllocateAccessLog(__int64 a1)
{
  unsigned __int16 v1; // ax
  int *v3; // rax
  SIZE_T v4; // rbp
  LONG *v5; // rdi
  _QWORD **v6; // rsi
  PVOID PoolWithTag; // rdx
  _QWORD *v8; // rdx
  _QWORD *result; // rax
  _QWORD *v10; // rax
  _SLIST_ENTRY *v11; // rcx

  v1 = *(_WORD *)(a1 + 164);
  if ( v1 == 1023 )
    v3 = MiSystemPartition;
  else
    v3 = *(int **)(qword_140327038 + 8LL * v1);
  if ( *((_QWORD *)v3 + 808) < 0x420uLL
    || *((__int64 *)v3 + 816) < 1056
    || (unsigned __int64)(MiState[0] - qword_140326498) < 0x800 )
  {
    v4 = 512LL;
  }
  else
  {
    v4 = 4096LL;
  }
  if ( (*(_BYTE *)(a1 + 184) & 7) == 2 )
    v5 = &dword_140327CC0;
  else
    v5 = (LONG *)(a1 + 192);
  v6 = (_QWORD **)*((_QWORD *)v5 + 5);
  if ( v6 )
  {
    v10 = *v6;
    if ( v4 == 512 || v10 && *v10 )
    {
      MiEmptyPageAccessLog(*((_SLIST_ENTRY **)v5 + 5));
      v6 = 0LL;
      *((_QWORD *)v5 + 5) = 0LL;
    }
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
  if ( PoolWithTag )
  {
LABEL_11:
    *((_QWORD *)v5 + 5) = PoolWithTag;
    MiInitializePageAccessLogging(a1, PoolWithTag, v4);
    result = v8;
    *v8 = v6;
  }
  else
  {
    while ( 1 )
    {
      v11 = (_SLIST_ENTRY *)*((_QWORD *)v5 + 5);
      if ( v11 )
      {
        MiEmptyPageAccessLog(v11);
        v6 = 0LL;
        *((_QWORD *)v5 + 5) = 0LL;
      }
      v4 >>= 1;
      if ( v4 < 0x200 )
        return 0LL;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x63416D4Du);
      if ( PoolWithTag )
        goto LABEL_11;
    }
  }
  return result;
}
