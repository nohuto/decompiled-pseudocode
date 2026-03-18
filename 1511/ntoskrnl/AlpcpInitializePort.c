/*
 * XREFs of AlpcpInitializePort @ 0x14046C500
 * Callers:
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     AlpcpAcceptConnectPort @ 0x14047D9CC (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateConnectionPort @ 0x1404B1C70 (AlpcpCreateConnectionPort.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeInitializeSemaphore @ 0x14002D400 (KeInitializeSemaphore.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1400BB7D4 (ExAllocateFromNPagedLookasideList.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, char a3)
{
  __int64 v4; // rax
  signed __int8 v5; // cf
  __int64 v6; // rdi
  __int64 **v7; // rax
  struct _KSEMAPHORE *v9; // rax

  *(_QWORD *)(a1 + 352) = 0LL;
  *(_QWORD *)(a1 + 328) = 0LL;
  *(_QWORD *)(a1 + 344) = a1 + 336;
  *(_QWORD *)(a1 + 336) = a1 + 336;
  *(_QWORD *)(a1 + 152) = a1 + 144;
  *(_QWORD *)(a1 + 144) = a1 + 144;
  *(_QWORD *)(a1 + 192) = a1 + 184;
  *(_QWORD *)(a1 + 184) = a1 + 184;
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  *(_QWORD *)(a1 + 392) = a1 + 384;
  *(_QWORD *)(a1 + 384) = a1 + 384;
  *(_QWORD *)(a1 + 216) = a1 + 208;
  *(_QWORD *)(a1 + 208) = a1 + 208;
  *(_QWORD *)(a1 + 136) = 0LL;
  *(_QWORD *)(a1 + 176) = 0LL;
  *(_QWORD *)(a1 + 200) = 0LL;
  *(_QWORD *)(a1 + 240) = a1 + 232;
  *(_QWORD *)(a1 + 232) = a1 + 232;
  *(_QWORD *)(a1 + 224) = 0LL;
  *(_DWORD *)(a1 + 416) = *(_DWORD *)(a1 + 416) & 0xFFFFFDF9 | (2 * (a2 & 3 | ((a3 & 1) << 8)));
  if ( a3 )
  {
    *(_DWORD *)(a1 + 256) |= 0x40000u;
    v9 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList(&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v9;
    if ( !v9 )
      return 3221225626LL;
    KeInitializeSemaphore(v9, 0, 0x7FFFFFFF);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) |= 1u;
  v4 = KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v4, (ULONG_PTR)&AlpcpPortListLock);
  if ( v6 )
    *(_BYTE *)(v6 + 26) |= 1u;
  v7 = (__int64 **)qword_1402E1E08;
  *(_QWORD *)a1 = &AlpcpPortList;
  *(_QWORD *)(a1 + 8) = v7;
  if ( *v7 != &AlpcpPortList )
    __fastfail(3u);
  *v7 = (__int64 *)a1;
  qword_1402E1E08 = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  return 0LL;
}
