/*
 * XREFs of MmRemoveExecuteGrants @ 0x1400B6730
 * Callers:
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiGetPfnProtection @ 0x1400B6940 (MiGetPfnProtection.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 MmRemoveExecuteGrants()
{
  unsigned __int16 *v0; // r14
  ULONG_PTR *SharedWorkingSetList; // r13
  __int64 *v2; // rsi
  LONG *SharedVm; // rbx
  KIRQL v4; // al
  __int64 v5; // rdx
  KIRQL v6; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // r15
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // rbx
  unsigned __int64 *v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // r11
  unsigned __int64 v19; // [rsp+28h] [rbp-A9h] BYREF
  int v20; // [rsp+38h] [rbp-99h] BYREF
  __int16 v21; // [rsp+3Ch] [rbp-95h]
  __int64 v22; // [rsp+40h] [rbp-91h]
  __int64 v23; // [rsp+48h] [rbp-89h]
  __int64 v24; // [rsp+50h] [rbp-81h]

  v22 = 20LL;
  v21 = 0;
  v23 = 0LL;
  v24 = 0LL;
  v20 = 1;
  v0 = &KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  SharedWorkingSetList = MiGetSharedWorkingSetList((__int64)v0);
  v2 = (__int64 *)(SharedWorkingSetList[10] + 2LL * *((unsigned int *)SharedWorkingSetList + 8));
  SharedVm = MiGetSharedVm((__int64)v0);
  v4 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v6 = v4;
  v7 = SharedWorkingSetList[2];
  if ( v7 >= 2 )
  {
    v8 = v7 - 1;
    do
    {
      v9 = *v2;
      if ( (*v2 & 1) != 0 )
      {
        v10 = (v9 & 0x800000000000LL) != 0 ? v9 | 0xFFFF000000000000uLL : v9 & 0xFFFFFFFFFFFFLL;
        v11 = v10 & 0xFFFFFFFFFFFFF000uLL;
        if ( v11 <= 0x7FFFFFFEFFFFLL )
        {
          v12 = (unsigned __int64 *)(((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v19 = MI_READ_PTE_LOCK_FREE(v12);
          if ( (v19 & v13) == 0 )
          {
            v14 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
            if ( (MiGetPfnProtection(48 * v14 - 0x58000000000LL, v2) & 2) == 0 )
            {
              v19 = ~qword_1403A9350 & (v15 | 0x8000000000000000uLL);
              *v12 = v19;
              if ( (unsigned int)MiPteInShadowRange(v12, v5) )
                MiWritePteShadow(v16, v17);
              MiInsertTbFlushEntry(&v20, v11, 1LL);
            }
          }
        }
      }
      v2 = (__int64 *)((char *)v2 + *((unsigned int *)SharedWorkingSetList + 8));
      --v8;
    }
    while ( v8 );
  }
  LOBYTE(v5) = v6;
  MiUnlockWorkingSetExclusive((__int64)v0, v5);
  return MiFlushTbList(&v20);
}
