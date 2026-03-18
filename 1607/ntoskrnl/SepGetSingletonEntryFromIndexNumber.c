/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x14007CEE4
 * Callers:
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000E3E0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepInitSingletonEntry @ 0x14007CEA4 (SepInitSingletonEntry.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140091F30 (SepCleanupMarkedForDeletionEntries.c)
 *     SepSetSingletonEntry @ 0x14021AB48 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AC1C (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x1400EB1D0 (ExAcquireSpinLockShared.c)
 */

__int64 __fastcall SepGetSingletonEntryFromIndexNumber(unsigned int a1)
{
  char v1; // si
  __int64 v2; // rdi
  unsigned int v3; // ebx
  KIRQL v4; // al

  v1 = a1;
  v2 = 0LL;
  v3 = a1 >> 6;
  v4 = ExAcquireSpinLockShared(SepSingletonGlobal);
  if ( v3 < *((_DWORD *)SepSingletonGlobal + 1) )
    v2 = *(_QWORD *)(*((_QWORD *)SepSingletonGlobal + 1) + 8LL * v3) + 24LL * (v1 & 0x3F);
  ExReleaseSpinLockShared(SepSingletonGlobal, v4);
  return v2;
}
