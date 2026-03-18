/*
 * XREFs of MiDecreaseUsedPtesCount @ 0x1400E681C
 * Callers:
 *     MiResolvePageTablePage @ 0x14003FD10 (MiResolvePageTablePage.c)
 *     MiSetProtectionOnSection @ 0x140043BF0 (MiSetProtectionOnSection.c)
 *     MiDeletePageTableHierarchy @ 0x1400E4D40 (MiDeletePageTableHierarchy.c)
 *     MiDeletePhysmemVad @ 0x1401115BC (MiDeletePhysmemVad.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401EFF9C (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x1401F5AE0 (MiUnmapLargeUserPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x14002EB30 (MiLockPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

unsigned __int16 __fastcall MiDecreaseUsedPtesCount(ULONG_PTR BugCheckParameter2, unsigned __int16 a2)
{
  ULONG_PTR v4; // r9
  unsigned __int16 result; // ax

  v4 = ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 16) >> 16) & 0x3FF;
  if ( v4 < a2 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v4, a2);
  MiLockPageAtDpcInline(BugCheckParameter2);
  result = (WORD1(*(_QWORD *)(BugCheckParameter2 + 16)) & 0x3FF) - a2;
  *(_QWORD *)(BugCheckParameter2 + 16) ^= ((unsigned int)*(_QWORD *)(BugCheckParameter2 + 16) ^ (result << 16)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
