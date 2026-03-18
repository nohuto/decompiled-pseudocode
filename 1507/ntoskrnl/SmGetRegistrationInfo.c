/*
 * XREFs of SmGetRegistrationInfo @ 0x1405BD060
 * Callers:
 *     SmProcessRegistrationRequest @ 0x1405BCFBC (SmProcessRegistrationRequest.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     SmRegistrationInfoFill @ 0x1405BD184 (SmRegistrationInfoFill.c)
 *     SmRegistrationCtxStart @ 0x1405BD204 (SmRegistrationCtxStart.c)
 */

__int64 __fastcall SmGetRegistrationInfo(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rax
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rdi
  int v11; // edi
  struct _KTHREAD *v12; // rdx
  __int16 v13; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_140352D08, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140352D08, 0LL);
  v10 = v7;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&qword_140352D08, v7, (ULONG_PTR)&qword_140352D08, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( (dword_140352D00 & 8) != 0 )
  {
    v11 = 0;
  }
  else
  {
    v11 = SmRegistrationCtxStart(&qword_140352F98);
    if ( v11 >= 0 )
      dword_140352D00 |= 8u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140352D08, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_140352D08);
  KeAbPostRelease((ULONG_PTR)&qword_140352D08);
  v12 = KeGetCurrentThread();
  v13 = v12->KernelApcDisable + 1;
  v12->KernelApcDisable = v13;
  if ( !v13
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v12->ApcState.ApcListHead[0].Flink != &v12->152
    && !v12->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  if ( v11 >= 0 )
  {
    LOBYTE(v12) = a1;
    v11 = SmRegistrationInfoFill(&qword_140352F98, v12, a2 + 8);
    if ( v11 >= 0 )
      return 0;
  }
  return (unsigned int)v11;
}
