/*
 * XREFs of DpiMiracastPerfHandleIFrameRequest @ 0x1C0029F18
 * Callers:
 *     DxgkHandleMiracastDrtEscape @ 0x1C0026580 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C016A500 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastPerfHandleIFrameRequest(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 712) && !*(_BYTE *)(a1 + 714) )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    if ( !*(_BYTE *)(a1 + 714) )
    {
      v2 = *(_DWORD *)(a1 + 940);
      if ( *(_DWORD *)(a1 + 936) == v2 )
      {
        ++*(_DWORD *)(a1 + 764);
        ++*(_DWORD *)(a1 + 732);
      }
      else
      {
        ++*(_DWORD *)(32LL * (((_BYTE)v2 - 1) & 0x1F) + a1 + 980);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
