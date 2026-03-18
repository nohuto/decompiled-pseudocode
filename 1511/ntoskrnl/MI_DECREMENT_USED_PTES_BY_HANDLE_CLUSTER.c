/*
 * XREFs of MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x1400E12D8
 * Callers:
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     MiDeletePhysmemVad @ 0x1401061CC (MiDeletePhysmemVad.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1401DF250 (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x1401E27F0 (MiUnmapLargeUserPages.c)
 * Callees:
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

unsigned __int16 __fastcall MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // di
  ULONG_PTR v5; // r9
  unsigned __int16 result; // ax

  v4 = a2;
  v5 = ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 16) >> 14) & 0x3FF;
  if ( v5 < (unsigned __int16)a2 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v5, (unsigned __int16)a2);
  MiLockPageAtDpcInline(BugCheckParameter2, a2, a3);
  result = ((*(_QWORD *)(BugCheckParameter2 + 16) >> 14) & 0x3FF) - v4;
  *(_QWORD *)(BugCheckParameter2 + 16) ^= ((unsigned int)*(_QWORD *)(BugCheckParameter2 + 16) ^ (result << 14)) & 0xFFC000;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
