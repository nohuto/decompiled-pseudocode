/*
 * XREFs of CcDeleteBcbs @ 0x140107150
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 * Callees:
 *     CcDeallocateBcb @ 0x14000D7C8 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14000E4E0 (CcDeductDirtyPages.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400E0BB8 (CcAdjustVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1)
{
  _QWORD *v1; // rsi
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  struct _KEVENT *v8; // rcx
  KIRQL v9; // r14

  v1 = (_QWORD *)(a1 + 16);
  v3 = *(_QWORD **)(a1 + 16);
  if ( v3 != (_QWORD *)(a1 + 16) )
  {
    do
    {
      v4 = v3 - 2;
      v5 = v3;
      v3 = (_QWORD *)*v3;
      if ( *(_WORD *)v4 == 765 )
      {
        if ( *((_DWORD *)v4 + 16) )
          KeBugCheckEx(0x34u, 0xC69uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
        v6 = (_QWORD *)v5[1];
        if ( (_QWORD *)v3[1] != v5 || (_QWORD *)*v6 != v5 )
          __fastfail(3u);
        *v6 = v3;
        v3[1] = v6;
        if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
          CcAdjustVacbLevelLockCount(a1, v4[1], -1);
        if ( v4[23] )
        {
          v7 = *(_QWORD *)(v4[7] + 8LL);
          if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v4[7] + 16LL)) )
          {
            v8 = *(struct _KEVENT **)(v7 + 184);
            if ( v8 )
              KeSetEvent(v8, 0, 0);
          }
        }
        v9 = KeAcquireQueuedSpinLock(5uLL);
        if ( *((_BYTE *)v4 + 2) )
          CcDeductDirtyPages(a1, *((_DWORD *)v4 + 1) >> 12);
        KeReleaseQueuedSpinLock(5uLL, v9);
        CcDeallocateBcb((char *)v4);
      }
    }
    while ( v3 != v1 );
  }
}
