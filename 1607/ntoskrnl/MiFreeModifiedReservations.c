/*
 * XREFs of MiFreeModifiedReservations @ 0x1401EE664
 * Callers:
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x1401EE9E8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 */

__int64 __fastcall MiFreeModifiedReservations(__int64 a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rbp
  __int64 v4; // r14
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // r15
  __int64 v7; // rdi
  unsigned __int8 v8; // r12
  unsigned __int64 v9; // rbx
  __int64 v10; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  result = *(unsigned __int16 *)(a1 + 204);
  if ( (result & 0x40) == 0 )
  {
    v3 = *(_QWORD *)(a1 + 256);
    v4 = 5 * (result & 0xF);
    v5 = a2 == 0 ? 0x10000 : 0;
    v6 = 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v3 + 8 * v4 + 2384);
      result = 0xFFFFFFFFFLL;
      if ( v10 == 0xFFFFFFFFFLL )
        break;
      v7 = 48 * v10 - 0x58000000000LL;
      v8 = MiLockPageInline(v7);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 7264), &LockHandle);
      if ( v10 == *(_QWORD *)(v3 + 8 * v4 + 2384) )
      {
        MiUnlinkPageFromList(48 * v10 - 0x58000000000LL, 1);
        v9 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = v9 & 0xFFFFFFFFFFFFFFFDuLL;
        MiInsertPageInList(v7, 0x88u);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo((struct _KEVENT *)v3, v9, 1);
        result = v8;
        __writecr8(v8);
        ++v6;
        if ( v5 && v6 >= v5 )
          return result;
      }
      else
      {
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v8);
      }
    }
  }
  return result;
}
