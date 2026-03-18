/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x1406E7EB8
 * Callers:
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404ABC40 (EtwpAddLogHeader.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x1404ABBD0 (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  unsigned int v5; // ebp
  int v8; // r14d
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 **v12; // rsi
  __int64 *i; // rdi
  unsigned int v15; // [rsp+80h] [rbp+18h] BYREF

  v4 = (unsigned __int64 *)(a1 + 704);
  v5 = a3 - *(_DWORD *)(a2 + 48);
  v8 = 0;
  v9 = KeAbPreAcquire(a1 + 704, 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v9, (ULONG_PTR)v4, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  v12 = (__int64 **)(a1 + 872);
  for ( i = *v12; i != (__int64 *)v12; i = (__int64 *)*i )
  {
    v8 = EtwpAddEventToBuffer(
           a2,
           67,
           (_QWORD *)(a2 + 88),
           (char *)i + 20,
           16 * *((_DWORD *)i + 5) + 4 + *((_DWORD *)i + 4),
           v5,
           &v15);
    if ( v8 < 0 )
      break;
    v5 -= v15;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  return (unsigned int)v8;
}
