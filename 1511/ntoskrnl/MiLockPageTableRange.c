/*
 * XREFs of MiLockPageTableRange @ 0x140114F64
 * Callers:
 *     MmStoreAllocateVirtualMemory @ 0x1404F3C18 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiLockPageTablePage @ 0x1400A81C0 (MiLockPageTablePage.c)
 *     MiUnlockPageTableRange @ 0x14011573C (MiUnlockPageTableRange.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 */

__int64 __fastcall MiLockPageTableRange(ULONG_PTR a1, unsigned __int64 a2)
{
  ULONG_PTR v3; // rbp
  _KPROCESS *Process; // r12
  ULONG_PTR v5; // rbx
  unsigned __int64 v6; // rsi
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  KIRQL v10; // r15
  int v11; // edx
  __int64 *v12; // rcx
  unsigned int v13; // eax
  unsigned int v14; // edi
  __int64 v15; // rax
  _QWORD v17[3]; // [rsp+30h] [rbp-58h] BYREF
  __int64 v18; // [rsp+48h] [rbp-40h] BYREF

  v3 = 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  v5 = a1;
  v6 = ((a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v7 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
  if ( v6 > v7 )
  {
LABEL_10:
    v3 = 0LL;
    v14 = 0;
    goto LABEL_11;
  }
  while ( 1 )
  {
    v11 = 3;
    v18 = ((v5 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = &v18;
    do
    {
      --v12;
      *v12 = (((unsigned __int64)v12[1] >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v11;
    }
    while ( v11 );
    v13 = MiResolvePageTablePage(0LL, v5, v17, 0LL, v10, 0);
    v14 = v13;
    if ( v13 != -1073741802 )
    {
      if ( v13 != -1073740748 )
        goto LABEL_11;
      goto LABEL_9;
    }
    v15 = MI_GET_PAGE_FRAME_FROM_PTE(v17[2]);
    if ( !(unsigned int)MiLockPageTablePage(48 * v15 - 0x58000000000LL, 0LL) )
      break;
    v3 = v5;
    v6 += 8LL;
    v5 = (__int64)(v6 << 25) >> 16 << 25 >> 16;
LABEL_9:
    v9 = 0x7FFFFFFFF8LL;
    if ( v6 > v7 )
      goto LABEL_10;
  }
  v14 = -1073741670;
LABEL_11:
  LOBYTE(v8) = v10;
  MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v8, v9);
  if ( v3 )
    MiUnlockPageTableRange(a1, v3);
  return v14;
}
