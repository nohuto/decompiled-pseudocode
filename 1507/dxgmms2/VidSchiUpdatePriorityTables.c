/*
 * XREFs of VidSchiUpdatePriorityTables @ 0x1C0002C9C
 * Callers:
 *     VidSchiSelectContext @ 0x1C001A140 (VidSchiSelectContext.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x1C0002D28 (VidSchiInsertCommandToSoftwareQueue.c)
 */

_BOOL8 __fastcall VidSchiUpdatePriorityTables(__int64 a1, __int64 a2, int a3, _DWORD *a4)
{
  int v8; // eax
  BOOL v9; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+60h] [rbp+18h] BYREF

  if ( !a3 )
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1872), &LockHandle);
  v8 = 0;
  v12 = 0;
  if ( a2 )
  {
    VidSchiInsertCommandToSoftwareQueue(a2, &v12);
    v8 = v12;
  }
  v9 = *(_DWORD *)(a1 + 892) != 0;
  if ( a4 )
    *a4 = v8;
  if ( !a3 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v9;
}
