/*
 * XREFs of EtwpAddBinaryInfoEvents @ 0x1406A6750
 * Callers:
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpAddLogHeader @ 0x1404948D8 (EtwpAddLogHeader.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EtwpAddEventToBuffer @ 0x140493A94 (EtwpAddEventToBuffer.c)
 */

__int64 __fastcall EtwpAddBinaryInfoEvents(__int64 a1, __int64 a2, int a3)
{
  unsigned __int64 *v3; // rbx
  unsigned int v4; // ebp
  int v7; // r14d
  _BYTE *v8; // rax
  _BYTE *v9; // rdi
  __int64 **v10; // rsi
  __int64 *i; // rdi
  unsigned int v13; // [rsp+80h] [rbp+18h] BYREF

  v3 = (unsigned __int64 *)(a1 + 688);
  v4 = a3 - *(_DWORD *)(a2 + 48);
  v7 = 0;
  v8 = (_BYTE *)KeAbPreAcquire(a1 + 688, 0LL, 0);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v8, (ULONG_PTR)v3);
  if ( v9 )
    v9[26] |= 1u;
  v10 = (__int64 **)(a1 + 856);
  for ( i = *v10; i != (__int64 *)v10; i = (__int64 *)*i )
  {
    v7 = EtwpAddEventToBuffer(
           a2,
           67,
           (_QWORD *)(a2 + 88),
           (char *)i + 20,
           16 * *((_DWORD *)i + 5) + 4 + *((_DWORD *)i + 4),
           v4,
           &v13);
    if ( v7 < 0 )
      break;
    v4 -= v13;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  return (unsigned int)v7;
}
