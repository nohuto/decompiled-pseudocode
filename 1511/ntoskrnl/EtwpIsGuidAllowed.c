/*
 * XREFs of EtwpIsGuidAllowed @ 0x14046D428
 * Callers:
 *     EtwpDisallowedGuidRemoval @ 0x1403B5278 (EtwpDisallowedGuidRemoval.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpIsRegEntryAllowed @ 0x1404CDCE4 (EtwpIsRegEntryAllowed.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     bsearch @ 0x140144680 (bsearch.c)
 */

bool __fastcall EtwpIsGuidAllowed(__int64 a1, const void *a2)
{
  unsigned __int64 *v2; // rbx
  __int64 v5; // rdi
  bool v6; // si
  unsigned __int16 v7; // ax

  v2 = (unsigned __int64 *)(a1 + 704);
  v5 = KeAbPreAcquire(a1 + 704, 0LL, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v2, v5, (ULONG_PTR)v2);
  v6 = 1;
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  v7 = *(_WORD *)(a1 + 896);
  if ( v7 )
    v6 = bsearch(a2, *(const void **)(a1 + 904), v7, 0x10uLL, EtwpCompareGuid) == 0LL;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v2, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v2);
  KeAbPostRelease((ULONG_PTR)v2);
  return v6;
}
