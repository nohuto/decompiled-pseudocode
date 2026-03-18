/*
 * XREFs of MiRemoveSpecialPoolRange @ 0x14021F4BC
 * Callers:
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     InsertTailListPte @ 0x14006BAEC (InsertTailListPte.c)
 *     RemoveListEntryPte @ 0x14006BBFC (RemoveListEntryPte.c)
 *     MiReturnSystemVa @ 0x140108060 (MiReturnSystemVa.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     MiVaRegionSessionSpecialPool @ 0x1402209BC (MiVaRegionSessionSpecialPool.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiGetPteTimeStamp @ 0x140225B28 (MiGetPteTimeStamp.c)
 *     MiUpdatePageFileHighInPte @ 0x140225FFC (MiUpdatePageFileHighInPte.c)
 */

void __fastcall MiRemoveSpecialPoolRange(PKSPIN_LOCK SpinLock, char a2, unsigned __int64 a3)
{
  int v3; // r12d
  PKSPIN_LOCK v6; // r15
  __int64 v7; // r10
  unsigned __int64 v8; // r9
  unsigned __int64 *v9; // rcx
  unsigned __int64 PteShadow; // rax
  __int64 v11; // rbx
  __int64 PteTimeStamp; // rax
  __int64 updated; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rsi
  unsigned __int64 v16; // r13
  int v17; // [rsp+20h] [rbp-E0h]
  unsigned __int64 v18; // [rsp+28h] [rbp-D8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-D0h] BYREF
  int v20; // [rsp+50h] [rbp-B0h] BYREF
  __int16 v21; // [rsp+54h] [rbp-ACh]
  __int64 v22; // [rsp+58h] [rbp-A8h]
  __int64 v23; // [rsp+60h] [rbp-A0h]
  __int64 v24; // [rsp+68h] [rbp-98h]

  v3 = 1;
  if ( (a2 & 1) != 0 )
  {
    v6 = SpinLock + 1;
    v17 = 7;
  }
  else
  {
    v6 = SpinLock + 4;
    v17 = 13;
  }
  v7 = 0x90482413000LL;
  v8 = 2040LL;
  v9 = (unsigned __int64 *)(((a3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  PteShadow = *v9;
  if ( (unsigned __int64)(v9 + 0x12090482600LL) <= 0x7F8 )
    PteShadow = MiReadPteShadow(v9, *v9);
  v18 = PteShadow;
  if ( (unsigned __int64)&v18 + v7 <= v8 )
    PteShadow = MiReadPteShadow(&v18, PteShadow);
  v11 = 48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
  PteTimeStamp = MiGetPteTimeStamp(*(_QWORD *)(v11 + 16));
  updated = MiUpdatePageFileHighInPte(*(_QWORD *)(v11 + 16), PteTimeStamp - 1);
  *(_QWORD *)(v11 + 16) = updated;
  if ( MiGetPteTimeStamp(updated) )
  {
    InsertTailListPte((__int64 *)v6, a3);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  else
  {
    v15 = (_QWORD *)(a3 & 0xFFFFFFFFFFFFF000uLL);
    v16 = (a3 & 0xFFFFFFFFFFFFF000uLL) + 4096;
    if ( (a3 & 0xFFFFFFFFFFFFF000uLL) < v16 )
    {
      do
      {
        if ( v15 != (_QWORD *)a3 )
          RemoveListEntryPte((unsigned __int64)v6, v15);
        v15 += 2;
      }
      while ( (unsigned __int64)v15 < v16 );
    }
    if ( SpinLock != &qword_14034FBC0 )
      MiVaRegionSessionSpecialPool(v14, 0LL);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( SpinLock == &qword_14034FBC0 )
      _InterlockedDecrement(&dword_14034E718);
    v22 = 20LL;
    v21 = 0;
    v23 = 0LL;
    if ( SpinLock == &qword_14034FBC0 )
      v3 = v17;
    v24 = 0LL;
    v20 = &qword_14034FBC0 != SpinLock ? 2 : 0;
    MiReturnSystemVa(
      (__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16,
      ((__int64)((a3 & 0xFFFFFFFFFFFFF000uLL) << 25) >> 16) + 0x200000,
      v3,
      (__int64)&v20);
  }
}
