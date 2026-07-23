/*
 * XREFs of EtwpAddDebugInfoEvents @ 0x14049393C
 * Callers:
 *     EtwpRealtimeNotifyConsumers @ 0x140492EF4 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404948D8 (EtwpAddLogHeader.c)
 *     EtwpSendDbgId @ 0x1406A5588 (EtwpSendDbgId.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x140493A94 (EtwpAddEventToBuffer.c)
 */

void __fastcall EtwpAddDebugInfoEvents(__int64 a1, __int64 a2, int a3, __int64 *a4, int a5)
{
  __int64 *v5; // r12
  int v6; // ebx
  __int64 v7; // rbp
  char v9; // si
  int v10; // r15d
  _BYTE *v11; // rax
  _BYTE *v12; // rdi
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
    if ( (int)EtwpAddEventToBuffer(a2, 66LL, v5, "14393.9339.amd64fre.rs1_release.260710-1833", 44, v6, &a5) < 0 )
      return;
    v6 -= a5;
  }
  v10 = v9 & 2;
  if ( (v9 & 2) != 0 )
  {
    v11 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
    v12 = v11;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 688), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 688), v11, a1 + 688);
    v7 = a2;
    if ( v12 )
      v12[26] |= 1u;
  }
  v13 = *(__int64 **)(a1 + 112);
  if ( v13 != (__int64 *)(a1 + 112) )
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
    while ( v13 != (__int64 *)(a1 + 112) );
  }
  if ( v10 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 688), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 688));
    KeAbPostRelease(a1 + 688);
  }
}
