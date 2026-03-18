/*
 * XREFs of MiFinishPageFileExtension @ 0x1401DC968
 * Callers:
 *     MiAttemptPageFileExtension @ 0x14062543C (MiAttemptPageFileExtension.c)
 * Callees:
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUpdateReserveClusterInfo @ 0x1400B84AC (MiUpdateReserveClusterInfo.c)
 *     MiCoalescePageFileBitmapsCache @ 0x1400B8500 (MiCoalescePageFileBitmapsCache.c)
 */

void __fastcall MiFinishPageFileExtension(__int64 a1, __int64 a2, __int64 a3)
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
    KeSetEvent((PRKEVENT)(a1 + 800), 0, 0);
}
