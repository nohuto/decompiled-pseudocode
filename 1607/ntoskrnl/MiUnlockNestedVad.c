/*
 * XREFs of MiUnlockNestedVad @ 0x14050B010
 * Callers:
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     MiMarkSharedImageCfgBits @ 0x1400E7910 (MiMarkSharedImageCfgBits.c)
 *     MiUpControlAreaRefs @ 0x14010A768 (MiUpControlAreaRefs.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 */

unsigned __int64 __fastcall MiUnlockNestedVad(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 40;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 40));
  return KeAbPostRelease(v1);
}
