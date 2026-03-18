/*
 * XREFs of SepSqmInformation @ 0x140695354
 * Callers:
 *     SeAdjustObjectAppContainerSecurity @ 0x14069479C (SeAdjustObjectAppContainerSecurity.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     EtwRegister @ 0x140549F44 (EtwRegister.c)
 *     SepSetSqmObjectName @ 0x140695270 (SepSetSqmObjectName.c)
 */

NTSTATUS __fastcall SepSqmInformation(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v3; // rax
  signed __int8 v4; // cf
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  if ( qword_1403581E0 )
    return SepSetSqmObjectName(a1, a1);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1403581D8, 0LL, 0);
  v4 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1403581D8, 0LL);
  v5 = v3;
  if ( v4 )
    ExfAcquirePushLockExclusiveEx(&qword_1403581D8, v3, (ULONG_PTR)&qword_1403581D8);
  if ( v5 )
    v5[26] |= 1u;
  if ( qword_1403581E0 || EtwRegister(&stru_140286BF0, 0LL, 0LL, &qword_1403581E0) >= 0 )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403581D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403581D8);
    KeAbPostRelease((ULONG_PTR)&qword_1403581D8);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
    return SepSetSqmObjectName(a1, a1);
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_1403581D8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&qword_1403581D8);
  KeAbPostRelease((ULONG_PTR)&qword_1403581D8);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
}
