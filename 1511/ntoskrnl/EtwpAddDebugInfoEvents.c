/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x1404C77EC
 * Callers:
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404C79EC (EtwpAddLogHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404C9F88 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpSendDbgId @ 0x140664C10 (EtwpSendDbgId.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     EtwpAddEventToBuffer @ 0x1404C797C (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  __int64 *v5; // r12
  int v6; // ebx
  __int64 v7; // rbp
  char v9; // si
  int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 *v13; // rdi
  int v14; // esi
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  v5 = a4;
  v6 = a3 - *(_DWORD *)(a2 + 48);
  v7 = a2;
  if ( !a4 )
  {
    v16 = 0LL;
    v5 = &v16;
  }
  v9 = a5;
  if ( (a5 & 1) != 0 )
  {
    if ( (int)EtwpAddEventToBuffer(a2, 66LL, v5, "10586.1540.amd64fre.th2_release_sec.180322-1844", 48, v6, &a5) < 0 )
      return;
    v6 -= a5;
  }
  v10 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    v11 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 704), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 704), v11, a1 + 704);
    v7 = a2;
    if ( v12 )
      *(_BYTE *)(v12 + 26) |= 1u;
  }
  v13 = *(__int64 **)(a1 + 128);
  if ( v13 != (__int64 *)(a1 + 128) )
  {
    v14 = v9 & 4;
    do
    {
      if ( !v14 || !*((_BYTE *)v13 + 16) )
      {
        if ( (int)EtwpAddEventToBuffer(v7, 64LL, v5, (char *)v13 + 28, *((_DWORD *)v13 + 5) - 4, v6, &a5) < 0 )
          break;
        v6 -= a5;
      }
      v13 = (__int64 *)*v13;
    }
    while ( v13 != (__int64 *)(a1 + 128) );
  }
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 704));
    KeAbPostRelease(a1 + 704);
  }
}
