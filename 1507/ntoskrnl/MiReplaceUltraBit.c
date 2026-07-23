/*
 * XREFs of MiReplaceUltraBit @ 0x1400FC6D4
 * Callers:
 *     MiDeleteZeroThreadContext @ 0x1400FC244 (MiDeleteZeroThreadContext.c)
 *     MiGetZeroingVa @ 0x1400FC4D0 (MiGetZeroingVa.c)
 * Callees:
 *     KeFlushTb @ 0x140042090 (KeFlushTb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     RtlFindSetBitsAndClearEx @ 0x1400FC974 (RtlFindSetBitsAndClearEx.c)
 *     memset @ 0x140195A80 (memset.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 */

__int64 __fastcall MiReplaceUltraBit(__int64 *a1, int a2)
{
  unsigned __int64 v2; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // rcx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  ULONG64 SetBitsAndClear; // rax
  ULONG64 v10; // rdi
  __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  unsigned __int64 v13; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = a1[1];
  v4 = *a1;
  if ( v2 != -1LL )
  {
    v5 = (_QWORD *)((((*(_QWORD *)(v4 + 48) + (v2 << 30)) >> 27) & 0x1FFFF8) - 0x90482600000LL);
    *v5 = 0LL;
    if ( (unsigned __int64)(v5 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v5, 0LL);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 40), &LockHandle);
  if ( v2 != -1LL )
    _bittestandset64(*(signed __int64 **)(v4 + 24), v2);
  if ( a2 )
  {
    while ( 1 )
    {
      SetBitsAndClear = RtlFindSetBitsAndClearEx((PRTL_BITMAP_EX)v4, 1uLL, *(_QWORD *)(v4 + 32));
      v10 = SetBitsAndClear;
      if ( SetBitsAndClear != -1LL )
        break;
      KeFlushTb(0, 1);
      v7 = 0LL;
      v8 = *(_QWORD *)v4 >> 6;
      if ( v8 )
      {
        do
        {
          *(_QWORD *)(*(_QWORD *)(v4 + 8) + 8 * v7) |= *(_QWORD *)(*(_QWORD *)(v4 + 24) + 8 * v7);
          ++v7;
        }
        while ( v7 < v8 );
      }
      *(_QWORD *)(v4 + 32) = 0LL;
      memset(*(void **)(v4 + 24), 0, 4 * (((*(_QWORD *)(v4 + 16) & 0x1F) != 0) + (*(_QWORD *)(v4 + 16) >> 5)));
    }
    *(_QWORD *)(v4 + 32) = SetBitsAndClear + 1;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL((((*(_QWORD *)(v4 + 48) + (v10 << 30)) >> 27) & 0x1FFFF8) - 0x90482600000LL) )
      v11 |= 0x100uLL;
    v13 = v11 & 0xFFFFFFFFFFFFFE3DuLL | 0x42;
    *v12 = v13;
    if ( (unsigned __int64)(v12 + 0x12090482600LL) <= 0x7F8 )
      MiWritePteShadow(v12, v13);
    return v10;
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    return -1LL;
  }
}
