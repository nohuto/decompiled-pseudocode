/*
 * XREFs of TimeoutCallback @ 0x1C0046BD0
 * Callers:
 *     <none>
 * Callees:
 *     ListRemoveEntry @ 0x1C0011778 (ListRemoveEntry.c)
 *     AcquireMutex @ 0x1C00447B8 (AcquireMutex.c)
 *     ReleaseMutex @ 0x1C00450EC (ReleaseMutex.c)
 */

void __fastcall TimeoutCallback(
        struct _KDPC *Dpc,
        _DWORD *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  int v5; // eax
  __int64 v6; // rdx

  AcquireMutex((__int64)&SpinLock);
  v5 = DeferredContext[16];
  if ( (v5 & 1) != 0 )
  {
    v6 = *((_QWORD *)DeferredContext + 7);
    DeferredContext[16] = v5 & 0xFFFFFFFA | 4;
    ListRemoveEntry((_QWORD **)DeferredContext + 4, v6);
    *((_QWORD *)DeferredContext + 7) = 0LL;
LABEL_5:
    ReleaseMutex((__int64)&SpinLock);
    RestartContext((PSLIST_ENTRY)DeferredContext, (DeferredContext[16] & 0x100) == 0);
    return;
  }
  if ( (v5 & 2) != 0 )
  {
    DeferredContext[16] = v5 & 0xFFFFFFFD;
    goto LABEL_5;
  }
  ReleaseMutex((__int64)&SpinLock);
}
