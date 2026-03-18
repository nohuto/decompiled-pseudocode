/*
 * XREFs of DpiMiracastPerfHandleIFrameRequest @ 0x1C0030F00
 * Callers:
 *     DxgkHandleMiracastDrtEscape @ 0x1C002D184 (DxgkHandleMiracastDrtEscape.c)
 *     DxgkHandleMiracastEscape @ 0x1C0198270 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     <none>
 */

void __fastcall DpiMiracastPerfHandleIFrameRequest(__int64 a1)
{
  int v2; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 808) && !*(_BYTE *)(a1 + 810) )
  {
    KeAcquireInStackQueuedSpinLock(&qword_1C00571C8, &LockHandle);
    if ( !*(_BYTE *)(a1 + 810) )
    {
      v2 = *(_DWORD *)(a1 + 1036);
      if ( *(_DWORD *)(a1 + 1032) == v2 )
      {
        ++*(_DWORD *)(a1 + 860);
        ++*(_DWORD *)(a1 + 828);
      }
      else
      {
        ++*(_DWORD *)(32LL * (((_BYTE)v2 - 1) & 0x1F) + a1 + 1076);
      }
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
}
