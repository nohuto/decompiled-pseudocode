/*
 * XREFs of PopGetSettingValue @ 0x1404E9C8C
 * Callers:
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopMarshalSettingValues @ 0x1404E5454 (PopMarshalSettingValues.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetSettingValue(__int64 a1, unsigned int *a2, int a3, __int64 a4)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int8 CurrentIrql; // r13
  unsigned int SessionId; // eax
  __int64 PowerSettingConfiguration; // rax
  unsigned __int8 v12; // di
  signed __int32 v13; // eax
  unsigned __int8 v15; // di
  signed __int32 v16; // eax
  unsigned int v17; // [rsp+20h] [rbp-28h]

  v7 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, a4);
  v8 = v7;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  SessionId = MmGetSessionIdEx(KeGetCurrentThread()->ApcState.Process);
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, SessionId);
  if ( PowerSettingConfiguration )
  {
    v17 = PopMarshalSettingValues(PowerSettingConfiguration, a2 + 1, a3 - 4, a2);
    qword_14032EFE8 = 0LL;
    v12 = dword_14032F010;
    v13 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
    if ( v13 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v13);
    __writecr8(v12);
    KeAbPostRelease((ULONG_PTR)&PopSettingLock);
    return v17;
  }
  else
  {
    qword_14032EFE8 = 0LL;
    v15 = dword_14032F010;
    v16 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
    if ( v16 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v16);
    __writecr8(v15);
    KeAbPostRelease((ULONG_PTR)&PopSettingLock);
    return 3221225485LL;
  }
}
