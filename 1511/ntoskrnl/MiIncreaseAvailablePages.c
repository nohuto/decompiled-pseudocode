/*
 * XREFs of MiIncreaseAvailablePages @ 0x1400C0448
 * Callers:
 *     MiReplenishPageSlist @ 0x140012870 (MiReplenishPageSlist.c)
 *     MiInsertLargePageInNodeList @ 0x1400C02B4 (MiInsertLargePageInNodeList.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 */

void __fastcall MiIncreaseAvailablePages(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v5; // rbx
  signed int v6; // ebp
  int v7; // edi
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  struct _KEVENT *v12; // r15
  int v13; // ecx
  __int64 v14; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v3 = a2;
  if ( a2 == 1 )
  {
    v10 = _InterlockedIncrement64((volatile signed __int64 *)(a1 + 5888));
    if ( v10 > 0x420 )
    {
LABEL_18:
      v11 = v10 - 1;
      if ( v11 != *(_QWORD *)(a1 + 4328) && v11 != *(_QWORD *)(a1 + 4336) )
        return;
LABEL_33:
      MiUpdateAvailableEvents(a1, a2, a3);
      return;
    }
    a2 = 160LL;
    switch ( v10 )
    {
      case 0xA0uLL:
        v13 = 1;
        break;
      case 0x420uLL:
        v13 = 2;
        break;
      case 0x22uLL:
        v13 = 0;
        break;
      default:
        goto LABEL_18;
    }
    v14 = 32LL * v13;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
    KeSetEvent((PRKEVENT)(v14 + a1 + 4232), 0, 0);
    ++*(_DWORD *)(v14 + a1 + 4256);
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
    goto LABEL_18;
  }
  v5 = a2 + _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 5888), a2);
  v6 = 0;
  a2 = 160LL;
  v7 = 0;
  if ( v5 >= 0xA0 && v5 - v3 < 0xA0 )
    v7 = 2;
  if ( v5 >= 0x22 && v5 - v3 < 0x22 )
    v7 |= 1u;
  if ( v5 >= 0x420 && v5 - v3 < 0x420 )
    v7 |= 4u;
  if ( v7 )
  {
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 4224), &LockHandle);
    v12 = (struct _KEVENT *)(a1 + 4256);
    do
    {
      if ( _bittest(&v7, v6) )
      {
        KeSetEvent(v12 - 1, 0, 0);
        ++v12->Header.LockNV;
      }
      ++v6;
      v12 = (struct _KEVENT *)((char *)v12 + 32);
    }
    while ( v6 < 3 );
    KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
  }
  v8 = *(_QWORD *)(a1 + 4336);
  if ( v5 > v8 && v5 - v3 <= v8 )
    goto LABEL_33;
  v9 = *(_QWORD *)(a1 + 4328);
  if ( v5 > v9 && v5 - v3 <= v9 )
    goto LABEL_33;
}
