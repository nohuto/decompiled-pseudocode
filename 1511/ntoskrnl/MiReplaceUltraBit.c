/*
 * XREFs of MiReplaceUltraBit @ 0x1400E4CDC
 * Callers:
 *     MiGetZeroingVa @ 0x1400E4BF0 (MiGetZeroingVa.c)
 *     MiDeleteZeroThreadContext @ 0x140131D78 (MiDeleteZeroThreadContext.c)
 * Callees:
 *     KeFlushTb @ 0x1400078BC (KeFlushTb.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlFindSetBitsAndClearEx @ 0x1400E4E74 (RtlFindSetBitsAndClearEx.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReplaceUltraBit(unsigned __int64 *a1, int a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v4; // rbx
  _QWORD *v6; // rdi
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // r9
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v11; // rsi
  unsigned __int64 *v12; // rdi
  __int64 v13; // r9
  unsigned __int64 v14; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = *a1;
  v4 = a1[4];
  if ( *a1 != -1LL )
  {
    v6 = (_QWORD *)((((*(_QWORD *)(v4 + 48) + (v2 << 30)) >> 27) & 0x1FFFF8) - 0x90482600000LL);
    *v6 = 0LL;
    if ( (unsigned int)MiPteInShadowRange(v6) )
      MiWritePteShadow(v6, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 40), &LockHandle);
  if ( v2 != -1LL )
    _bittestandset64(*(signed __int64 **)(v4 + 24), v2);
  if ( a2 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx((PRTL_BITMAP_EX)v4, 1uLL, *(_QWORD *)(v4 + 32));
      v11 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 1u);
      v8 = 0LL;
      v9 = *(_QWORD *)v4 >> 6;
      if ( v9 )
      {
        do
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * v8) |= *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v8);
          ++v8;
        }
        while ( v8 < v9 );
      }
      *(_QWORD *)(v4 + 32) = 0LL;
      memset(*(void **)(v4 + 24), 0, 4 * (((*(_QWORD *)(v4 + 16) & 0x1F) != 0) + (*(_QWORD *)(v4 + 16) >> 5)));
    }
    *(_QWORD *)(v4 + 32) = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v12 = (unsigned __int64 *)((((*(_QWORD *)(v4 + 48) + (v11 << 30)) >> 27) & 0x1FFFF8) - 0x90482600000LL);
    v14 = MiMakeValidKernelPte(a1[2], 4, (unsigned __int64)v12, v13) & 0xFFFFFFFFFFFFFEBDuLL | 0x42;
    *v12 = v14;
    if ( (unsigned int)MiPteInShadowRange(v12) )
      MiWritePteShadow(v12, v14);
    return v11;
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return -1LL;
  }
}
