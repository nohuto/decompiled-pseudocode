/*
 * XREFs of RtlpAllocateSecondLevelDirUsingFreeList @ 0x14011F638
 * Callers:
 *     RtlpAllocateSecondLevelDir @ 0x14011F60C (RtlpAllocateSecondLevelDir.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

_QWORD *RtlpAllocateSecondLevelDirUsingFreeList()
{
  unsigned __int8 CurrentIrql; // si
  signed __int8 v1; // cf
  _QWORD *v2; // rdi
  _QWORD *PoolWithTag; // rax
  char *v4; // rdx
  char *v5; // rcx
  char *v6; // rax
  _QWORD *v7; // rsi
  char **v8; // rcx
  unsigned __int8 v9; // bp
  _UNKNOWN **v10; // rcx
  __int64 v12; // rax
  _QWORD *v13; // [rsp+20h] [rbp-28h] BYREF
  char *v14; // [rsp+28h] [rbp-20h]
  void *retaddr; // [rsp+48h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&qword_14034E390);
  }
  else
  {
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E390, 0LL);
    if ( v1 )
      KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_14034E390);
  }
  v2 = off_14031EDD0;
  if ( off_14031EDD0 == (_UNKNOWN *)&off_14031EDD0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_14034E390, retaddr);
    else
      _InterlockedAnd64(&qword_14034E390, 0LL);
    __writecr8(CurrentIrql);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x62615448u);
    if ( PoolWithTag )
    {
      PoolWithTag[2] = 1LL;
      v4 = (char *)(PoolWithTag + 512);
      v5 = (char *)&v13;
      v2 = PoolWithTag;
      v14 = (char *)&v13;
      v6 = (char *)(PoolWithTag + 256);
      v7 = &v13;
      v13 = &v13;
      if ( v6 < v4 )
      {
        do
        {
          *((_QWORD *)v6 + 2) = 0LL;
          v8 = (char **)v14;
          *(_QWORD *)v6 = &v13;
          *((_QWORD *)v6 + 1) = v8;
          if ( *v8 != (char *)&v13 )
            __fastfail(3u);
          *v8 = v6;
          v5 = v6;
          v14 = v6;
          v6 += 2048;
        }
        while ( v6 < v4 );
        v7 = v13;
      }
      if ( (_QWORD **)v7[1] != &v13 || *(_QWORD ***)v5 != &v13 )
        __fastfail(3u);
      *(_QWORD *)v5 = v7;
      v7[1] = v5;
      v9 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireSpinLockInstrumented(&qword_14034E390);
      }
      else
      {
        v1 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14034E390, 0LL);
        if ( v1 )
          KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_14034E390);
      }
      v10 = off_14031EDD8;
      if ( *((_UNKNOWN ***)off_14031EDD0 + 1) != &off_14031EDD0 || *off_14031EDD8 != (_UNKNOWN *)&off_14031EDD0 )
        __fastfail(3u);
      if ( *(_QWORD **)(*v7 + 8LL) != v7 || *(_QWORD **)v7[1] != v7 )
        __fastfail(3u);
      *off_14031EDD8 = v7;
      off_14031EDD8 = (_UNKNOWN **)v7[1];
      *(_QWORD *)v7[1] = &off_14031EDD0;
      v7[1] = v10;
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        KiReleaseSpinLockInstrumented(&qword_14034E390, retaddr);
      else
        _InterlockedAnd64(&qword_14034E390, 0LL);
      __writecr8(v9);
    }
    else
    {
      return 0LL;
    }
  }
  else
  {
    v12 = *(_QWORD *)off_14031EDD0;
    if ( *((_UNKNOWN ***)off_14031EDD0 + 1) != &off_14031EDD0 || *(_UNKNOWN **)(v12 + 8) != off_14031EDD0 )
      __fastfail(3u);
    off_14031EDD0 = *(_UNKNOWN **)off_14031EDD0;
    *(_QWORD *)(v12 + 8) = &off_14031EDD0;
    v2[2] = 1LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(&qword_14034E390, retaddr);
    else
      _InterlockedAnd64(&qword_14034E390, 0LL);
    __writecr8(CurrentIrql);
  }
  return v2;
}
