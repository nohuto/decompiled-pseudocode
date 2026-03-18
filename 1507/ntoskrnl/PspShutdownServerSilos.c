/*
 * XREFs of PspShutdownServerSilos @ 0x1406C292C
 * Callers:
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PsGetServerSiloState @ 0x140117518 (PsGetServerSiloState.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     PsTerminateServerSilo @ 0x1402443F4 (PsTerminateServerSilo.c)
 *     PspReferenceSiloObject @ 0x14024445C (PspReferenceSiloObject.c)
 */

void __fastcall PspShutdownServerSilos(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int8 CurrentIrql; // di
  signed __int8 v7; // cf
  __int64 *v8; // rdx
  __int64 *v9; // rbx
  void *v10; // rcx
  unsigned __int8 v11; // di
  signed __int32 v12; // eax
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rbx
  unsigned __int8 v16; // bl
  signed __int32 v17; // eax

  v4 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, a4);
  v5 = v4;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  v7 = _interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0);
  if ( !v7 )
    ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v4);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
LABEL_5:
  v8 = (__int64 *)PspSiloList;
  qword_14032C468 = (__int64)KeGetCurrentThread();
  dword_14032C490 = CurrentIrql;
  while ( v8 != &PspSiloList )
  {
    v9 = v8 - 4;
    if ( v8 != (__int64 *)32 && v9[32] && (unsigned int)PsGetServerSiloState((__int64)(v8 - 4)) == 1 )
    {
      PspReferenceSiloObject(v10);
      qword_14032C468 = 0LL;
      v11 = dword_14032C490;
      v12 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
      if ( v12 )
        ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v12);
      __writecr8(v11);
      KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
      PsTerminateServerSilo((__int64)v9);
      PspDereferenceSiloObject(v9);
      v14 = KeAbPreAcquire((ULONG_PTR)&PspSiloListLock, 0LL, 0LL, v13);
      v15 = v14;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(1uLL);
      v7 = _interlockedbittestandreset((volatile signed __int32 *)&PspSiloListLock, 0);
      if ( !v7 )
        ExpAcquireFastMutexContended((ULONG_PTR)&PspSiloListLock, v14);
      if ( v15 )
        *(_BYTE *)(v15 + 26) |= 1u;
      goto LABEL_5;
    }
    v8 = (__int64 *)*v8;
  }
  qword_14032C468 = 0LL;
  v16 = dword_14032C490;
  v17 = _InterlockedCompareExchange((volatile signed __int32 *)&PspSiloListLock, 1, 0);
  if ( v17 )
    ExpReleaseFastMutexContended((volatile signed __int32 *)&PspSiloListLock, v17);
  __writecr8(v16);
  KeAbPostRelease((ULONG_PTR)&PspSiloListLock);
}
