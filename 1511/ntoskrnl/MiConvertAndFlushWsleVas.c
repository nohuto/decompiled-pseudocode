/*
 * XREFs of MiConvertAndFlushWsleVas @ 0x1400D05B4
 * Callers:
 *     MiCfgEliminateZeroPages @ 0x140493590 (MiCfgEliminateZeroPages.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiTryLocateWsle @ 0x140058C40 (MiTryLocateWsle.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiIsAddressValid @ 0x1400795B0 (MiIsAddressValid.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiConvertAndFlushWsleVas(volatile LONG *a1, unsigned int *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  KIRQL v8; // r12
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 Wsle; // rax
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0LL;
  v5 = 0LL;
  v8 = ExAcquireSpinLockExclusive(a1);
  if ( *a2 )
  {
    do
    {
      v9 = *(_QWORD *)&a2[2 * v5 + 2];
      if ( MiIsAddressValid(v9) )
      {
        v13 = MI_READ_PTE_LOCK_FREE(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v10 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v13) - 0x58000000000LL;
        Wsle = MiTryLocateWsle(v9, (__int64)a1, *(_QWORD *)v10);
        if ( Wsle != 0xFFFFFFFFFLL )
        {
          v6 = 0x8000000000000000uLL;
          if ( *(__int64 *)(v10 + 8) < 0 )
          {
            *(_QWORD *)&a2[2 * v4 + 2] = Wsle;
            v4 = (unsigned int)(v4 + 1);
          }
        }
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *a2 );
    if ( (_DWORD)v4 )
    {
      *a2 = v4;
      MiFreeWsleList((ULONG_PTR)a1, a2, 0);
    }
  }
  LOBYTE(v6) = v8;
  return MiUnlockWorkingSetExclusive((__int64)a1, v6, v7);
}
