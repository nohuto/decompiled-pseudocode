/*
 * XREFs of PopFxInsertAcpiDevice @ 0x140202B0C
 * Callers:
 *     PopFxAcpiRegisterDevice @ 0x14020E570 (PopFxAcpiRegisterDevice.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

__int64 __fastcall PopFxInsertAcpiDevice(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&PopFxDeviceListLock, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&PopFxDeviceListLock, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&PopFxDeviceListLock, v5, (ULONG_PTR)&PopFxDeviceListLock);
  if ( v7 )
    v7[26] |= 1u;
  v8 = (_QWORD *)qword_1403045A8;
  v9 = (_QWORD *)(a3 + 176);
  if ( *(__int64 **)qword_1403045A8 != &PopFxAcpiDeviceList )
    __fastfail(3u);
  *v9 = &PopFxAcpiDeviceList;
  *(_QWORD *)(a3 + 184) = v8;
  *v8 = v9;
  qword_1403045A8 = a3 + 176;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PopFxDeviceListLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&PopFxDeviceListLock);
  KeAbPostRelease((ULONG_PTR)&PopFxDeviceListLock);
  return KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v10, v11, v12);
}
