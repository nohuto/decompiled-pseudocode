/*
 * XREFs of ExpWnfUpdateSubscription @ 0x140503480
 * Callers:
 *     ExpWnfSubscribeNameInstance @ 0x140503024 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquireRundownProtection @ 0x1400D4A40 (ExfAcquireRundownProtection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall ExpWnfUpdateSubscription(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        _QWORD *a9)
{
  _QWORD *i; // rax
  _QWORD *v13; // rbx
  unsigned __int64 *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rsi
  int v19; // r9d
  int v20; // ecx
  unsigned __int64 v21; // rtt
  __int64 v22; // r8
  _QWORD *v23; // rdx

  for ( i = *(_QWORD **)(a2 + 88); ; i = (_QWORD *)*i )
  {
    if ( i == (_QWORD *)(a2 + 88) )
      return 3221225524LL;
    v13 = i - 3;
    if ( i[3] == a1 )
      break;
  }
  v15 = (unsigned __int64 *)(a2 + 104);
  *a7 = 0;
  *a8 = 0;
  v16 = KeAbPreAcquire(a2 + 104, 0LL, 0LL, a4);
  v18 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15, v17);
  if ( v18 )
    *(_BYTE *)(v18 + 26) |= 1u;
  if ( (a5 & 1) != 0 && (*((_BYTE *)v13 + 100) & 1) == 0 )
  {
    if ( _InterlockedIncrement((volatile signed __int32 *)(a1 + 160)) == 1 )
      *a7 = 1;
  }
  else if ( (a5 & 1) == 0
         && (*((_BYTE *)v13 + 100) & 1) != 0
         && _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), 0xFFFFFFFF) == 1 )
  {
    *a7 = -1;
  }
  v19 = *((_DWORD *)v13 + 30);
  if ( v19 != 2 && (*((_BYTE *)v13 + 124) & 1) != 0 && (a5 & 1) == 0 )
    *a8 = -1;
  *((_DWORD *)v13 + 31) &= a5;
  v20 = *((_DWORD *)v13 + 31);
  v13[10] = a3;
  v13[11] = a4;
  *((_DWORD *)v13 + 25) = a5;
  if ( v19 && !v20 && !*((_DWORD *)v13 + 32) )
  {
    v22 = v13[13];
    v23 = (_QWORD *)v13[14];
    if ( *(_QWORD **)(v22 + 8) != v13 + 13 || (_QWORD *)*v23 != v13 + 13 )
      __fastfail(3u);
    *v23 = v22;
    *(_QWORD *)(v22 + 8) = v23;
    *((_DWORD *)v13 + 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease((ULONG_PTR)v15);
  _m_prefetchw(v13 + 1);
  v21 = v13[1] & 0xFFFFFFFFFFFFFFFEuLL;
  if ( v21 != _InterlockedCompareExchange64(v13 + 1, v21 + 2, v21) )
    ExfAcquireRundownProtection((PEX_RUNDOWN_REF)v13 + 1);
  *a6 = v13;
  if ( a9 )
    *a9 = v13[2];
  return 0LL;
}
