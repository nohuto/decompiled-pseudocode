/*
 * XREFs of EtwpIsGuidAllowed @ 0x140491F64
 * Callers:
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x14048EBC8 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x140572A54 (EtwpDisallowedGuidAddition.c)
 *     EtwpDisallowedGuidRemoval @ 0x14069FB14 (EtwpDisallowedGuidRemoval.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C8640 (ExfReleasePushLockShared.c)
 *     bsearch @ 0x14014DAA0 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  unsigned __int64 *v2; // rbx
  __int64 v5; // rdi
  bool v6; // si
  unsigned __int16 v7; // ax

  v2 = (unsigned __int64 *)(a1 + 688);
  v5 = KeAbPreAcquire(a1 + 688, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, v5, (ULONG_PTR)v2);
  v6 = 1;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = *(_WORD *)(a1 + 880);
  if ( v7 )
    v6 = bsearch(a2, *(const void **)(a1 + 888), v7, 0x10uLL, EtwpCompareGuid) == 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
