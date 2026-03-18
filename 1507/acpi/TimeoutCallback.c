/*
 * XREFs of TimeoutCallback @ 0x1C00472B0
 * Callers:
 *     <none>
 * Callees:
 *     RestartContext @ 0x1C0006090 (RestartContext.c)
 *     ListRemoveEntry @ 0x1C0010770 (ListRemoveEntry.c)
 */

void __fastcall TimeoutCallback(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v4; // eax
  __int64 v6; // rdx

  v4 = DeferredContext[16];
  if ( (v4 & 1) != 0 )
  {
    byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    v6 = *((_QWORD *)DeferredContext + 7);
    DeferredContext[16] = DeferredContext[16] & 0xFFFFFFFA | 4;
    ListRemoveEntry((_QWORD **)DeferredContext + 4, v6);
    *((_QWORD *)DeferredContext + 7) = 0LL;
  }
  else
  {
    if ( (v4 & 2) == 0 )
      return;
    byte_1C005A0C8 = KeAcquireSpinLockRaiseToDpc(&SpinLock);
    DeferredContext[16] &= ~2u;
  }
  KeReleaseSpinLock(&SpinLock, byte_1C005A0C8);
  RestartContext((PSLIST_ENTRY)DeferredContext, (DeferredContext[16] & 0x100) == 0);
}
