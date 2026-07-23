/*
 * XREFs of MiCreateForkWsle @ 0x14010A5FC
 * Callers:
 *     MiCreateForkWsles @ 0x14010A528 (MiCreateForkWsles.c)
 *     MiCreateForkWsle @ 0x14010A5FC (MiCreateForkWsle.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiAllocateWsle @ 0x14003BC70 (MiAllocateWsle.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiCreateForkWsle @ 0x14010A5FC (MiCreateForkWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiCreateForkWsle(__int64 a1, KIRQL a2, unsigned __int64 *a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbx
  unsigned __int64 *v6; // rdi
  __int64 v8; // rax
  int v9; // edx
  char v10; // r10
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  LONG *SharedVm; // rbx
  KIRQL v14; // al
  __int64 v16; // [rsp+60h] [rbp+18h] BYREF
  unsigned __int64 v17; // [rsp+68h] [rbp+20h]

  if ( (unsigned __int64)a3 <= a4 )
  {
    v17 = a4;
    v5 = a4;
    v6 = a3;
    do
    {
      v8 = MI_READ_PTE_LOCK_FREE(v6);
      v16 = v8;
      if ( (v8 & 1) != 0 && (v8 & 0x80u) == 0LL )
      {
        if ( a5 > 1 )
        {
          LOBYTE(v9) = v10;
          MiCreateForkWsle(
            a1,
            v9,
            (__int64)((_QWORD)v6 << 25) >> 16,
            ((__int64)((_QWORD)v6 << 25) >> 16) + 4088,
            a5 - 1);
        }
        v11 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v16) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
        if ( !*v11 && !MiAllocateWsle(a1, v6, (__int64)v11, 0LL, ZeroPte, 0LL) )
        {
          do
          {
            LOBYTE(v12) = a2;
            MiUnlockWorkingSetExclusive(a1, v12);
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
            SharedVm = MiGetSharedVm(a1);
            v14 = ExAcquireSpinLockExclusive(SharedVm);
            SharedVm[1] = 0;
            a2 = v14;
          }
          while ( !MiAllocateWsle(a1, v6, (__int64)v11, 0LL, ZeroPte, 0LL) );
          v5 = v17;
        }
      }
      ++v6;
    }
    while ( (unsigned __int64)v6 <= v5 );
  }
}
