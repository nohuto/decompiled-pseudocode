/*
 * XREFs of PoVolumeDevice @ 0x14056C464
 * Callers:
 *     IoCreateDevice @ 0x1404734C0 (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x140623CF0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x140145054 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  _QWORD *v2; // rax
  _QWORD *v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (_QWORD *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v3 = (_QWORD *)qword_140303CD8;
      if ( *(__int64 **)qword_140303CD8 != &PopVolumeDevices )
        __fastfail(3u);
      *v2 = &PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      *v3 = v2;
      qword_140303CD8 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
