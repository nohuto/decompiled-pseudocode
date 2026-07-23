/*
 * XREFs of AlpcpInsertResourcePort @ 0x14040C434
 * Callers:
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall AlpcpInsertResourcePort(__int64 a1, __int64 a2)
{
  unsigned __int64 *v2; // rbx
  _QWORD *v4; // rsi
  _BYTE *v5; // rax
  _BYTE *v6; // rdi
  _QWORD *v7; // rcx

  v2 = (unsigned __int64 *)(a1 + 328);
  v4 = (_QWORD *)(a2 - 48);
  v5 = (_BYTE *)KeAbPreAcquire(a1 + 328, 0LL, 0);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v5, (ULONG_PTR)v2);
  if ( v6 )
    v6[26] |= 1u;
  v7 = *(_QWORD **)(a1 + 344);
  if ( *v7 != a1 + 336 )
    __fastfail(3u);
  *v4 = a1 + 336;
  v4[1] = v7;
  *v7 = v4;
  *(_QWORD *)(a1 + 344) = v4;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v2);
  return KeAbPostRelease((ULONG_PTR)v2);
}
