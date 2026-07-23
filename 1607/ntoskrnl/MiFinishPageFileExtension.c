/*
 * XREFs of MiFinishPageFileExtension @ 0x1401EE474
 * Callers:
 *     MiAttemptPageFileExtension @ 0x14065ADBC (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiCoalescePageFileBitmapsCache @ 0x140019FE0 (MiCoalescePageFileBitmapsCache.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B32A8 (MiUpdateReserveClusterInfo.c)
 */

void __fastcall MiFinishPageFileExtension(struct _KEVENT *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rbx
  ULONG v7; // esi
  BOOL v8; // ebp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 232), &LockHandle);
  v6 = *(_QWORD *)(a2 + 112);
  v7 = *(_DWORD *)a2;
  RtlClearBits((PRTL_BITMAP)(v6 + 8), *(_DWORD *)a2, a3);
  RtlClearBits((PRTL_BITMAP)(v6 + 24), v7, a3);
  *(_QWORD *)a2 += a3;
  ++*(_DWORD *)(a2 + 128);
  *(_QWORD *)(a2 + 24) += a3;
  *(_QWORD *)(a2 + 48) += a3;
  v8 = (*(_BYTE *)(a2 + 206) & 1) != 0;
  MiCoalescePageFileBitmapsCache(a2, 0, v7);
  MiUpdateReserveClusterInfo(*(_QWORD *)(a2 + 256), 0LL, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v8 )
    KeSetEvent(a1 + 33, 0, 0);
}
