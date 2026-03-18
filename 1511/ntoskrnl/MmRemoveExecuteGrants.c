/*
 * XREFs of MmRemoveExecuteGrants @ 0x1400BB4A8
 * Callers:
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiGetPfnProtection @ 0x1400BB6C0 (MiGetPfnProtection.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

void MmRemoveExecuteGrants()
{
  __int64 *v0; // r14
  volatile LONG *v1; // r12
  __int64 v2; // rdx
  __int64 v3; // r8
  KIRQL v4; // r13
  __int64 v5; // r15
  __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _KPROCESS *v13; // rdx
  KIRQL v14; // [rsp+28h] [rbp-E0h]
  __int64 v15; // [rsp+30h] [rbp-D8h] BYREF
  volatile LONG *v16; // [rsp+38h] [rbp-D0h]
  int v17; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v18; // [rsp+4Ch] [rbp-BCh]
  __int64 v19; // [rsp+50h] [rbp-B8h]
  __int64 v20; // [rsp+58h] [rbp-B0h]
  __int64 v21; // [rsp+60h] [rbp-A8h]

  v19 = 20LL;
  v18 = 0;
  v20 = 0LL;
  v21 = 0LL;
  v17 = 1;
  v0 = (__int64 *)(MEMORY[0xFFFFF580108041F0] + 2LL * MEMORY[0xFFFFF58010804040]);
  v1 = (volatile LONG *)&KeGetCurrentThread()->ApcState.Process[1].IdealNode[12];
  v16 = v1;
  v14 = ExAcquireSpinLockExclusive(v1);
  v4 = v14;
  if ( MEMORY[0xFFFFF58010804010] >= 2uLL )
  {
    v5 = MEMORY[0xFFFFF58010804010] - 1LL;
    do
    {
      v6 = *v0;
      if ( (*v0 & 1) != 0 )
      {
        v7 = (v6 & 0x800000000000LL) != 0 ? v6 | 0xFFFF000000000000uLL : v6 & 0xFFFFFFFFFFFFLL;
        v8 = v7 & 0xFFFFFFFFFFFFF000uLL;
        if ( v8 <= (unsigned __int64)MmHighestUserAddress )
        {
          v9 = (unsigned __int64 *)(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v15 = MI_READ_PTE_LOCK_FREE(v9);
          v10 = v15;
          if ( (v15 & 0x8000000000000000uLL) == 0 )
          {
            v11 = MI_GET_PAGE_FRAME_FROM_PTE(&v15);
            if ( (MiGetPfnProtection(48 * v11 - 0x58000000000LL, v0) & 2) == 0 )
            {
              v12 = ~qword_140381310 & (v10 | 0x8000000000000000uLL);
              v15 = v12;
              *v9 = v12;
              if ( (unsigned int)MiPteInShadowRange(v9) )
                MiWritePteShadow(v9, v12);
              MiInsertTbFlushEntry((__int64)&v17, v8, 1LL, 0);
            }
          }
        }
      }
      v0 = (__int64 *)((char *)v0 + MEMORY[0xFFFFF58010804040]);
      --v5;
    }
    while ( v5 );
    v1 = v16;
    v4 = v14;
  }
  LOBYTE(v2) = v4;
  MiUnlockWorkingSetExclusive((__int64)v1, v2, v3);
  MiFlushTbList((__int64)&v17, v13);
}
