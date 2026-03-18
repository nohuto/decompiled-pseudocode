/*
 * XREFs of MiGetUltraMapping @ 0x14013F7E4
 * Callers:
 *     MiMapLargePagesToZero @ 0x14008AE60 (MiMapLargePagesToZero.c)
 *     MiDeleteZeroThreadContext @ 0x14013F1EC (MiDeleteZeroThreadContext.c)
 *     MiInitializeNewUltraHugeContext @ 0x14013F65C (MiInitializeNewUltraHugeContext.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KeFlushTb @ 0x14001DDEC (KeFlushTb.c)
 *     MiMakeValidKernelPte @ 0x140034D10 (MiMakeValidKernelPte.c)
 *     RtlFindSetBitsAndClearEx @ 0x14013F9C0 (RtlFindSetBitsAndClearEx.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     MiPteInShadowRange @ 0x1401EF3B8 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF658 (MiWritePteShadow.c)
 */

unsigned __int64 __fastcall MiGetUltraMapping(_QWORD *a1, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v3; // rsi
  __int64 v6; // rax
  _QWORD *v8; // rcx
  __int64 v9; // rcx
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 SetBitsAndClear; // rax
  __int64 v13; // r14
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx
  unsigned __int64 *v16; // r8
  __int64 v17; // rdx
  __int64 v18; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1[10];
  v3 = a1[18];
  if ( v2 != -1LL )
  {
    if ( a2 == 1 )
    {
      v6 = a1[11];
      if ( v6 != 512 )
        return *(_QWORD *)(v3 + 40) + (((v2 << 9) + v6) << 21);
      goto LABEL_6;
    }
    if ( a2 == -1 )
    {
LABEL_6:
      v8 = (_QWORD *)((((*(_QWORD *)(v3 + 40) + (v2 << 30)) >> 27) & 0x1FFFF8) - 0x90482600000LL);
      *v8 = 0LL;
      if ( (unsigned int)MiPteInShadowRange(v8, 0xFFFFF6FB7DA00000uLL) )
        MiWritePteShadow(v9, 0LL);
    }
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 64), &LockHandle);
  if ( v2 != -1LL )
    _bittestandset64(*(signed __int64 **)(v3 + 24), v2);
  if ( a2 == -1 )
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return 0LL;
  }
  else
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx(v3, 1LL, *(_QWORD *)(v3 + 32));
      v13 = SetBitsAndClear;
      if ( SetBitsAndClear != -1 )
        break;
      KeFlushTb(0, 1u);
      v10 = 0LL;
      v11 = *(_QWORD *)v3 >> 6;
      if ( v11 )
      {
        do
        {
          *(_QWORD *)(*(_QWORD *)(v3 + 8) + 8 * v10) |= *(_QWORD *)(*(_QWORD *)(v3 + 24) + 8 * v10);
          ++v10;
        }
        while ( v10 < v11 );
      }
      *(_QWORD *)(v3 + 32) = 0LL;
      memset(*(void **)(v3 + 24), 0, 4 * (((*(_QWORD *)(v3 + 16) & 0x1F) != 0) + (*(_QWORD *)(v3 + 16) >> 5)));
    }
    *(_QWORD *)(v3 + 32) = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v14 = *(_QWORD *)(v3 + 40) + (v13 << 30);
    if ( a2 )
    {
      v15 = MiMakeValidKernelPte(a1[12], 4, ((v14 >> 27) & 0x1FFFF8) - 0x90482600000LL) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
      *v16 = v15;
      if ( (unsigned int)MiPteInShadowRange(v16, v15) )
        MiWritePteShadow(v18, v17);
      a1[11] = 0LL;
      a1[10] = v13;
    }
    return v14;
  }
}
