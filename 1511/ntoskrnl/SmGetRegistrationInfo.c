/*
 * XREFs of SmGetRegistrationInfo @ 0x140545BC4
 * Callers:
 *     SmProcessRegistrationRequest @ 0x140545B20 (SmProcessRegistrationRequest.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140042660 (KeLeaveCriticalRegion.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     SmRegistrationInfoFill @ 0x140545CB8 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x140545D38 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  int v8; // edi
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_140304F98, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140304F98, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_140304F98, v5, (ULONG_PTR)&qword_140304F98);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( (dword_140304F90 & 8) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = SmRegistrationCtxStart(&qword_140305228);
    if ( v8 >= 0 )
      dword_140304F90 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140304F98, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140304F98);
  KeAbPostRelease((ULONG_PTR)&qword_140304F98);
  KeLeaveCriticalRegion();
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = a1;
    v8 = SmRegistrationInfoFill(&qword_140305228, v9, a2 + 8);
    if ( v8 >= 0 )
      return 0;
  }
  return (unsigned int)v8;
}
