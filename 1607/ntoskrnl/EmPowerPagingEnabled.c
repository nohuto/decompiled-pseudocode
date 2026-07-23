/*
 * XREFs of EmPowerPagingEnabled @ 0x140530930
 * Callers:
 *     PoBroadcastSystemState @ 0x1403CEBF8 (PoBroadcastSystemState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeInitializeEvent @ 0x14002DA20 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall EmPowerPagingEnabled(char a1)
{
  char v2; // di
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rbx
  unsigned __int64 result; // rax
  _BYTE *v7; // rax
  _BYTE *v8; // rdi
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v3, (ULONG_PTR)&EmpPagingLock);
  if ( v5 )
    v5[26] |= 1u;
  if ( a1 )
  {
    dword_140322568 |= 0x80000000;
  }
  else
  {
    dword_140322568 &= ~0x80000000;
    if ( (dword_140322568 & 0x7FFFFFFF) != 0 )
    {
      KeInitializeEvent(&Event, SynchronizationEvent, 0);
      v2 = 1;
      EmpPagingStatus = &Event;
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  if ( v2 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v7 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&EmpPagingLock, 0LL, 0);
    v4 = _interlockedbittestandset64((volatile signed __int32 *)&EmpPagingLock, 0LL);
    v8 = v7;
    if ( v4 )
      ExfAcquirePushLockExclusiveEx(&EmpPagingLock, v7, (ULONG_PTR)&EmpPagingLock);
    if ( v8 )
      v8[26] |= 1u;
    EmpPagingStatus = 0LL;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpPagingLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpPagingLock);
    return KeAbPostRelease((ULONG_PTR)&EmpPagingLock);
  }
  return result;
}
