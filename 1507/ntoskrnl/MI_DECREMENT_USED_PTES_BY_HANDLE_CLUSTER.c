/*
 * XREFs of MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14003A4E8
 * Callers:
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiResolvePageTablePage @ 0x1400C0790 (MiResolvePageTablePage.c)
 *     MiDeletePhysmemVad @ 0x140138DDC (MiDeletePhysmemVad.c)
 *     MiDeletePageTablesForPhysicalRange @ 0x1402244DC (MiDeletePageTablesForPhysicalRange.c)
 *     MiUnmapLargeUserPages @ 0x14022FBF4 (MiUnmapLargeUserPages.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

unsigned __int16 __fastcall MI_DECREMENT_USED_PTES_BY_HANDLE_CLUSTER(ULONG_PTR BugCheckParameter2, unsigned __int16 a2)
{
  ULONG_PTR v4; // r9
  unsigned int v5; // edi
  unsigned __int16 result; // ax

  v4 = ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 16) >> 16) & 0x3FF;
  if ( v4 < a2 )
    KeBugCheckEx(0x1Au, 0x41790uLL, BugCheckParameter2, v4, a2);
  v5 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( *(__int64 *)(BugCheckParameter2 + 24) < 0
         || _interlockedbittestandset64((volatile signed __int32 *)(BugCheckParameter2 + 24), 0x3FuLL) );
  }
  result = (WORD1(*(_QWORD *)(BugCheckParameter2 + 16)) & 0x3FF) - a2;
  *(_QWORD *)(BugCheckParameter2 + 16) ^= ((unsigned int)*(_QWORD *)(BugCheckParameter2 + 16) ^ (result << 16)) & 0x3FF0000;
  _InterlockedAnd64((volatile signed __int64 *)(BugCheckParameter2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  return result;
}
