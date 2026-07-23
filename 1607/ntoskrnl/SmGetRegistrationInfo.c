/*
 * XREFs of SmGetRegistrationInfo @ 0x14057BBE8
 * Callers:
 *     SmProcessRegistrationRequest @ 0x14057BB40 (SmProcessRegistrationRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     SmRegistrationInfoFill @ 0x14057BCBC (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x14057F46C (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  int v8; // edi
  __int64 v9; // rdx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403BF128, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403BF128, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1403BF128, v5, (ULONG_PTR)&qword_1403BF128);
  if ( v7 )
    v7[26] |= 1u;
  if ( (dword_1403BF110 & 8) != 0 )
  {
    v8 = 0;
  }
  else
  {
    v8 = SmRegistrationCtxStart(&qword_1403BF3B8);
    if ( v8 >= 0 )
      dword_1403BF110 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403BF128, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403BF128);
  KeAbPostRelease((ULONG_PTR)&qword_1403BF128);
  KeLeaveCriticalRegion();
  if ( v8 >= 0 )
  {
    LOBYTE(v9) = a1;
    v8 = SmRegistrationInfoFill(&qword_1403BF3B8, v9, a2 + 8);
    if ( v8 >= 0 )
      return 0;
  }
  return (unsigned int)v8;
}
