/*
 * XREFs of ExpReleaseFannedOutPushLockExclusive @ 0x14012CD78
 * Callers:
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70 (ExReleaseAutoExpandPushLockExclusive.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeQueryMaximumProcessorCountEx @ 0x14009CFE0 (KeQueryMaximumProcessorCountEx.c)
 *     ExSaDecodeHandleForIndex @ 0x14012CDD8 (ExSaDecodeHandleForIndex.c)
 */

int __fastcall ExpReleaseFannedOutPushLockExclusive(__int64 a1)
{
  volatile signed __int64 *v2; // rax
  unsigned int v3; // ebx
  unsigned int i; // edi

  LODWORD(v2) = KeQueryMaximumProcessorCountEx(0xFFFFu);
  v3 = 0;
  for ( i = (unsigned int)v2; v3 < i; ++v3 )
  {
    v2 = (volatile signed __int64 *)ExSaDecodeHandleForIndex(a1, v3);
    if ( (_InterlockedExchangeAdd64(v2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      LODWORD(v2) = ExfTryToWakePushLock(v2);
  }
  return (int)v2;
}
