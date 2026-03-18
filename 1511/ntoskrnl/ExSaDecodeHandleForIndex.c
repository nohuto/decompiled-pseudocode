/*
 * XREFs of ExSaDecodeHandleForIndex @ 0x14012CDD8
 * Callers:
 *     ExpAllocateFannedOutPushLock @ 0x14012CC3C (ExpAllocateFannedOutPushLock.c)
 *     ExpAcquireFannedOutPushLockExclusive @ 0x14012CCF4 (ExpAcquireFannedOutPushLockExclusive.c)
 *     ExpReleaseFannedOutPushLockExclusive @ 0x14012CD78 (ExpReleaseFannedOutPushLockExclusive.c)
 *     ExpTryAcquireFannedOutPushLockExclusive @ 0x1402139BC (ExpTryAcquireFannedOutPushLockExclusive.c)
 * Callees:
 *     ExpSaBinaryArrayGet @ 0x140167010 (ExpSaBinaryArrayGet.c)
 */

__int64 __fastcall ExSaDecodeHandleForIndex(unsigned __int64 a1, unsigned int a2)
{
  return ExpSaBinaryArrayGet(*(_QWORD *)(ExSaPageArrays + 8LL * a2), ((unsigned int)a1 >> 13) & 0x3FFFF)
       + 8 * ((a1 >> 4) & 0x1FF);
}
