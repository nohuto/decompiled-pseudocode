/*
 * XREFs of MiAssignInitialPageAttribute @ 0x140146D38
 * Callers:
 *     MiMapContiguousMemory @ 0x14009B8AC (MiMapContiguousMemory.c)
 *     MmMapLockedPagesSpecifyCache @ 0x1400DE220 (MmMapLockedPagesSpecifyCache.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x14010E214 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146848 (MiInsertViewOfPhysicalSection.c)
 *     MiMapMdlCommon @ 0x1401E3868 (MiMapMdlCommon.c)
 * Callees:
 *     MiLockPageInline @ 0x140022E70 (MiLockPageInline.c)
 */

unsigned __int8 __fastcall MiAssignInitialPageAttribute(__int64 a1, char a2)
{
  unsigned __int8 result; // al

  if ( (struct _KTHREAD *)qword_140327058 == KeGetCurrentThread() )
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
