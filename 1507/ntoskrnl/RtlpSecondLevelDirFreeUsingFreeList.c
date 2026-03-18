/*
 * XREFs of RtlpSecondLevelDirFreeUsingFreeList @ 0x140130D38
 * Callers:
 *     RtlContractHashTable @ 0x14010DE30 (RtlContractHashTable.c)
 *     RtlDeleteHashTable @ 0x140131B40 (RtlDeleteHashTable.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall RtlpSecondLevelDirFreeUsingFreeList(unsigned __int64 a1)
{
  __int64 *v1; // r14
  char *v2; // rbp
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // rsi
  int v6; // r15d
  unsigned __int8 CurrentIrql; // r12
  _UNKNOWN ***v8; // rax
  char *i; // rax
  __int64 v10; // rdx
  char **v11; // rcx
  unsigned __int64 *v12; // rax
  __int64 v13; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v1 = 0LL;
  v2 = (char *)(a1 & 0xFFFFFFFFFFFFF000uLL);
  v4 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v5 = 0LL;
  v6 = 1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_14034E390);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E390, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_14034E390);
  }
  if ( v2 >= v2 + 4096 )
    goto LABEL_19;
  do
  {
    if ( v4 == a1 )
    {
      *(_QWORD *)(v4 + 16) = 0LL;
    }
    else if ( *(_QWORD *)(v4 + 16) )
    {
      v6 = 0;
    }
    else if ( v4 < a1 )
    {
      v1 = (__int64 *)v4;
    }
    else if ( v4 > a1 && !v5 )
    {
      v5 = v4;
    }
    v4 += 2048LL;
  }
  while ( v4 < (unsigned __int64)(v2 + 4096) );
  if ( v6 )
  {
LABEL_19:
    for ( i = v2; i < v2 + 4096; i += 2048 )
    {
      if ( i != (char *)a1 )
      {
        v10 = *(_QWORD *)i;
        v11 = (char **)*((_QWORD *)i + 1);
        if ( *(char **)(*(_QWORD *)i + 8LL) != i || *v11 != i )
          __fastfail(3u);
        *v11 = (char *)v10;
        *(_QWORD *)(v10 + 8) = v11;
      }
    }
  }
  else if ( v5 )
  {
    v12 = *(unsigned __int64 **)(v5 + 8);
    *(_QWORD *)a1 = v5;
    *(_QWORD *)(a1 + 8) = v12;
    if ( *v12 != v5 )
      __fastfail(3u);
    *v12 = a1;
    *(_QWORD *)(v5 + 8) = a1;
  }
  else if ( v1 )
  {
    v13 = *v1;
    *(_QWORD *)a1 = *v1;
    *(_QWORD *)(a1 + 8) = v1;
    if ( *(__int64 **)(v13 + 8) != v1 )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = a1;
    *v1 = a1;
  }
  else
  {
    v8 = (_UNKNOWN ***)off_14031EDD0;
    *(_QWORD *)a1 = off_14031EDD0;
    *(_QWORD *)(a1 + 8) = &off_14031EDD0;
    if ( v8[1] != &off_14031EDD0 )
      __fastfail(3u);
    v8[1] = (_UNKNOWN **)a1;
    off_14031EDD0 = (_UNKNOWN *)a1;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_14034E390, retaddr);
  else
    _InterlockedAnd64(&qword_14034E390, 0LL);
  __writecr8(CurrentIrql);
  if ( v6 )
    ExFreePoolWithTag(v2, 0);
}
