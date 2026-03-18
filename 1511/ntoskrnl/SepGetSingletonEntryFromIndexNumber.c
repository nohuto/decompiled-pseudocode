/*
 * XREFs of SepGetSingletonEntryFromIndexNumber @ 0x140008104
 * Callers:
 *     SepInitSingletonEntry @ 0x140006DD0 (SepInitSingletonEntry.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14008A220 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x1400CFBA4 (SepCleanupMarkedForDeletionEntries.c)
 *     SepSetSingletonEntry @ 0x140201014 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402010E8 (SepValidateAndCopyGlobalEntry.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExAcquireSpinLockShared @ 0x140079490 (ExAcquireSpinLockShared.c)
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
