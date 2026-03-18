/*
 * XREFs of MiFinishPageFileExtension @ 0x1402216C8
 * Callers:
 *     MiAttemptPageFileExtension @ 0x1406A4E8C (MiAttemptPageFileExtension.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     MiUpdateReserveClusterInfo @ 0x1400DDB10 (MiUpdateReserveClusterInfo.c)
 */

void __fastcall MiFinishPageFileExtension(struct _KEVENT *a1, __int64 a2, __int64 a3)
{
  int v6; // ebp
  __int64 v7; // rbx
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v6 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a2 + 192), &LockHandle);
  v7 = *(_QWORD *)(a2 + 128);
  RtlClearBits((PRTL_BITMAP)(v7 + 8), *(_DWORD *)a2, a3);
  RtlClearBits((PRTL_BITMAP)(v7 + 24), *(_DWORD *)a2, a3);
  *(_QWORD *)(a2 + 48) += a3;
  *(_QWORD *)(a2 + 24) += a3;
  ++*(_DWORD *)(a2 + 148);
  *(_QWORD *)a2 += a3;
  v8 = *(_QWORD *)(a2 + 48);
  v9 = *(_QWORD *)(a2 + 216);
  if ( *(_QWORD *)(a2 + 24) < v8 )
    v8 = *(_QWORD *)(a2 + 24);
  *(_QWORD *)(a2 + 56) = v8;
  if ( (*(_BYTE *)(a2 + 166) & 1) != 0 )
    v6 = 1;
  MiUpdateReserveClusterInfo(v9, 0LL, 0);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v6 == 1 )
    KeSetEvent(a1 + 33, 0, 0);
}
