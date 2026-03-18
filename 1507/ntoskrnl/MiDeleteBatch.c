/*
 * XREFs of MiDeleteBatch @ 0x1400B2010
 * Callers:
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiDeleteBatch(__int64 *a1, _QWORD *a2, unsigned int a3, __int64 a4, int a5)
{
  __int64 *v5; // r14
  unsigned int v6; // r12d
  unsigned __int64 v7; // rbp
  unsigned __int16 v10; // cx
  __int16 *v11; // rax
  _QWORD *v12; // rdx
  unsigned int i; // esi
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 v16; // rax
  char v17; // dl
  unsigned __int64 v18; // rbx
  __int16 *v20; // [rsp+30h] [rbp-48h]
  __int64 v21; // [rsp+38h] [rbp-40h] BYREF
  volatile signed __int64 *v22; // [rsp+40h] [rbp-38h]
  void *retaddr; // [rsp+78h] [rbp+0h]
  __int64 v24; // [rsp+80h] [rbp+8h]

  v5 = a1;
  v6 = 0;
  v7 = a3;
  v24 = 0LL;
  v10 = ((unsigned int)HIDWORD(*(_QWORD *)(*a1 + 40)) >> 8) & 0x3FF;
  if ( v10 == 1023 )
    v11 = MiSystemPartition;
  else
    v11 = *(__int16 **)(qword_14034F0E8 + 8LL * v10);
  v22 = (volatile signed __int64 *)(v11 + 2832);
  v20 = v11;
  v21 = 0LL;
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireQueuedSpinLockInstrumented(&v21, v11 + 2832);
  }
  else
  {
    v12 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v11 + 708, (__int64)&v21);
    if ( v12 )
      KxWaitForLockOwnerShip((__int64)&v21, v12);
  }
  for ( i = 0; i < (unsigned int)v7; ++v5 )
  {
    v14 = *v5;
    if ( (*(_BYTE *)(*v5 + 34) & 7) != 6 )
      KeBugCheckEx(
        0x4Eu,
        0x99uLL,
        (v14 + 0x58000000000LL) / 48,
        *(_BYTE *)(v14 + 34) & 7,
        *(_QWORD *)(v14 + 24) & 0x3FFFFFFFFFFFFFFFLL);
    v15 = *(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) ^ (*(_QWORD *)(v14 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
    *(_QWORD *)(v14 + 24) = v15;
    if ( (v15 & 0x3FFFFFFFFFFFFFFFLL) == 0
      && (unsigned int)MiPfnShareCountIsZero(v14, 1LL) == 3
      && (*(_QWORD *)(v14 + 40) & 0x200000000000000LL) == 0 )
    {
      ++v24;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    ++i;
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(&v21, retaddr);
  }
  else
  {
    _m_prefetchw(&v21);
    v16 = v21;
    if ( !v21 )
    {
      if ( (__int64 *)_InterlockedCompareExchange64(v22, 0LL, (signed __int64)&v21) == &v21 )
        goto LABEL_14;
      v16 = KxWaitForLockChainValid(&v21);
    }
    v21 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v16 + 8), 1uLL);
  }
LABEL_14:
  if ( a5 == 1 )
  {
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v6);
      }
      while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
    }
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v6 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v6);
    }
    while ( (*(_QWORD *)(a4 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a4 + 24), 0x3FuLL) );
  }
  v17 = *(_BYTE *)(a4 + 34);
  if ( (v17 & 7) != 6 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a4 + 0x58000000000LL) / 48, v17 & 7, *(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v18 = v7;
  if ( (*(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFuLL) < v7 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (a4 + 0x58000000000LL) / 48, v17 & 7, *(_QWORD *)(a4 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  *(_QWORD *)(a4 + 24) ^= (*(_QWORD *)(a4 + 24) ^ (*(_QWORD *)(a4 + 24) - v7)) & 0x3FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (_DWORD)v7 )
  {
    do
    {
      if ( *a2 )
        MiReleasePageFileInfo(v20, *a2, 1LL);
      ++a2;
      --v18;
    }
    while ( v18 );
  }
  return v24;
}
