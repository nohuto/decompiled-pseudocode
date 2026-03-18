/*
 * XREFs of MiUnlockNestedVad @ 0x14053BDD0
 * Callers:
 *     MiUpControlAreaRefs @ 0x1400013E8 (MiUpControlAreaRefs.c)
 *     MiMarkSharedImageCfgBits @ 0x14003A5B0 (MiMarkSharedImageCfgBits.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 */

void __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  KeAbPostRelease(v1);
}
