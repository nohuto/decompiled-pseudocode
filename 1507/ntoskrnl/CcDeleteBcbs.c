/*
 * XREFs of CcDeleteBcbs @ 0x140139D58
 * Callers:
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     CcDeallocateBcb @ 0x1400F29AC (CcDeallocateBcb.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400F2B04 (CcAdjustVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1)
{
  _QWORD *v1; // r14
  _QWORD *v3; // rsi
  _QWORD *v4; // rbx
  _QWORD *v5; // rax
  _QWORD *v6; // rcx
  __int64 v7; // rdx
  struct _KEVENT *v8; // rcx
  KIRQL v9; // r9
  unsigned int v10; // ecx

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
          KeBugCheckEx(0x34u, 0xC55uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
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
        {
          v10 = *((_DWORD *)v4 + 1) >> 12;
          CcGlobalDirtyPageStatistics -= v10;
          if ( v10 == -1 )
            KeBugCheckEx(0x34u, 0x1064uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
          *(_DWORD *)(a1 + 112) -= v10;
          *(_QWORD *)(*(_QWORD *)(a1 + 504) + 32LL) -= v10;
          if ( (*(_DWORD *)(a1 + 152) & 0x1000000) != 0 )
            *(_QWORD *)(*(_QWORD *)(a1 + 240) + 24LL) -= v10;
        }
        KeReleaseQueuedSpinLock(5uLL, v9);
        CcDeallocateBcb((char *)v4);
      }
    }
    while ( v3 != v1 );
  }
}
