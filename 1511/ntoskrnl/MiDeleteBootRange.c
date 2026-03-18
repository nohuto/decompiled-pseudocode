/*
 * XREFs of MiDeleteBootRange @ 0x1401332F0
 * Callers:
 *     MmFreeBootRegistry @ 0x140521B08 (MmFreeBootRegistry.c)
 *     MmFreeLoaderBlock @ 0x14074E52C (MmFreeLoaderBlock.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     MiReleaseResourceLite @ 0x14001A338 (MiReleaseResourceLite.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiAcquireResourceSharedLite @ 0x1400EF804 (MiAcquireResourceSharedLite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

unsigned __int64 __fastcall MiDeleteBootRange(ULONG_PTR a1, unsigned __int64 a2)
{
  ULONG_PTR v2; // r15
  unsigned __int64 v3; // rsi
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // r8
  KIRQL v8; // r13
  unsigned __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID *v13; // rdx
  __int64 v14; // r8
  KIRQL v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  unsigned __int64 i; // r15
  unsigned __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rbx
  unsigned __int64 v25; // rsi
  unsigned __int64 result; // rax
  struct _KTHREAD *CurrentThread; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  int v34; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v35; // [rsp+64h] [rbp-9Ch]
  __int64 v36; // [rsp+68h] [rbp-98h]
  __int64 v37; // [rsp+70h] [rbp-90h]
  __int64 v38; // [rsp+78h] [rbp-88h]

  v30 = 0LL;
  v2 = a1;
  v3 = a2;
  v31 = 0LL;
  v32 = 0LL;
  v33 = 0LL;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((a1 + 8 * (a2 - 1)) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v8 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  v9 = v4;
  if ( v4 <= v5 )
  {
    do
    {
      v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(v9) - 0x58000000000LL;
      MiLockPageAtDpcInline(v10, v11, v12);
      *(_QWORD *)(v10 + 24) ^= (*(_QWORD *)(v10 + 24) ^ (*(_QWORD *)(v10 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v9 += 8LL;
    }
    while ( v9 <= v5 );
    v3 = a2;
    v2 = a1;
  }
  LOBYTE(v6) = v8;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, v6, v7);
  MiDeleteSystemPagableVm(&dword_1402FFA80, 0LL, v2, v3, 1, &v30);
  CurrentThread = KeGetCurrentThread();
  MiAcquireResourceSharedLite((__int64)CurrentThread);
  v15 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
  if ( v4 <= v5 )
  {
    do
    {
      v16 = MI_GET_PFN_FROM_PTE(v4);
      MiLockPageAtDpcInline(v16, v17, v18);
      v13 = (PVOID *)(*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) ^ (*(_QWORD *)(v16 + 24) - 1LL)) & 0x3FFFFFFFFFFFFFFFLL);
      *(_QWORD *)(v16 + 24) = v13;
      _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( (*(_QWORD *)(v16 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
      {
        v19 = (__int64)(v4 << 25) >> 16;
        v20 = v19;
        for ( i = v19 + 4096; v20 < i; v20 += 8LL )
        {
          v22 = MI_READ_PTE_LOCK_FREE(v20);
          if ( (v22 & 0xC01) != 0 )
            break;
          v23 = (v22 >> 5) & 0x1F;
          if ( v23 )
          {
            if ( v23 != 24LL )
              break;
          }
        }
        if ( v20 == i )
        {
          v13 = (PVOID *)PsLoadedModuleList;
          v14 = 1073741816LL;
          v24 = v19 << 25 >> 16;
          while ( v4 < (((unsigned __int64)v13[6] >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
               || v4 > ((((unsigned __int64)v13[6] + *((unsigned int *)v13 + 16) - 1) >> 18) & 0x3FFFFFF8)
                     - 0x904C0000000LL )
          {
            v13 = (PVOID *)*v13;
            if ( v13 == &PsLoadedModuleList )
              goto LABEL_16;
          }
          v13 = 0LL;
LABEL_16:
          if ( v13 )
          {
            LOBYTE(v13) = v15;
            MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, (__int64)v13, 1073741816LL);
            v36 = 20LL;
            v34 = 0;
            v35 = 0;
            v37 = 0LL;
            v38 = 0LL;
            MiInsertTbFlushEntry((__int64)&v34, v24, 512LL, 0);
            MiReturnSystemVa(v24, v24 + 0x200000, 3, (__int64)&v34);
            v15 = ExAcquireSpinLockExclusive(&dword_1402FFA80);
          }
        }
      }
      v4 += 8LL;
    }
    while ( v4 <= v5 );
    v3 = a2;
  }
  LOBYTE(v13) = v15;
  MiUnlockWorkingSetExclusive((__int64)&dword_1402FFA80, (__int64)v13, v14);
  MiReleaseResourceLite((__int64)CurrentThread);
  MiReturnResidentAvailable(v3);
  _InterlockedExchangeAdd64(&qword_1402FF570, v3);
  v25 = v3 - v31;
  result = MiReturnCommit((__int64)MiSystemPartition, v25);
  qword_1402FF818 -= v25;
  return result;
}
