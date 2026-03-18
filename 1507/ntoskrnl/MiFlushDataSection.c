/*
 * XREFs of MiFlushDataSection @ 0x1400E07B8
 * Callers:
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 * Callees:
 *     MmFlushSection @ 0x140085220 (MmFlushSection.c)
 *     MiLockSectionControlArea @ 0x140086F60 (MiLockSectionControlArea.c)
 *     CcFlushCache @ 0x1400F8B70 (CcFlushCache.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFlushDataSection(__int64 a1, _DWORD *a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  int v6; // edi
  SECTION_OBJECT_POINTERS *v7; // rcx
  struct _IO_STATUS_BLOCK IoStatus; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]
  unsigned __int8 v10; // [rsp+50h] [rbp+8h] BYREF

  *a2 = 0;
  result = MiLockSectionControlArea(*(_QWORD **)(a1 + 40), 1, &v10);
  if ( result )
  {
    if ( *(_DWORD *)(result + 92) || *(_QWORD *)(result + 104) > 1uLL )
      *a2 = 1;
    v6 = *(_DWORD *)(result + 88);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(result + 72, retaddr);
    else
      *(_DWORD *)(result + 72) = 0;
    __writecr8(v10);
    v7 = *(SECTION_OBJECT_POINTERS **)(a1 + 40);
    if ( v6 )
    {
      CcFlushCache(v7, &CcFlushForImageSection, 0, &IoStatus);
      return (unsigned int)IoStatus.Status;
    }
    else
    {
      return MmFlushSection((__int64)v7, 0LL, 0LL, v5, &IoStatus, 1);
    }
  }
  return result;
}
