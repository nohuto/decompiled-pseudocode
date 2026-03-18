/*
 * XREFs of VidSchiIsMmIoFlipPending @ 0x1C0014D68
 * Callers:
 *     VidSchiWaitForDrainFlipQueue @ 0x1C0061938 (VidSchiWaitForDrainFlipQueue.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiIsMmIoFlipPending(__int64 a1)
{
  char v2; // bl
  unsigned int v3; // r8d
  unsigned int v4; // edx
  __int64 v5; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1824), &LockHandle);
  v3 = *(_DWORD *)(a1 + 40);
  v4 = 0;
  if ( v3 )
  {
    v5 = a1 + 2592;
    while ( !*(_QWORD *)v5 || !*(_DWORD *)(*(_QWORD *)v5 + 2340LL) )
    {
      ++v4;
      v5 += 8LL;
      if ( v4 >= v3 )
        goto LABEL_6;
    }
    v2 = 1;
  }
LABEL_6:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
