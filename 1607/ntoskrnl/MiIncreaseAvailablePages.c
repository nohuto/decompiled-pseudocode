/*
 * XREFs of MiIncreaseAvailablePages @ 0x14001B700
 * Callers:
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiReplenishPageSlist @ 0x140063EB0 (MiReplenishPageSlist.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 */

unsigned __int64 __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2)
{
  signed int v4; // r14d
  unsigned __int64 v5; // rbx
  int v6; // ebp
  unsigned __int64 v7; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rdi
  struct _KEVENT *v11; // r15
  __int64 v12; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( a2 == 1 )
  {
    result = 1LL;
    v9 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 6464));
    if ( v9 > 0x420 )
    {
LABEL_18:
      v10 = v9 - 1;
      if ( v10 != *(_QWORD *)(a1 + 4456) && v10 != *(_QWORD *)(a1 + 4464) )
        return result;
      return MiUpdateAvailableEvents(a1);
    }
    if ( v9 != 160 )
    {
      if ( v9 == 1056 )
      {
        LODWORD(result) = 2;
      }
      else
      {
        if ( v9 != 34 )
          goto LABEL_18;
        LODWORD(result) = 0;
      }
    }
    v12 = 32LL * (int)result;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 4352), &LockHandle);
    KeSetEvent((PRKEVENT)(v12 + a1 + 4360), 0, 0);
    ++*(_DWORD *)(v12 + a1 + 4384);
    result = KxReleaseQueuedSpinLock(&LockHandle);
    goto LABEL_18;
  }
  v4 = 0;
  v5 = a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 6464), a2);
  v6 = 0;
  if ( v5 >= 0xA0 && v5 - a2 < 0xA0 )
    v6 = 2;
  if ( v5 >= 0x22 && v5 - a2 < 0x22 )
    v6 |= 1u;
  if ( v5 >= 0x420 && v5 - a2 < 0x420 )
    v6 |= 4u;
  if ( v6 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 4352), &LockHandle);
    v11 = (struct _KEVENT *)(a1 + 4384);
    do
    {
      if ( _bittest(&v6, v4) )
      {
        KeSetEvent(v11 - 1, 0, 0);
        ++v11->Header.LockNV;
      }
      ++v4;
      v11 = (struct _KEVENT *)((char *)v11 + 32);
    }
    while ( v4 < 3 );
    KxReleaseQueuedSpinLock(&LockHandle);
  }
  v7 = *(_QWORD *)(a1 + 4464);
  if ( v5 > v7 && v5 - a2 <= v7 )
    return MiUpdateAvailableEvents(a1);
  result = *(_QWORD *)(a1 + 4456);
  if ( v5 > result && v5 - a2 <= result )
    return MiUpdateAvailableEvents(a1);
  return result;
}
