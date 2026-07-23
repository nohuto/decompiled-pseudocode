/*
 * XREFs of PspGetProperty @ 0x1400EC13C
 * Callers:
 *     PspGetJobProperty @ 0x1400A7738 (PspGetJobProperty.c)
 *     PsGetThreadProperty @ 0x1400EC3B0 (PsGetThreadProperty.c)
 * Callees:
 *     KxAcquireSpinLock @ 0x140092260 (KxAcquireSpinLock.c)
 *     KxReleaseSpinLock @ 0x1400953A0 (KxReleaseSpinLock.c)
 *     PspFindPropertySetEntry @ 0x1400EC1D8 (PspFindPropertySetEntry.c)
 *     ObfReferenceObjectWithTag @ 0x1400EC370 (ObfReferenceObjectWithTag.c)
 */

__int64 __fastcall PspGetProperty(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // esi
  unsigned __int8 CurrentIrql; // r15
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 PropertySetEntry; // rax
  __int64 v11; // rbx

  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  KxAcquireSpinLock((PKSPIN_LOCK)(a1 + 16));
  PropertySetEntry = PspFindPropertySetEntry(a1, a2, v8, v9);
  v11 = PropertySetEntry;
  if ( PropertySetEntry )
    ObfReferenceObjectWithTag(*(PVOID *)(PropertySetEntry + 24), 0x72507350u);
  KxReleaseSpinLock((PKSPIN_LOCK)(a1 + 16));
  __writecr8(CurrentIrql);
  if ( v11 )
    *a3 = *(_QWORD *)(v11 + 24);
  else
    return (unsigned int)-1073741275;
  return v6;
}
