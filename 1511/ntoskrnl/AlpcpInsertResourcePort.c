/*
 * XREFs of AlpcpInsertResourcePort @ 0x14047CA08
 * Callers:
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

void __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v4; // rsi
  __int64 v5; // rax
  __int64 v6; // rdi
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v4 = (_QWORD *)(a2 - 48);
  v5 = KeAbPreAcquire(a1 + 328, 0LL, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = *(_QWORD **)(a1 + 344);
  *v4 = a1 + 336;
  v4[1] = v7;
  if ( *v7 != a1 + 336 )
    __fastfail(3u);
  *v7 = v4;
  *(_QWORD *)(a1 + 344) = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
}
