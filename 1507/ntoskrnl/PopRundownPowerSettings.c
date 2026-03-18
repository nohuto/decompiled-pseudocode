/*
 * XREFs of PopRundownPowerSettings @ 0x1406B5520
 * Callers:
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopDiagTracePowerSetting @ 0x1404E5768 (PopDiagTracePowerSetting.c)
 */

void __fastcall PopRundownPowerSettings(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  PVOID *v7; // rbx
  __int64 v8; // rdi
  _DWORD *v9; // rax
  unsigned __int8 v10; // bl
  signed __int32 v11; // eax

  v4 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = (PVOID *)PopPowerSettings;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  dword_14032F010 = CurrentIrql;
  if ( PopPowerSettings != &PopPowerSettings )
  {
    v8 = dword_14032E84C;
    do
    {
      v9 = v7[v8 + 8];
      if ( v9 )
        PopDiagTracePowerSetting(1, (ULONGLONG)(v7 + 4), v9[1], (__int64)(v9 + 3));
      v7 = (PVOID *)*v7;
    }
    while ( v7 != &PopPowerSettings );
  }
  qword_14032EFE8 = 0LL;
  v10 = dword_14032F010;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
}
