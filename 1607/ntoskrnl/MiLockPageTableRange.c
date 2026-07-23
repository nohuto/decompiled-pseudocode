/*
 * XREFs of MiLockPageTableRange @ 0x140123A7C
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x14053260C (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageTablePage @ 0x1400300B0 (MiLockPageTablePage.c)
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiUnlockPageTableRange @ 0x140125320 (MiUnlockPageTableRange.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockPageTableRange(ULONG_PTR a1, unsigned __int64 a2)
{
  _KPROCESS *Process; // r12
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // r14
  ULONG_PTR v6; // rsi
  ULONG_PTR v7; // rdi
  LONG *SharedVm; // rbx
  KIRQL v9; // al
  __int64 v10; // rdx
  unsigned __int8 v11; // r15
  int v12; // r8d
  __int64 *v13; // rdx
  unsigned int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rax
  __int64 *v18[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v19; // [rsp+48h] [rbp-40h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v4 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v5 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v6 = 0LL;
  v7 = a1;
  SharedVm = MiGetSharedVm((__int64)&Process[1].IdealNode[12]);
  v9 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v11 = v9;
  if ( v4 > v5 )
  {
LABEL_10:
    v6 = 0LL;
    v15 = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v12 = 3;
    v13 = &v19;
    v19 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      --v13;
      *v13 = (((unsigned __int64)v13[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v12;
    }
    while ( v12 );
    v14 = MiResolvePageTablePage(0LL, v7, v18, 0LL, v11, 0);
    v15 = v14;
    if ( v14 != -1073741802 )
    {
      if ( v14 != -1073740748 )
        goto LABEL_11;
      goto LABEL_9;
    }
    v16 = MI_GET_PAGE_FRAME_FROM_PTE(v18[2]);
    if ( !(unsigned int)MiLockPageTablePage(48 * v16 - 0x58000000000LL, 0) )
      break;
    v6 = v7;
    v4 += 8LL;
    v7 = (__int64)(v4 << 25) >> 16 << 25 >> 16;
LABEL_9:
    if ( v4 > v5 )
      goto LABEL_10;
  }
  v15 = -1073741670;
LABEL_11:
  LOBYTE(v10) = v11;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v10);
  if ( v6 )
    MiUnlockPageTableRange(a1, v6);
  return v15;
}
