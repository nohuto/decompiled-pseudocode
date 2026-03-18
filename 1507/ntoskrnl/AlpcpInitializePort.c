/*
 * XREFs of AlpcpInitializePort @ 0x140472328
 * Callers:
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     AlpcpCreateConnectionPort @ 0x14054355C (AlpcpCreateConnectionPort.c)
 * Callees:
 *     KeInitializeSemaphore @ 0x14002123C (KeInitializeSemaphore.c)
 *     ExAllocateFromNPagedLookasideList @ 0x140030738 (ExAllocateFromNPagedLookasideList.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall AlpcpInitializePort(__int64 a1, char a2, char a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  signed __int8 v7; // cf
  __int64 v8; // rdi
  __int64 **v9; // rax
  struct _KSEMAPHORE *v11; // rax

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
    v11 = (struct _KSEMAPHORE *)ExAllocateFromNPagedLookasideList(&AlpcpNPLookasides);
    *(_QWORD *)(a1 + 248) = v11;
    if ( !v11 )
      return 3221225626LL;
    KeInitializeSemaphore(v11, 0, 0x7FFFFFFF);
  }
  else
  {
    *(_QWORD *)(a1 + 248) = AlpcpDummyEvent;
  }
  *(_DWORD *)(a1 + 416) |= 1u;
  v5 = KeAbPreAcquire((ULONG_PTR)&AlpcpPortListLock, 0LL, 0LL, a4);
  v7 = _interlockedbittestandset64((volatile signed __int32 *)&AlpcpPortListLock, 0LL);
  v8 = v5;
  if ( v7 )
    ExfAcquirePushLockExclusiveEx(&AlpcpPortListLock, v5, (ULONG_PTR)&AlpcpPortListLock, v6);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = (__int64 **)qword_140332268;
  *(_QWORD *)a1 = &AlpcpPortList;
  *(_QWORD *)(a1 + 8) = v9;
  if ( *v9 != &AlpcpPortList )
    __fastfail(3u);
  *v9 = (__int64 *)a1;
  qword_140332268 = a1;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&AlpcpPortListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&AlpcpPortListLock);
  KeAbPostRelease((ULONG_PTR)&AlpcpPortListLock);
  return 0LL;
}
