/*
 * XREFs of MmFreeLoaderBlock @ 0x140791ED4
 * Callers:
 *     KeInitSystem @ 0x140791AC4 (KeInitSystem.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiChargeWsles @ 0x1400DF9C0 (MiChargeWsles.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakeTransitionPte @ 0x1401F25C8 (MiMakeTransitionPte.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     MmFreeBootRegistry @ 0x14054E4B0 (MmFreeBootRegistry.c)
 */

void MmFreeLoaderBlock()
{
  __int64 *v0; // r15
  unsigned int v1; // r14d
  __int64 v2; // rdi
  __int64 *v3; // rdx
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  unsigned int v7; // eax
  signed __int64 v8; // r12
  char *v9; // rsi
  LONG *SharedVm; // rdi
  KIRQL v11; // al
  _KPROCESS *v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rdi
  __int64 *v16; // r12
  unsigned __int64 v17; // r14
  _QWORD *v18; // rsi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  __int64 *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // rcx
  unsigned __int64 v24; // r10
  __int64 v25; // rdx
  __int64 *v26; // r14
  unsigned __int64 v27; // r12
  _BYTE *v28; // r13
  unsigned __int8 v29; // al
  unsigned __int64 v30; // rsi
  _QWORD *v31; // rax
  _QWORD *v32; // rsi
  __int64 *v33; // rcx
  _QWORD *v34; // rbx
  int v35; // edx
  unsigned int v36; // eax
  __int64 v37; // r8
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  unsigned __int64 v40; // rdi
  ULONG_PTR v41; // rcx
  unsigned __int64 v42; // rdi
  KIRQL v43; // [rsp+28h] [rbp-E0h]
  unsigned int v44; // [rsp+2Ch] [rbp-DCh]
  __int64 TransitionPte; // [rsp+30h] [rbp-D8h] BYREF
  _QWORD *PoolWithTag; // [rsp+38h] [rbp-D0h]
  char *AnyMultiplexedVm; // [rsp+40h] [rbp-C8h]
  __int64 DemandZeroPte; // [rsp+48h] [rbp-C0h]
  int v49; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v50; // [rsp+5Ch] [rbp-ACh]
  __int64 v51; // [rsp+60h] [rbp-A8h]
  __int64 v52; // [rsp+68h] [rbp-A0h]
  __int64 v53; // [rsp+70h] [rbp-98h]

  v0 = (__int64 *)(KeLoaderBlock_0 + 32);
  v1 = 0;
  v2 = 0LL;
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
    v44 = v1;
    if ( v2 )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v2 + 8, 0x6C4D6D4Du);
      v8 = (signed __int64)PoolWithTag;
      if ( PoolWithTag )
      {
        AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
        v9 = AnyMultiplexedVm;
        if ( (unsigned int)MiChargeWsles((ULONG_PTR)AnyMultiplexedVm, v2, 0) )
        {
          *PoolWithTag = v2;
          TransitionPte = v8 + 8;
          v51 = 20LL;
          v49 = 0;
          v50 = 0;
          v52 = 0LL;
          v53 = 0LL;
          SharedVm = MiGetSharedVm((__int64)v9);
          v11 = ExAcquireSpinLockExclusive(SharedVm);
          SharedVm[1] = 0;
          v15 = (__int64 *)*v0;
          v43 = v11;
          if ( (__int64 *)*v0 != v0 )
          {
            v16 = (__int64 *)TransitionPte;
            do
            {
              if ( *((_DWORD *)v15 + 4) == 19 && v15[4] )
              {
                v17 = 0LL;
                v18 = (_QWORD *)(48 * v15[3] - 0x57FFFFFFFF8LL);
                do
                {
                  v19 = *v18 | 0x8000000000000000uLL;
                  *v16++ = (__int64)(v19 << 25) >> 16;
                  TransitionPte = MI_READ_PTE_LOCK_FREE(v19);
                  v20 = MI_GET_PAGE_FRAME_FROM_PTE((__int64)&TransitionPte);
                  TransitionPte = MiMakeTransitionPte(v20, 4);
                  *v21 = TransitionPte;
                  if ( MiPteInShadowRange((unsigned __int64)v21) )
                    MiWritePteShadow(v23, v22);
                  MiInsertTbFlushEntry((__int64)&v49, v24, 1LL, 0);
                  ++v17;
                  v18 += 6;
                }
                while ( v17 < v15[4] );
              }
              v15 = (__int64 *)*v15;
            }
            while ( v15 != v0 );
            v4 = DemandZeroPte;
            v8 = (signed __int64)PoolWithTag;
          }
          MiFlushTbList((__int64)&v49, v12, v13, v14);
          v26 = (__int64 *)*v0;
          if ( (__int64 *)*v0 != v0 )
          {
            do
            {
              if ( *((_DWORD *)v26 + 4) == 19 && v26[4] )
              {
                v27 = 0LL;
                v28 = (_BYTE *)(48 * v26[3] - 0x57FFFFFFFDELL);
                do
                {
                  v29 = MiLockPageInline((__int64)(v28 - 34));
                  *(_QWORD *)(v28 - 18) = v4;
                  *v28 |= 0x10u;
                  v30 = v29;
                  MiDecrementShareCount((__int64)(v28 - 34));
                  _InterlockedAnd64((volatile signed __int64 *)(v28 - 10), 0x7FFFFFFFFFFFFFFFuLL);
                  __writecr8(v30);
                  ++v27;
                  v28 += 48;
                }
                while ( v27 < v26[4] );
              }
              v26 = (__int64 *)*v26;
            }
            while ( v26 != v0 );
            v8 = (signed __int64)PoolWithTag;
          }
          LOBYTE(v25) = v43;
          MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v25);
          if ( _InterlockedCompareExchange64(&qword_1403277D0, v8, 0LL) )
          {
            qword_1403277D0 = v8;
            MmFreeBootRegistry();
          }
          v1 = v44;
        }
        else
        {
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
    }
  }
  v31 = ExAllocatePoolWithTag(NonPagedPoolNx, 16LL * v1, 0x6C4D6D4Du);
  v32 = v31;
  if ( v31 )
  {
    v33 = (__int64 *)*v0;
    v34 = v31;
    if ( (__int64 *)*v0 != v0 )
    {
      v35 = 2113664;
      do
      {
        v36 = *((_DWORD *)v33 + 4);
        if ( v36 <= 0x15 && _bittest(&v35, v36) )
        {
          if ( v33[4] )
          {
            *v34 = v33[3];
            v34[1] = v33[4];
            v34 += 2;
          }
        }
        v33 = (__int64 *)*v33;
      }
      while ( v33 != v0 );
      if ( v34 != v32 )
      {
LABEL_49:
        while ( 1 )
        {
          v34 -= 2;
          if ( v34 < v32 )
            break;
          v37 = 48LL * *v34;
          v38 = v34[1];
          v39 = (_QWORD *)(v37 - 0x57FFFFFFFF8LL);
          v40 = *(_QWORD *)(v37 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
          while ( --v38 )
          {
            v39 += 6;
            v40 += 8LL;
            if ( (*v39 | 0x8000000000000000uLL) != v40 )
            {
              v41 = *(_QWORD *)(v37 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL;
              v42 = (__int64)(v40 - v41) >> 3;
              MiDeleteBootRange(v41, v42);
              v34[1] -= v42;
              *v34 += v42;
              v34 += 2;
              if ( v42 )
                goto LABEL_49;
              break;
            }
          }
          MiDeleteBootRange(*(_QWORD *)(48LL * *v34 - 0x57FFFFFFFF8LL) | 0x8000000000000000uLL, v34[1]);
        }
      }
    }
    ExFreePoolWithTag(v32, 0);
  }
}
