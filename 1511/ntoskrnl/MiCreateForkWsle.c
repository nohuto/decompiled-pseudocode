/*
 * XREFs of MiCreateForkWsle @ 0x14009A798
 * Callers:
 *     MiCreateForkWsles @ 0x14009A6E4 (MiCreateForkWsles.c)
 *     MiCreateForkWsle @ 0x14009A798 (MiCreateForkWsle.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiAllocateWsle @ 0x140055ED0 (MiAllocateWsle.c)
 *     MiCreateForkWsle @ 0x14009A798 (MiCreateForkWsle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiCreateForkWsle(ULONG_PTR a1, KIRQL a2, unsigned __int64 *a3, unsigned __int64 a4, unsigned int a5)
{
  unsigned __int64 v5; // rbp
  unsigned __int64 *v6; // rdi
  KIRQL v7; // si
  ULONG_PTR v8; // rbx
  __int64 v9; // rax
  int v10; // edx
  _QWORD *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  _KPROCESS *Process; // rbx
  KIRQL v16; // [rsp+68h] [rbp+10h]
  __int64 v17; // [rsp+70h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp+20h]

  if ( (unsigned __int64)a3 <= a4 )
  {
    v18 = a4;
    v16 = a2;
    v5 = a4;
    v6 = a3;
    v7 = a2;
    v8 = a1;
    do
    {
      v9 = MI_READ_PTE_LOCK_FREE(v6);
      v17 = v9;
      if ( (v9 & 1) != 0 )
      {
        if ( a5 > 1 )
        {
          LOBYTE(v10) = v7;
          MiCreateForkWsle(
            v8,
            v10,
            (__int64)((_QWORD)v6 << 25) >> 16,
            ((__int64)((_QWORD)v6 << 25) >> 16) + 4088,
            a5 - 1);
LABEL_7:
          v11 = (_QWORD *)(48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v17) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL);
          if ( !*v11 && !MiAllocateWsle(v8, v6, (__int64)v11, 0LL, ZeroPte, 0LL) )
          {
            do
            {
              LOBYTE(v12) = v16;
              Process = KeGetCurrentThread()->ApcState.Process;
              MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v12, v13);
              KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi30Milliseconds);
              v16 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
            }
            while ( !MiAllocateWsle(a1, v6, (__int64)v11, 0LL, ZeroPte, 0LL) );
            v5 = v18;
            v8 = a1;
          }
          v7 = v16;
          goto LABEL_12;
        }
        if ( (v9 & 0x80u) == 0LL )
          goto LABEL_7;
      }
LABEL_12:
      ++v6;
    }
    while ( (unsigned __int64)v6 <= v5 );
  }
}
