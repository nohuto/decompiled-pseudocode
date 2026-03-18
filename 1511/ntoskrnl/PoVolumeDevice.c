/*
 * XREFs of PoVolumeDevice @ 0x140541E38
 * Callers:
 *     IoCreateDevice @ 0x1403C028C (IoCreateDevice.c)
 *     IoVerifyVolume @ 0x1405FA2C0 (IoVerifyVolume.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PopGetDope @ 0x14013F194 (PopGetDope.c)
 */

void __fastcall PoVolumeDevice(__int64 a1)
{
  __int64 Dope; // rbx
  __int64 *v2; // rax
  __int64 **v3; // rcx

  Dope = PopGetDope(a1);
  if ( Dope )
  {
    ExAcquireFastMutex(&PopVolumeLock);
    v2 = (__int64 *)(Dope + 72);
    if ( !*(_QWORD *)(Dope + 72) )
    {
      v3 = (__int64 **)qword_1402DDE18;
      *v2 = (__int64)&PopVolumeDevices;
      *(_QWORD *)(Dope + 80) = v3;
      if ( *v3 != &PopVolumeDevices )
        __fastfail(3u);
      *v3 = v2;
      qword_1402DDE18 = Dope + 72;
    }
    KeReleaseGuardedMutex(&PopVolumeLock);
  }
}
