/*
 * XREFs of EtwpBufferingModeCompressionFlush @ 0x140229EA0
 * Callers:
 *     EtwpBufferingModeFlush @ 0x1406A6848 (EtwpBufferingModeFlush.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     EtwpCompressPendingBuffers @ 0x14022A2B4 (EtwpCompressPendingBuffers.c)
 *     EtwpRelinquishCompressionTarget @ 0x14022AC34 (EtwpRelinquishCompressionTarget.c)
 */

unsigned __int64 __fastcall EtwpBufferingModeCompressionFlush(__int64 a1)
{
  unsigned __int64 result; // rax
  _BYTE *v3; // rax
  _BYTE *v4; // rdi

  result = *(unsigned int *)(a1 + 976);
  if ( (_DWORD)result )
  {
    EtwpCompressPendingBuffers();
    v3 = (_BYTE *)KeAbPreAcquire(a1 + 952, 0LL, 0);
    v4 = v3;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 952), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 952), v3, a1 + 952);
    if ( v4 )
      v4[26] |= 1u;
    EtwpRelinquishCompressionTarget(a1);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 952), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 952));
    return KeAbPostRelease(a1 + 952);
  }
  return result;
}
