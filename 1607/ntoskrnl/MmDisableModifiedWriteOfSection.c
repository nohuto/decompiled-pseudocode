/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x1400AA6AC
 * Callers:
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     CcSetPrivateWriteFile @ 0x1401B240C (CcSetPrivateWriteFile.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1400218CC (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(_QWORD *a1)
{
  bool v1; // bl
  __int64 v2; // rax
  KIRQL OldIrql; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v2 = MiLockSectionControlArea(a1, 1, &OldIrql);
  if ( v2 )
  {
    if ( *(_QWORD *)(v2 + 40) )
      v1 = (*(_DWORD *)(v2 + 56) & 8) != 0;
    else
      *(_DWORD *)(v2 + 56) |= 8u;
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v2 + 72), OldIrql);
    LOBYTE(v2) = v1;
  }
  return v2;
}
