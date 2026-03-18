/*
 * XREFs of IopGetSetStreamIdentifier @ 0x1401F69D0
 * Callers:
 *     IoAllocateSfioStreamIdentifier @ 0x1401F5DD0 (IoAllocateSfioStreamIdentifier.c)
 *     IoGetSfioStreamIdentifier @ 0x1401F6034 (IoGetSfioStreamIdentifier.c)
 * Callees:
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetSetStreamIdentifier(__int64 a1, unsigned int a2, __int64 a3, _QWORD *a4, char a5)
{
  __int64 v6; // r13
  __int64 result; // rax
  unsigned int v10; // edi
  _QWORD *v11; // rsi
  volatile signed __int32 *v12; // rbx
  unsigned __int8 CurrentIrql; // r14
  _QWORD *v14; // rax
  _QWORD *PoolWithTag; // r14
  unsigned __int8 v16; // bp
  _QWORD *v17; // rax
  _QWORD *v18; // [rsp+30h] [rbp-38h] BYREF
  __int64 v19; // [rsp+38h] [rbp-30h] BYREF
  void *retaddr; // [rsp+68h] [rbp+0h]

  v6 = a2;
  result = IopGetSetSpecificExtension(a1, 4u, 0x10u, a5, &v18, &v19);
  v10 = 0;
  if ( (int)result < 0 )
    return result;
  v11 = v18;
  if ( !v18 )
  {
    *a4 = 0LL;
    return 0LL;
  }
  v12 = (volatile signed __int32 *)(a1 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v12);
  }
  else
  {
    if ( _interlockedbittestandset64(v12, 0LL) )
      KxWaitForSpinLockAndAcquire(v12);
    v11 = v18;
  }
  v14 = (_QWORD *)*v11;
  if ( !*v11 )
  {
    v11[1] = v11;
    v14 = v11;
    *v11 = v11;
  }
  while ( 1 )
  {
    if ( v14 == v11 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseSpinLockInstrumented(v12, retaddr);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
        v11 = v18;
      }
      __writecr8(CurrentIrql);
      if ( a5 )
      {
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6 + 32, 0x74536F49u);
        if ( PoolWithTag )
        {
          v16 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v12);
          }
          else
          {
            if ( _interlockedbittestandset64(v12, 0LL) )
              KxWaitForSpinLockAndAcquire(v12);
            v11 = v18;
          }
          v17 = (_QWORD *)v11[1];
          *PoolWithTag = v11;
          PoolWithTag[1] = v17;
          if ( (_QWORD *)*v17 != v11 )
            __fastfail(3u);
          *v17 = PoolWithTag;
          v11[1] = PoolWithTag;
          PoolWithTag[2] = PoolWithTag + 4;
          PoolWithTag[3] = a3;
          *a4 = PoolWithTag + 4;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v12, retaddr);
          else
            _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
          __writecr8(v16);
          return 0LL;
        }
        result = 3221225626LL;
      }
      else
      {
        result = 0LL;
      }
      *a4 = 0LL;
      return result;
    }
    if ( v14[3] == a3 )
      break;
    v14 = (_QWORD *)*v14;
  }
  if ( a5 )
  {
    *a4 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v12, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
    v10 = -1073741791;
  }
  else
  {
    *a4 = v14[2];
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      KiReleaseSpinLockInstrumented(v12, retaddr);
    else
      _InterlockedAnd64((volatile signed __int64 *)v12, 0LL);
  }
  __writecr8(CurrentIrql);
  return v10;
}
