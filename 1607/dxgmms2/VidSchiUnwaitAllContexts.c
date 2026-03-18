/*
 * XREFs of VidSchiUnwaitAllContexts @ 0x1C00258D4
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0027844 (VidSchiReportHwHang.c)
 *     VidSchFlushAdapter @ 0x1C00A0BE0 (VidSchFlushAdapter.c)
 * Callees:
 *     ?VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z @ 0x1C00224B8 (-VidSchiUnwaitAllContextsInList@@YAXPEAU_LIST_ENTRY@@@Z.c)
 */

LONG __fastcall VidSchiUnwaitAllContexts(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  __int64 i; // rsi
  struct _LIST_ENTRY *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1856), &LockHandle);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 60); i = (unsigned int)(i + 1) )
  {
    v6 = *(struct _LIST_ENTRY **)(a1 + 8 * i + 408);
    VidSchiUnwaitAllContextsInList(v6 + 157, v2, v3, v4);
    VidSchiUnwaitAllContextsInList(v6 + 154, v7, v8, v9);
    VidSchiUnwaitAllContextsInList(v6 + 156, v10, v11, v12);
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  *(_QWORD *)(a1 + 1368) = MEMORY[0xFFFFF78000000320];
  return KeSetEvent((PRKEVENT)(a1 + 1336), 0, 0);
}
