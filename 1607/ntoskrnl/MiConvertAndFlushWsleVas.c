/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x14008FF58
 * Callers:
 *     MiCfgEliminateZeroPages @ 0x1404A2F40 (MiCfgEliminateZeroPages.c)
 * Callees:
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MiTryLocateWsle @ 0x140046710 (MiTryLocateWsle.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiConvertAndFlushWsleVas(__int64 a1, _DWORD *a2)
{
  __int64 v4; // rsi
  LONG *SharedVm; // rbx
  KIRQL v6; // al
  __int64 v7; // rdx
  KIRQL v8; // r12
  __int64 v9; // rbx
  ULONG_PTR v10; // r14
  __int64 v11; // r15
  unsigned __int64 Wsle; // rax
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v4 = 0LL;
  SharedVm = MiGetSharedVm(a1);
  v6 = ExAcquireSpinLockExclusive(SharedVm);
  SharedVm[1] = 0;
  v8 = v6;
  v9 = 0LL;
  if ( *a2 )
  {
    do
    {
      v10 = *(_QWORD *)&a2[2 * v9 + 2];
      if ( MiIsAddressValid(v10) )
      {
        v14 = MI_READ_PTE_LOCK_FREE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v11 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v14) - 0x58000000000LL;
        Wsle = MiTryLocateWsle(v10, a1, *(_QWORD *)v11);
        if ( Wsle != 0xFFFFFFFFFLL )
        {
          v7 = 0x8000000000000000uLL;
          if ( *(__int64 *)(v11 + 8) < 0 )
          {
            *(_QWORD *)&a2[2 * v4 + 2] = Wsle;
            v4 = (unsigned int)(v4 + 1);
          }
        }
      }
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *a2 );
    if ( (_DWORD)v4 )
    {
      *a2 = v4;
      MiFreeWsleList(a1, a2, 0LL);
    }
  }
  LOBYTE(v7) = v8;
  return MiUnlockWorkingSetExclusive(a1, v7);
}
