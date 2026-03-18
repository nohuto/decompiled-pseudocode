/*
 * XREFs of MiFlushDataSection @ 0x1400FD7B0
 * Callers:
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 * Callees:
 *     MiLockSectionControlArea @ 0x1400218CC (MiLockSectionControlArea.c)
 *     MmFlushSection @ 0x140022558 (MmFlushSection.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     CcFlushCache @ 0x14008F434 (CcFlushCache.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  int v5; // ebx
  SECTION_OBJECT_POINTERS *v6; // rcx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+30h] [rbp-18h] BYREF
  KIRQL OldIrql; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  result = MiLockSectionControlArea(*(_QWORD **)(a1 + 40), 1, &OldIrql);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 112) > 1uLL )
      *a2 = 1;
    v5 = *(_DWORD *)(result + 88);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(result + 72), OldIrql);
    v6 = *(SECTION_OBJECT_POINTERS **)(a1 + 40);
    if ( v5 )
    {
      CcFlushCache(v6, &CcFlushForImageSection, 0, &IoStatus);
      return (unsigned int)IoStatus.Status;
    }
    else
    {
      return MmFlushSection((__int64)v6, 0LL, 0LL);
    }
  }
  return result;
}
