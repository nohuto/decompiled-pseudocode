/*
 * XREFs of SepSqmInformation @ 0x140655C10
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x140655164 (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     EtwRegister @ 0x1404CC744 (EtwRegister.c)
 *     SepSetSqmObjectName @ 0x140655B2C (SepSetSqmObjectName.c)
 */

NTSTATUS __fastcall SepSqmInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v3; // rax
  signed __int8 v4; // cf
  __int64 v5; // rdi

  if ( qword_1403351F0 )
    return SepSetSqmObjectName(a1, a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = KeAbPreAcquire((ULONG_PTR)&qword_1403351F8, 0LL, 0LL);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403351F8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1403351F8, v3, (ULONG_PTR)&qword_1403351F8);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  if ( qword_1403351F0 || EtwRegister(&stru_14025D250, 0LL, 0LL, &qword_1403351F0) >= 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403351F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403351F8);
    KeAbPostRelease((ULONG_PTR)&qword_1403351F8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    return SepSetSqmObjectName(a1, a1);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403351F8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403351F8);
  KeAbPostRelease((ULONG_PTR)&qword_1403351F8);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
}
