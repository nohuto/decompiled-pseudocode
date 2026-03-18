/*
 * XREFs of MiRemoveSpecialPoolRange @ 0x1401DAB40
 * Callers:
 *     MmFreeSpecialPool @ 0x1401DB2D8 (MmFreeSpecialPool.c)
 * Callees:
 *     MiReturnSystemVa @ 0x140015490 (MiReturnSystemVa.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x1400B2424 (InsertTailListPte.c)
 *     RemoveListEntryPte @ 0x1400EA358 (RemoveListEntryPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiVaRegionSessionSpecialPool @ 0x1401DBCE8 (MiVaRegionSessionSpecialPool.c)
 */

void __fastcall MiRemoveSpecialPoolRange(PKSPIN_LOCK SpinLock, char a2, __int64 *a3)
{
  PKSPIN_LOCK v5; // r14
  int v6; // r12d
  unsigned __int64 v7; // rbx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  __int64 *v10; // rsi
  unsigned __int64 v11; // r13
  __int64 v12; // [rsp+20h] [rbp-E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-D8h] BYREF
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v15; // [rsp+44h] [rbp-BCh]
  __int64 v16; // [rsp+48h] [rbp-B8h]
  __int64 v17; // [rsp+50h] [rbp-B0h]
  __int64 v18; // [rsp+58h] [rbp-A8h]

  if ( (a2 & 1) != 0 )
  {
    v5 = SpinLock + 1;
    v6 = 7;
  }
  else
  {
    v5 = SpinLock + 4;
    v6 = 13;
  }
  v12 = MI_READ_PTE_LOCK_FREE((__int64 *)((((unsigned __int64)a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL));
  v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE((__int64)&v12) - 0x58000000000LL;
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  v9 = (unsigned int)*(_QWORD *)(v7 + 16) | (unsigned __int64)((HIDWORD(*(_QWORD *)(v7 + 16)) - 1LL) << 32);
  *(_QWORD *)(v7 + 16) = v9;
  if ( (v9 & 0xFFFFFFFF00000000uLL) != 0 )
  {
    InsertTailListPte((__int64 *)v5, a3);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v10 = (__int64 *)((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL);
    v11 = ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( ((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) < v11 )
    {
      do
      {
        if ( v10 != a3 )
          RemoveListEntryPte((unsigned __int64)v5, v10);
        v10 += 2;
      }
      while ( (unsigned __int64)v10 < v11 );
    }
    if ( SpinLock != &qword_1402FF700 )
      MiVaRegionSessionSpecialPool(v8, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( SpinLock == &qword_1402FF700 )
      _InterlockedDecrement(&dword_1402FE260);
    v16 = 20LL;
    v15 = 0;
    v17 = 0LL;
    v18 = 0LL;
    if ( SpinLock != &qword_1402FF700 )
      v6 = 1;
    v14 = &qword_1402FF700 != SpinLock ? 2 : 0;
    MiReturnSystemVa(
      (__int64)(((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16,
      ((__int64)(((unsigned __int64)a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16) + 0x200000,
      v6,
      (__int64)&v14);
  }
}
