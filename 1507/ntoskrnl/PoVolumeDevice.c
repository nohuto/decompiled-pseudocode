/*
 * XREFs of PoVolumeDevice @ 0x1405B7EDC
 * Callers:
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140674678 (IoVerifyVolume.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PopGetDope @ 0x14016C9C0 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rdi
  __int64 v2; // r9
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 *v6; // rax
  __int64 **v7; // rcx
  unsigned __int8 v8; // bl
  signed __int32 v9; // eax

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    v3 = KeAbPreAcquire((ULONG_PTR)&PopVolumeLock, 0LL, 0LL, v2);
    v4 = v3;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&PopVolumeLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&PopVolumeLock, v3);
    if ( v4 )
      *(_BYTE *)(v4 + 26) |= 1u;
    qword_14032E608 = (__int64)KeGetCurrentThread();
    dword_14032E630 = CurrentIrql;
    v6 = (__int64 *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v7 = (__int64 **)qword_14032E3D8;
      *v6 = (__int64)&PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v7;
      if ( *v7 != &PopVolumeDevices )
        __fastfail(3u);
      *v7 = v6;
      qword_14032E3D8 = Dope + 72;
    }
    qword_14032E608 = 0LL;
    v8 = dword_14032E630;
    v9 = _InterlockedCompareExchange((volatile signed __int32 *)&PopVolumeLock, 1, 0);
    if ( v9 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&PopVolumeLock, v9);
    __writecr8(v8);
    KeAbPostRelease((ULONG_PTR)&PopVolumeLock);
  }
}
