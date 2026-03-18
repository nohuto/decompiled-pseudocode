/*
 * XREFs of PnpBusTypeGuidGet @ 0x140553C2C
 * Callers:
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 */

__int64 __fastcall PnpBusTypeGuidGet(unsigned __int16 a1, _OWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned __int8 CurrentIrql; // si
  unsigned int v9; // ebx
  unsigned __int8 v10; // di
  signed __int32 v11; // eax

  v6 = KeAbPreAcquire((ULONG_PTR)&PnpBusTypeGuidLock, 0LL, 0LL, a4);
  v7 = v6;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)&PnpBusTypeGuidLock, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)&PnpBusTypeGuidLock, v6);
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  qword_14034B168 = (__int64)KeGetCurrentThread();
  dword_14034B190 = CurrentIrql;
  if ( a1 >= (unsigned int)PnpBusTypeGuidCount )
  {
    v9 = -1073741772;
  }
  else
  {
    v9 = 0;
    *a2 = *((_OWORD *)PnpBusTypeGuidArray + a1);
  }
  qword_14034B168 = 0LL;
  v10 = dword_14034B190;
  v11 = _InterlockedCompareExchange((volatile signed __int32 *)&PnpBusTypeGuidLock, 1, 0);
  if ( v11 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PnpBusTypeGuidLock, v11);
  __writecr8(v10);
  KeAbPostRelease((ULONG_PTR)&PnpBusTypeGuidLock);
  return v9;
}
