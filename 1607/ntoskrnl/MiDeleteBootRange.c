/*
 * XREFs of MiDeleteBootRange @ 0x140139274
 * Callers:
 *     MmFreeBootRegistry @ 0x14054E4B0 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 * Callees:
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     MiReleaseResourceLite @ 0x140082D74 (MiReleaseResourceLite.c)
 *     MiAcquireResourceSharedLite @ 0x1400883F0 (MiAcquireResourceSharedLite.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiDeleteBootRange(ULONG_PTR a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  ULONG_PTR v3; // r13
  unsigned __int64 v4; // rdi
  unsigned __int64 v5; // r15
  char *AnyMultiplexedVm; // r12
  LONG *SharedVm; // rbx
  KIRQL v8; // al
  __int64 v9; // rdx
  unsigned __int64 v10; // r14
  __int64 v11; // rbx
  LONG *v12; // rbx
  KIRQL v13; // al
  PVOID *v14; // rdx
  KIRQL v15; // r13
  __int64 v16; // rbx
  __int64 v17; // r10
  __int64 v18; // rbx
  unsigned __int64 v19; // r9
  unsigned __int64 i; // r11
  unsigned __int64 v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rbx
  LONG *v24; // rbx
  KIRQL v25; // al
  unsigned __int64 v26; // rsi
  unsigned __int64 result; // rax
  KIRQL v28; // [rsp+30h] [rbp-D0h]
  struct _KTHREAD *CurrentThread; // [rsp+38h] [rbp-C8h]
  __int64 v32; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h]
  __int64 v34; // [rsp+58h] [rbp-A8h]
  __int64 v35; // [rsp+60h] [rbp-A0h]
  int v36; // [rsp+70h] [rbp-90h] BYREF
  __int16 v37; // [rsp+74h] [rbp-8Ch]
  __int64 v38; // [rsp+78h] [rbp-88h]
  __int64 v39; // [rsp+80h] [rbp-80h]
  __int64 v40; // [rsp+88h] [rbp-78h]

  v32 = 0LL;
  v2 = a2;
  v33 = 0LL;
  v3 = a1;
  v34 = 0LL;
  v35 = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((a1 - 8 + 8 * a2) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  AnyMultiplexedVm = MiGetAnyMultiplexedVm(1);
  SharedVm = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v8 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v10 = v4;
  v28 = v8;
  if ( v4 <= v5 )
  {
    do
    {
      v11 = MI_GET_PFN_FROM_PTE(v10);
      MiLockPageAtDpcInline(v11);
      v9 = *(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      *(_QWORD *)(v11 + 24) = v9;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 += 8LL;
    }
    while ( v10 <= v5 );
    v2 = a2;
    v3 = a1;
    v8 = v28;
  }
  LOBYTE(v9) = v8;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, v9);
  MiDeleteSystemPagableVm((__int64)AnyMultiplexedVm, 0LL, v3, v2, 1, &v32);
  CurrentThread = KeGetCurrentThread();
  MiAcquireResourceSharedLite((__int64)CurrentThread);
  v12 = MiGetSharedVm((__int64)AnyMultiplexedVm);
  v13 = ExAcquireSpinLockExclusive(v12);
  v12[1] = 0;
  v15 = v13;
  if ( v4 <= v5 )
  {
    do
    {
      v16 = MI_GET_PFN_FROM_PTE(v4);
      MiLockPageAtDpcInline(v16);
      v14 = (PVOID *)(*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v16 + 24) = v14;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v17 = 0LL;
        v18 = (__int64)(v4 << 25) >> 16;
        v19 = v18;
        for ( i = v18 + 4096; v19 < i; v19 += 8LL )
        {
          v21 = MI_READ_PTE_LOCK_FREE(v19);
          if ( (v21 & 0xC01) != 0 )
            break;
          v22 = (v21 >> 5) & 0x1F;
          if ( v22 )
          {
            if ( v22 != 24LL )
              break;
          }
        }
        if ( v19 == i )
        {
          v14 = (PVOID *)PsLoadedModuleList;
          v23 = ((v18 << 25) - v17) >> 16;
          while ( v4 < (((unsigned __int64)v14[6] >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
               || v4 > ((((unsigned __int64)v14[6] + *((unsigned int *)v14 + 16) - 1) >> 18) & 0x3FFFFFF8)
                     - 0x904C0000000LL )
          {
            v14 = (PVOID *)*v14;
            if ( v14 == &PsLoadedModuleList )
              goto LABEL_18;
          }
          v14 = 0LL;
LABEL_18:
          if ( v14 )
          {
            LOBYTE(v14) = v15;
            MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, (__int64)v14);
            v38 = 20LL;
            v36 = 0;
            v37 = 0;
            v39 = 0LL;
            v40 = 0LL;
            MiInsertTbFlushEntry((__int64)&v36, v23, 512LL, 0);
            MiReturnSystemVa(v23, v23 + 0x200000, 3, (__int64)&v36);
            v24 = MiGetSharedVm((__int64)AnyMultiplexedVm);
            v25 = ExAcquireSpinLockExclusive(v24);
            v24[1] = 0;
            v15 = v25;
          }
        }
      }
      v4 += 8LL;
    }
    while ( v4 <= v5 );
    v2 = a2;
  }
  LOBYTE(v14) = v15;
  MiUnlockWorkingSetExclusive((__int64)AnyMultiplexedVm, (__int64)v14);
  MiReleaseResourceLite((__int64)CurrentThread);
  MiReturnResidentAvailable(v2);
  v26 = v2 - v33;
  result = MiReturnCommit((__int64)MiSystemPartition, v26);
  qword_140327920 -= v26;
  return result;
}
