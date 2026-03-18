/*
 * XREFs of DbgkpRemoveErrorPort @ 0x1406691E8
 * Callers:
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     DbgkFlushErrorPort @ 0x140553854 (DbgkFlushErrorPort.c)
 * Callees:
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     DbgkpDeleteErrorPort @ 0x1406691C4 (DbgkpDeleteErrorPort.c)
 */

void __fastcall DbgkpRemoveErrorPort(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rsi
  __int16 v11; // ax

  if ( !_interlockedbittestandset((volatile signed __int32 *)(a2 + 4), 0) )
  {
    --*(_WORD *)(a1 + 484);
    v6 = 0;
    v7 = KeAbPreAcquire((ULONG_PTR)&DbgkpErrorPortLock, 0LL, 0LL, a4);
    v9 = _interlockedbittestandset64((volatile signed __int32 *)&DbgkpErrorPortLock, 0LL);
    v10 = v7;
    if ( v9 )
      ExfAcquirePushLockExclusiveEx(&DbgkpErrorPortLock, v7, (ULONG_PTR)&DbgkpErrorPortLock, v8);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    if ( DbgkpErrorPort == a2 )
    {
      DbgkpErrorProcess = 0LL;
      DbgkpErrorPort = 0LL;
      v6 = 1;
      _interlockedbittestandreset((volatile signed __int32 *)0xFFFFF780000002F0LL, 0);
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&DbgkpErrorPortLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&DbgkpErrorPortLock);
    KeAbPostRelease((ULONG_PTR)&DbgkpErrorPortLock);
    v11 = *(_WORD *)(a1 + 484) + 1;
    *(_WORD *)(a1 + 484) = v11;
    if ( !v11 && *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
      KiCheckForKernelApcDelivery();
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)a2, 0xFFFFFFFF) == 1 )
        DbgkpDeleteErrorPort((HANDLE *)a2);
      KeResetEvent((PRKEVENT)DbgkErrorPortRegisteredEvent);
    }
  }
}
