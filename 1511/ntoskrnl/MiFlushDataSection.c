/*
 * XREFs of MiFlushDataSection @ 0x14000E728
 * Callers:
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x14000C6E4 (MiLockSectionControlArea.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MmFlushSection @ 0x1400A8E90 (MmFlushSection.c)
 *     CcFlushCache @ 0x1400E8FD4 (CcFlushCache.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  int v4; // ebx
  int v5; // r9d
  SECTION_OBJECT_POINTERS *v6; // rcx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+30h] [rbp-18h] BYREF
  KIRQL OldIrql; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0;
  result = MiLockSectionControlArea(*(_QWORD **)(a1 + 40), 1, &OldIrql);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 104) > 1uLL )
      v2 = 1;
    v4 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(result + 72), OldIrql);
    v6 = *(SECTION_OBJECT_POINTERS **)(a1 + 40);
    if ( v4 )
      CcFlushCache(v6, 0LL, 0, &IoStatus);
    else
      MmFlushSection((_DWORD)v6, 0, 0, v5, (__int64)&IoStatus, 1);
    return v2;
  }
  return result;
}
