/*
 * XREFs of MiAssignInitialPageAttribute @ 0x14013F0EC
 * Callers:
 *     MmMapLockedPagesSpecifyCache @ 0x14004B6B0 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapContiguousMemory @ 0x1400C0CB8 (MiMapContiguousMemory.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1401D35FC (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 */

unsigned __int8 __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 result; // al

  if ( (struct _KTHREAD *)qword_1402FEC88 == KeGetCurrentThread() )
    result = 17;
  else
    result = MiLockPageInline(a1);
  if ( (*(_BYTE *)(a1 + 34) & 0xC0) == 0xC0 )
    *(_BYTE *)(a1 + 34) = (a2 << 6) | *(_BYTE *)(a1 + 34) & 0x3F;
  if ( result != 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(result);
  }
  return result;
}
