/*
 * XREFs of MiLockPageTableRange @ 0x14014A398
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x140567F04 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLockPageTablePage @ 0x140035180 (MiLockPageTablePage.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiUnlockPageTableRange @ 0x14014BA28 (MiUnlockPageTableRange.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiLockPageTableRange(ULONG_PTR a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // rsi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r15
  volatile signed __int32 *v6; // rdi
  ULONG_PTR v7; // r14
  unsigned __int8 CurrentIrql; // r12
  unsigned int v9; // ebx
  signed __int32 i; // edx
  __int64 *v11; // rcx
  int v12; // edx
  unsigned int v13; // eax
  __int64 v14; // r8
  __int64 *v15; // r9
  unsigned int v16; // ebx
  unsigned __int64 v17; // rdx
  __int64 v18; // rax
  _QWORD *v20; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v21; // [rsp+40h] [rbp-48h]
  __int64 v22; // [rsp+48h] [rbp-40h] BYREF

  v3 = a1;
  v4 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = (volatile signed __int32 *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[8];
  v7 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v6);
  }
  else
  {
    v9 = 0;
    if ( _interlockedbittestandset(v6, 0x1Fu) )
      v9 = ExpWaitForSpinLockExclusiveAndAcquire(v6);
    for ( i = *v6; (*v6 & 0xBFFFFFFF) != 0x80000000; i = *v6 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange(v6, i | 0x40000000, i);
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
  }
  if ( v4 > v5 )
  {
LABEL_32:
    v7 = 0LL;
    v16 = 0;
    goto LABEL_33;
  }
  while ( 1 )
  {
    v11 = &v22;
    v12 = 3;
    v22 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      --v11;
      *v11 = (((unsigned __int64)v11[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v12;
    }
    while ( v12 );
    v13 = MiResolvePageTablePage(0LL, v3, &v20, 0LL, CurrentIrql, 0);
    v16 = v13;
    if ( v13 != -1073741802 )
    {
      if ( v13 != -1073740748 )
        goto LABEL_33;
      goto LABEL_31;
    }
    v17 = *(_QWORD *)v21;
    if ( v21 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, v17)
      && (v17 & 1) != 0
      && ((v17 & 0x20) == 0 || (v17 & 0x42) == 0) )
    {
      v14 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v14 )
      {
        v18 = *(_QWORD *)(v14 + 8 * ((v21 >> 3) & 0x1FF));
        if ( (v18 & 0x20) != 0 )
          v17 |= 0x20uLL;
        if ( (v18 & 0x42) != 0 )
          v17 |= 0x42uLL;
      }
    }
    if ( !(unsigned int)MiLockPageTablePage(48 * ((v17 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL, 0, v14, v15) )
      break;
    v7 = v3;
    v4 += 8LL;
    v3 = (__int64)(v4 << 25) >> 16 << 25 >> 16;
LABEL_31:
    if ( v4 > v5 )
      goto LABEL_32;
  }
  v16 = -1073741670;
LABEL_33:
  MiUnlockWorkingSetExclusive((__int64)v6, CurrentIrql);
  if ( v7 )
    MiUnlockPageTableRange(a1, v7);
  return v16;
}
