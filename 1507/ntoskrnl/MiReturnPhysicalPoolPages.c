/*
 * XREFs of MiReturnPhysicalPoolPages @ 0x14010E300
 * Callers:
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     MiFindNonPagedPoolPages @ 0x140059840 (MiFindNonPagedPoolPages.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReturnNonPagedPoolCharges @ 0x14010E528 (MiReturnNonPagedPoolCharges.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiReturnPhysicalPoolPages(unsigned __int64 a1)
{
  int v1; // r8d
  unsigned __int64 v2; // rbx
  unsigned __int64 v3; // r12
  unsigned __int64 *v4; // r13
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // bp
  unsigned int v8; // r14d
  unsigned __int8 CurrentIrql; // si
  unsigned int v11; // ebp
  char v12; // al
  _SLIST_HEADER *v13; // rbx
  unsigned int v14; // [rsp+20h] [rbp-78h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v16[3]; // [rsp+40h] [rbp-58h] BYREF
  __int64 v17; // [rsp+58h] [rbp-40h]

  v1 = (unsigned __int8)HIBYTE(*(_QWORD *)(a1 + 40)) >> 2;
  v2 = a1;
  v17 = 0LL;
  v3 = 0LL;
  v14 = v1;
  v4 = 0LL;
  memset(v16, 0, sizeof(v16));
  v5 = 0LL;
  do
  {
    v6 = *(_QWORD *)v2;
    if ( (*(_BYTE *)(v2 + 35) & 0x10) != 0 )
    {
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v11 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v11 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v11);
        }
        while ( (*(_QWORD *)(v2 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) );
      }
      v12 = *(_BYTE *)(v2 + 34) & 0xFE;
      *(_QWORD *)(v2 + 8) = -8LL;
      *(_BYTE *)(v2 + 34) = v12 | 6;
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( !v4 )
        v4 = (unsigned __int64 *)v2;
      *(_QWORD *)v2 = v3;
      ++v5;
      v3 = v2;
    }
    else
    {
      v7 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v8 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v8 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v8);
        }
        while ( (*(_QWORD *)(v2 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v2 + 24), 0x3FuLL) );
      }
      *(_QWORD *)(v2 + 24) &= 0xC000000000000000uLL;
      *(_WORD *)(v2 + 32) = 0;
      MiInsertPageInFreeOrZeroedList((__int64)(v2 + 0x58000000000LL) / 48, 2);
      _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(v7);
      ++v16[0];
      ++v17;
    }
    v2 = v6;
  }
  while ( v6 );
  if ( v5 )
  {
    v13 = &qword_14034EB70[26 * v14];
    KeAcquireInStackQueuedSpinLock(&v13[19].Region, &LockHandle);
    *v4 = v13[20].Alignment;
    v13[19].Alignment += v5;
    v13[20].Alignment = v3;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  return MiReturnNonPagedPoolCharges(v16);
}
