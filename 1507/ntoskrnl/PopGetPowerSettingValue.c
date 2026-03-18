/*
 * XREFs of PopGetPowerSettingValue @ 0x14012BFE4
 * Callers:
 *     PopScanIdleList @ 0x1400D0490 (PopScanIdleList.c)
 *     PopBatteryUpdateAlarms @ 0x1405994E4 (PopBatteryUpdateAlarms.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     PopFindPowerSettingConfiguration @ 0x140500508 (PopFindPowerSettingConfiguration.c)
 */

__int64 __fastcall PopGetPowerSettingValue(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4,
        __int64 a5,
        unsigned int *a6)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 PowerSettingConfiguration; // rax
  __int64 v13; // rdx
  unsigned int v14; // ecx
  unsigned int v15; // ebx
  unsigned __int8 v16; // di
  signed __int32 v17; // eax

  v9 = KeAbPreAcquire((ULONG_PTR)&PopSettingLock, 0LL, 0LL, (__int64)a4);
  v10 = v9;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopSettingLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PopSettingLock, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_14032EFE8 = (__int64)KeGetCurrentThread();
  if ( a3 > 1 )
    a3 = dword_14032E84C;
  dword_14032F010 = CurrentIrql;
  PowerSettingConfiguration = PopFindPowerSettingConfiguration(a1, 0xFFFFFFFFLL);
  if ( PowerSettingConfiguration && (v13 = *(_QWORD *)(PowerSettingConfiguration + 8LL * (int)a3 + 64)) != 0 )
  {
    v14 = *(_DWORD *)(v13 + 4);
    *a6 = v14;
    if ( v14 > 4 )
    {
      v15 = -1073741306;
    }
    else
    {
      v15 = 0;
      memmove(a4, (const void *)(v13 + 12), v14);
    }
  }
  else
  {
    v15 = -1073741811;
  }
  qword_14032EFE8 = 0LL;
  v16 = dword_14032F010;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)&PopSettingLock, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PopSettingLock, v17);
  __writecr8(v16);
  KeAbPostRelease((ULONG_PTR)&PopSettingLock);
  return v15;
}
