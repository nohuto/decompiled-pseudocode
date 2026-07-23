/*
 * XREFs of MiRemoveSpecialPoolRange @ 0x1401EB748
 * Callers:
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x140017A50 (InsertTailListPte.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RemoveListEntryPte @ 0x1400AA5E4 (RemoveListEntryPte.c)
 *     MiReturnSystemVa @ 0x1400BE760 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiVaRegionSessionSpecialPool @ 0x1401EC7D8 (MiVaRegionSessionSpecialPool.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPteTimeStamp @ 0x1401F24C8 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x1401F2840 (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiRemoveSpecialPoolRange(PKSPIN_LOCK SpinLock, char a2, unsigned __int64 a3)
{
  PKSPIN_LOCK v5; // r14
  int v6; // r12d
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 PteTimeStamp; // rax
  __int64 updated; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r13
  __int64 v17; // [rsp+20h] [rbp-E0h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+28h] [rbp-D8h] BYREF
  int v19; // [rsp+40h] [rbp-C0h] BYREF
  __int16 v20; // [rsp+44h] [rbp-BCh]
  __int64 v21; // [rsp+48h] [rbp-B8h]
  __int64 v22; // [rsp+50h] [rbp-B0h]
  __int64 v23; // [rsp+58h] [rbp-A8h]

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
  v17 = MI_READ_PTE_LOCK_FREE(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v7 = MI_GET_PFN_FROM_PTE(&v17);
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v7 + 16), v8, v9);
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v7 + 16), PteTimeStamp - 1);
  *(_QWORD *)(v7 + 16) = updated;
  if ( MiGetPteTimeStamp(updated, v12, v13) )
  {
    InsertTailListPte((__int64 *)v5);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v15 = a3 & 0xFFFFFFFFFFFFF000uLL;
    v16 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) < v16 )
    {
      do
      {
        if ( v15 != a3 )
          RemoveListEntryPte((__int64)v5, v15);
        v15 += 16LL;
      }
      while ( v15 < v16 );
    }
    if ( SpinLock != &qword_140327800 )
      MiVaRegionSessionSpecialPool(v14, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( SpinLock == &qword_140327800 )
      _InterlockedDecrement(&dword_140326560);
    v21 = 20LL;
    v19 = &qword_140327800 != SpinLock ? 2 : 0;
    v20 = 0;
    v22 = 0LL;
    v23 = 0LL;
    if ( SpinLock != &qword_140327800 )
      v6 = 1;
    MiReturnSystemVa(
      (__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16,
      ((__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16) + 0x200000,
      v6,
      (__int64)&v19);
  }
}
