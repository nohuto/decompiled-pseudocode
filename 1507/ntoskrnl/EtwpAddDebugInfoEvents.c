/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x1404ABA60
 * Callers:
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404ABC40 (EtwpAddLogHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404ACABC (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x1406E7CE8 (EtwpSendDbgId.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x1404ABBD0 (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 a4, int a5)
{
  __int64 *v5; // r12
  int v6; // ebx
  __int64 v7; // rbp
  char v9; // si
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // rdi
  __int64 *v14; // rdi
  int v15; // esi
  __int64 v17; // [rsp+98h] [rbp+20h] BYREF

  v5 = (__int64 *)a4;
  v6 = a3 - *(_DWORD *)(a2 + 48);
  v7 = a2;
  if ( !a4 )
  {
    v17 = 0LL;
    v5 = &v17;
  }
  v9 = a5;
  if ( (a5 & 1) != 0 )
  {
    if ( (int)EtwpAddEventToBuffer(a2, 66LL, v5, "10240.21161.amd64fre.th1.251008-0227", 37, v6, &a5) < 0 )
      return;
    v6 -= a5;
  }
  v10 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    v11 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
    v13 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v11, a1 + 704, v12);
    v7 = a2;
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
  }
  v14 = *(__int64 **)(a1 + 128);
  if ( v14 != (__int64 *)(a1 + 128) )
  {
    v15 = v9 & 4;
    do
    {
      if ( !v15 || !*((_BYTE *)v14 + 16) )
      {
        if ( (int)EtwpAddEventToBuffer(v7, 64LL, v5, (char *)v14 + 28, *((_DWORD *)v14 + 5) - 4, v6, &a5) < 0 )
          break;
        v6 -= a5;
      }
      v14 = (__int64 *)*v14;
    }
    while ( v14 != (__int64 *)(a1 + 128) );
  }
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
    KeAbPostRelease(a1 + 704);
  }
}
