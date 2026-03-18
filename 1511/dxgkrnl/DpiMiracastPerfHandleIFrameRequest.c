/*
 * XREFs of DpiMiracastPerfHandleIFrameRequest @ 0x1C0029B80
 * Callers:
 *     DxgkHandleMiracastDrtEscape @ 0x1C00260D0 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastPerfHandleIFrameRequest(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 720) && !*(_BYTE *)(a1 + 722) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C0047008, &LockHandle);
    if ( !*(_BYTE *)(a1 + 722) )
    {
      v2 = *(_DWORD *)(a1 + 948);
      if ( *(_DWORD *)(a1 + 944) == v2 )
      {
        ++*(_DWORD *)(a1 + 772);
        ++*(_DWORD *)(a1 + 740);
      }
      else
      {
        ++*(_DWORD *)(32LL * (((_BYTE)v2 - 1) & 0x1F) + a1 + 988);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
