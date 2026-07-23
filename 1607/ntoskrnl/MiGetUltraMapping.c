/*
 * XREFs of MiGetUltraMapping @ 0x14013FD54
 * Callers:
 *     MiMapLargePagesToZero @ 0x14008A560 (MiMapLargePagesToZero.c)
 *     MiDeleteZeroThreadContext @ 0x14013F75C (MiDeleteZeroThreadContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x14013FBCC (MiInitializeNewUltraHugeContext.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x14001D96C (KeFlushTb.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     RtlFindSetBitsAndClearEx @ 0x14013FF30 (RtlFindSetBitsAndClearEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 */

unsigned __int64 *__fastcall MiGetUltraMapping(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rdi
  _RTL_BITMAP_EX *v3; // rsi
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v13; // r14
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1[10];
  v3 = (_RTL_BITMAP_EX *)a1[18];
  if ( v2 != -1LL )
  {
    if ( a2 == 1 )
    {
      v6 = a1[11];
      if ( v6 != 512 )
        return &v3[2].Buffer[0x40000 * ((v2 << 9) + v6)];
      goto LABEL_6;
    }
    if ( a2 == -1 )
    {
LABEL_6:
      v8 = (_QWORD *)((((unsigned __int64)&v3[2].Buffer[0x8000000 * v2] >> 27) & 0x1FFFF8) - 0x90482600000LL);
      *v8 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v8, 0xFFFFF6FB7DA00000uLL) )
        MiWritePteShadow(v9, 0LL);
    }
  }
  KeAcquireInStackQueuedSpinLock(&v3[4].SizeOfBitMap, &LockHandle);
  if ( v2 != -1LL )
    _bittestandset64((signed __int64 *)v3[1].Buffer, v2);
  if ( a2 == -1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(v3, 1uLL, v3[2].SizeOfBitMap);
      v13 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 1u);
      v10 = 0LL;
      v11 = v3->SizeOfBitMap >> 6;
      if ( v11 )
      {
        do
        {
          v3->Buffer[v10] |= v3[1].Buffer[v10];
          ++v10;
        }
        while ( v10 < v11 );
      }
      v3[2].SizeOfBitMap = 0LL;
      memset(v3[1].Buffer, 0, 4 * (((v3[1].SizeOfBitMap & 0x1F) != 0) + (v3[1].SizeOfBitMap >> 5)));
    }
    v3[2].SizeOfBitMap = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v14 = (unsigned __int64)&v3[2].Buffer[0x8000000 * v13];
    if ( a2 )
    {
      v15 = MiMakeValidKernelPte(a1[12], 4, ((v14 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
      *v16 = v15;
      if ( (unsigned int)MiPteInShadowRange(v16, v15) )
        MiWritePteShadow(v18, v17);
      a1[11] = 0LL;
      a1[10] = v13;
    }
    return (unsigned __int64 *)v14;
  }
}
