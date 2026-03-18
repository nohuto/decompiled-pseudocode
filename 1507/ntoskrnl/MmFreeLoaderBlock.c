/*
 * XREFs of MmFreeLoaderBlock @ 0x1407CFF0C
 * Callers:
 *     Phase1InitializationIoReady @ 0x1407D05E0 (Phase1InitializationIoReady.c)
 * Callees:
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MiDeleteBootRange @ 0x140162804 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x140225DF4 (MiMakeTransitionPte.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x140598AF8 (MmFreeBootRegistry.c)
 */

// local variable allocation has failed, the output may be wrong!
void MmFreeLoaderBlock()
{
  __int64 *v0; // r14
  unsigned int v1; // r15d
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  unsigned int v7; // eax
  _QWORD *v8; // rsi
  signed __int8 v9; // cf
  unsigned int v10; // edi
  signed __int32 i; // edx
  __int64 *v12; // rdi
  __int64 *v13; // rbx
  unsigned __int64 v14; // r12
  _QWORD *v15; // rsi
  unsigned __int64 v16; // r9
  __int64 v17; // r15
  unsigned __int64 PteShadow; // rax
  __int64 TransitionPte; // rax
  __int64 *v20; // r9
  unsigned __int64 v21; // r10
  __int64 *j; // rsi
  unsigned __int64 v23; // r12
  __int64 v24; // rdi
  unsigned __int8 v25; // r13
  unsigned int v26; // r15d
  char v27; // cl
  __int64 v28; // rdx
  _QWORD *v29; // rax
  _QWORD *v30; // rsi
  __int64 *v31; // rcx
  _QWORD *v32; // rbx
  int v33; // edx
  unsigned int v34; // eax
  _QWORD *k; // rbx
  __int64 v36; // rdx
  __int64 v37; // r8
  _QWORD *v38; // rcx
  unsigned __int64 v39; // rdi
  unsigned __int64 *v40; // rcx
  unsigned __int64 v41; // rdi
  unsigned int v42; // [rsp+38h] [rbp-D0h]
  unsigned __int64 v43; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD *PoolWithTag; // [rsp+48h] [rbp-C0h]
  __int64 v45; // [rsp+50h] [rbp-B8h]
  __int64 CurrentIrql; // [rsp+58h] [rbp-B0h]
  __int64 *v47; // [rsp+60h] [rbp-A8h]
  __int64 DemandZeroPte; // [rsp+68h] [rbp-A0h]
  int v49; // [rsp+78h] [rbp-90h] BYREF
  __int16 v50; // [rsp+7Ch] [rbp-8Ch]
  __int64 v51; // [rsp+80h] [rbp-88h]
  __int64 v52; // [rsp+88h] [rbp-80h]
  __int64 v53; // [rsp+90h] [rbp-78h]

  v0 = (__int64 *)(KeLoaderBlock_0 + 32);
  v1 = 0;
  v2 = 0LL;
  v45 = KeLoaderBlock_0 + 32;
  DemandZeroPte = MiMakeDemandZeroPte(4);
  v4 = DemandZeroPte;
  v5 = 2113664;
  if ( v3 != v0 )
  {
    do
    {
      v6 = v3[4];
      if ( v6 )
      {
        v7 = *((_DWORD *)v3 + 4);
        if ( v7 == 19 )
          v2 += v6;
        if ( v7 <= 0x15 && _bittest(&v5, v7) )
          ++v1;
      }
      v3 = (__int64 *)*v3;
    }
    while ( v3 != v0 );
    v42 = v1;
    if ( v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2 + 8, 0x6C4D6D4Du);
      v8 = PoolWithTag;
      if ( PoolWithTag )
      {
        if ( (unsigned int)MiChargeWsles((__int64)dword_14034FF40, v2, 0) )
        {
          *PoolWithTag = v2;
          v47 = v8 + 1;
          v51 = 20LL;
          v49 = 0;
          v50 = 0;
          v52 = 0LL;
          v53 = 0LL;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(dword_14034FF40);
          }
          else
          {
            v9 = _interlockedbittestandset(dword_14034FF40, 0x1Fu);
            v10 = 0;
            if ( v9 )
              v10 = ExpWaitForSpinLockExclusiveAndAcquire(dword_14034FF40);
            for ( i = dword_14034FF40[0]; (dword_14034FF40[0] & 0xBFFFFFFF) != 0x80000000; i = dword_14034FF40[0] )
            {
              if ( (i & 0x40000000) == 0 )
                _InterlockedCompareExchange(dword_14034FF40, i | 0x40000000, i);
              if ( (++v10 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v10);
            }
          }
          v12 = (__int64 *)*v0;
          if ( (__int64 *)*v0 != v0 )
          {
            v13 = v47;
            do
            {
              if ( *((_DWORD *)v12 + 4) == 19 && v12[4] )
              {
                v14 = 0LL;
                v15 = (_QWORD *)(48 * v12[3] - 0x57FFFFFFFF8LL);
                do
                {
                  v16 = *v15 | 0x8000000000000000uLL;
                  v17 = (__int64)(v16 << 25) >> 16;
                  *v13 = v17;
                  PteShadow = *(_QWORD *)v16;
                  ++v13;
                  if ( v16 + 0x90482413000LL <= 0x7F8 )
                    PteShadow = MiReadPteShadow(v16, *(_QWORD *)v16);
                  v43 = PteShadow;
                  if ( (unsigned __int64)&STACK[0x90482413040] <= 0x7F8 )
                    PteShadow = MiReadPteShadow((__int64)&v43, PteShadow);
                  TransitionPte = MiMakeTransitionPte((PteShadow >> 12) & 0xFFFFFFFFFLL, 4);
                  v43 = TransitionPte;
                  *v20 = TransitionPte;
                  if ( v21 <= 0x7F8 )
                    MiWritePteShadow((__int64)v20, TransitionPte);
                  MiInsertTbFlushEntry((__int64)&v49, v17, 1LL, 0);
                  ++v14;
                  v15 += 6;
                }
                while ( v14 < v12[4] );
                v0 = (__int64 *)v45;
              }
              v12 = (__int64 *)*v12;
            }
            while ( v12 != v0 );
            v4 = DemandZeroPte;
          }
          MiFlushTbList((__int64)&v49);
          for ( j = (__int64 *)*v0; j != v0; j = (__int64 *)*j )
          {
            if ( *((_DWORD *)j + 4) == 19 && j[4] )
            {
              v23 = 0LL;
              v24 = 48 * j[3] - 0x58000000000LL;
              do
              {
                v25 = KeGetCurrentIrql();
                __writecr8(2uLL);
                v26 = 0;
                if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) )
                {
                  do
                  {
                    if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                      _mm_pause();
                    else
                      HvlNotifyLongSpinWait(v26);
                  }
                  while ( (*(_QWORD *)(v24 + 24) & 0x8000000000000000uLL) != 0
                       || _interlockedbittestandset64((volatile signed __int32 *)(v24 + 24), 0x3FuLL) );
                }
                v27 = *(_BYTE *)(v24 + 34) | 0x10;
                *(_QWORD *)(v24 + 16) = v4;
                *(_BYTE *)(v24 + 34) = v27;
                if ( (v27 & 7) != 6 )
                  KeBugCheckEx(
                    0x4Eu,
                    0x99uLL,
                    (v24 + 0x58000000000LL) / 48,
                    v27 & 7,
                    *(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL);
                v28 = (*(_QWORD *)(v24 + 24) & 0x3FFFFFFFFFFFFFFFLL) - 1;
                *(_QWORD *)(v24 + 24) ^= (*(_QWORD *)(v24 + 24) ^ v28) & 0x3FFFFFFFFFFFFFFFLL;
                if ( !v28 )
                  MiPfnShareCountIsZero(v24, 0LL);
                _InterlockedAnd64((volatile signed __int64 *)(v24 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v25);
                ++v23;
                v24 += 48LL;
              }
              while ( v23 < j[4] );
            }
          }
          MiUnlockWorkingSetExclusive((__int64)dword_14034FF40, CurrentIrql);
          if ( _InterlockedCompareExchange64(&qword_14034FB90, (signed __int64)PoolWithTag, 0LL) )
          {
            qword_14034FB90 = (__int64)PoolWithTag;
            MmFreeBootRegistry();
          }
          v1 = v42;
        }
        else
        {
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
    }
  }
  v29 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v1, 0x6C4D6D4Du);
  v30 = v29;
  if ( v29 )
  {
    v31 = (__int64 *)*v0;
    v32 = v29;
    if ( (__int64 *)*v0 != v0 )
    {
      v33 = 2113664;
      do
      {
        v34 = *((_DWORD *)v31 + 4);
        if ( v34 <= 0x15 && _bittest(&v33, v34) && v31[4] )
        {
          *v32 = v31[3];
          v32[1] = v31[4];
          v32 += 2;
        }
        v31 = (__int64 *)*v31;
      }
      while ( v31 != v0 );
      if ( v32 != v30 )
      {
        for ( k = v32 - 2; k >= v30; k -= 2 )
        {
          v36 = k[1];
          v37 = 48LL * *k;
          v38 = (_QWORD *)(v37 - 0x57FFFFFFFF8LL);
          v39 = *(_QWORD *)(v37 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v36 )
          {
            v38 += 6;
            v39 += 8LL;
            if ( (*v38 | 0x8000000000000000uLL) != v39 )
            {
              v40 = (unsigned __int64 *)(*(_QWORD *)(v37 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL);
              v41 = (__int64)(v39 - (_QWORD)v40) >> 3;
              MiDeleteBootRange(v40, v41);
              k[1] -= v41;
              *k += v41;
              k += 2;
              if ( v41 )
                goto LABEL_75;
              break;
            }
          }
          MiDeleteBootRange(
            (unsigned __int64 *)(*(_QWORD *)(48LL * *k - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL),
            k[1]);
LABEL_75:
          ;
        }
      }
    }
    ExFreePoolWithTag(v30, 0);
  }
}
