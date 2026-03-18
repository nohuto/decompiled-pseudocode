/*
 * XREFs of MiTrimSegmentCache @ 0x14014231C
 * Callers:
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     MmResourcesAvailable @ 0x140041CA0 (MmResourcesAvailable.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiScanLeafNonPagedPool @ 0x1400B3980 (MiScanLeafNonPagedPool.c)
 * Callees:
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 */

void MiTrimSegmentCache()
{
  int v0; // ecx
  int v1; // eax

  v0 = dword_1402FE2B0;
  if ( !dword_1402FE2B0 )
  {
    v1 = 0;
    if ( (__int64 *)qword_1403002C0 != &qword_1403002C0 )
    {
      dword_1402FE2B0 = 31;
LABEL_10:
      KeSetEvent(&stru_140300218, 0, 0);
      return;
    }
    if ( (__int64 *)qword_1403002D0 != &qword_1403002D0 )
    {
      v0 = 31;
      v1 = 1;
      dword_1402FE2B0 = 31;
    }
    if ( (unsigned __int64)qword_1402FE2A8 < 0x4000 && !v1 )
    {
      if ( v0 )
        return;
      v1 = 1;
      dword_1402FE2B0 = 31;
    }
    if ( v1 == 1 )
      goto LABEL_10;
  }
}
