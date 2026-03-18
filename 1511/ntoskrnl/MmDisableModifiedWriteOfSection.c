/*
 * XREFs of MmDisableModifiedWriteOfSection @ 0x14000A624
 * Callers:
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     CcSetPrivateWriteFile @ 0x1401A96C8 (CcSetPrivateWriteFile.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14000C6E4 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

char __fastcall MmDisableModifiedWriteOfSection(__int64 a1)
{
  bool v1; // bl
  __int64 v2; // rax
  KIRQL OldIrql; // [rsp+38h] [rbp+10h] BYREF

  v1 = 1;
  v2 = MiLockSectionControlArea(a1, 1LL, &OldIrql);
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
