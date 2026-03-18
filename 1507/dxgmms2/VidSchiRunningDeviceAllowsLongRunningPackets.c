/*
 * XREFs of VidSchiRunningDeviceAllowsLongRunningPackets @ 0x1C001A0B8
 * Callers:
 *     VidSchiCheckNodeTimeout @ 0x1C0032C30 (VidSchiCheckNodeTimeout.c)
 * Callees:
 *     <none>
 */

char __fastcall VidSchiRunningDeviceAllowsLongRunningPackets(__int64 a1)
{
  char v2; // bl
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 1;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 24) + 1872LL), &LockHandle);
  v3 = *(unsigned int *)(a1 + 1480);
  if ( (_DWORD)v3 != *(_DWORD *)(a1 + 1472) )
  {
    v4 = *(_QWORD *)(a1 + 8 * v3 + 1488);
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 104);
      if ( *(_BYTE *)(v5 + 172)
        || _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 168), 0, 0)
        || (*(_DWORD *)(v5 + 48) & 4) == 0 && (*(_DWORD *)(v4 + 112) & 0x20) == 0 )
      {
        v2 = 0;
      }
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
