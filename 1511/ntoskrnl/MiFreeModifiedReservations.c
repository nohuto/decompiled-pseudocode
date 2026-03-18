/*
 * XREFs of MiFreeModifiedReservations @ 0x1401DCB64
 * Callers:
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     MiPageFileNoFreeSpace @ 0x1401DCEA8 (MiPageFileNoFreeSpace.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
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
    v4 = 5 * ((result & 0xF) + 56);
    v5 = a2 == 0 ? 0x10000 : 0;
    v6 = 0LL;
    while ( 1 )
    {
      v10 = *(_QWORD *)(v3 + 8 * v4 + 16);
      result = 0xFFFFFFFFFLL;
      if ( v10 == 0xFFFFFFFFFLL )
        break;
      v7 = 48 * v10 - 0x58000000000LL;
      v8 = MiLockPageInline(v7);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v3 + 6048), &LockHandle);
      if ( v10 == *(_QWORD *)(v3 + 8 * v4 + 16) )
      {
        MiUnlinkPageFromList(48 * v10 - 0x58000000000LL, 1);
        v9 = *(_QWORD *)(v7 + 16);
        *(_QWORD *)(v7 + 16) = v9 & 0xFFFFFFFFFFFFEFFFuLL;
        MiInsertPageInList(v7, 0x88u);
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiReleasePageFileInfo(v3, v9, 1);
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
