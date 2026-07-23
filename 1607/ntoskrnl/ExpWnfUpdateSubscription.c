/*
 * XREFs of ExpWnfUpdateSubscription @ 0x1404629E4
 * Callers:
 *     ExpWnfSubscribeNameInstance @ 0x1404625B4 (ExpWnfSubscribeNameInstance.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
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
  _BYTE *v16; // rax
  _BYTE *v17; // rsi
  int v18; // r9d
  int v19; // ecx
  __int64 v20; // r8
  _QWORD *v21; // rdx

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
  v16 = (_BYTE *)KeAbPreAcquire(a2 + 104, 0LL, 0);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v15, 0LL) )
    ExfAcquirePushLockExclusiveEx(v15, v16, (ULONG_PTR)v15);
  if ( v17 )
    v17[26] |= 1u;
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
  v18 = *((_DWORD *)v13 + 30);
  if ( v18 != 2 && (*((_BYTE *)v13 + 124) & 1) != 0 && (a5 & 1) == 0 )
    *a8 = -1;
  *((_DWORD *)v13 + 31) &= a5;
  v19 = *((_DWORD *)v13 + 31);
  v13[10] = a3;
  v13[11] = a4;
  *((_DWORD *)v13 + 25) = a5;
  if ( v18 && !v19 && !*((_DWORD *)v13 + 32) )
  {
    v20 = v13[13];
    v21 = (_QWORD *)v13[14];
    if ( *(_QWORD **)(v20 + 8) != v13 + 13 || (_QWORD *)*v21 != v13 + 13 )
      __fastfail(3u);
    *v21 = v20;
    *(_QWORD *)(v20 + 8) = v21;
    *((_DWORD *)v13 + 30) = 0;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v15);
  KeAbPostRelease((ULONG_PTR)v15);
  ExAcquireRundownProtection((PEX_RUNDOWN_REF)v13 + 1);
  *a6 = v13;
  if ( a9 )
    *a9 = v13[2];
  return 0LL;
}
