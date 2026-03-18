/*
 * XREFs of MiTrimSegmentCache @ 0x1401701C0
 * Callers:
 *     MmResourcesAvailable @ 0x140013FD0 (MmResourcesAvailable.c)
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     MiScanLeafNonPagedPool @ 0x140063F60 (MiScanLeafNonPagedPool.c)
 *     MiExpandNonPagedPool @ 0x14006B0B4 (MiExpandNonPagedPool.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 */

void MiTrimSegmentCache()
{
  int v0; // ecx
  int v1; // eax

  v0 = dword_14034E7B0;
  if ( !dword_14034E7B0 )
  {
    v1 = 0;
    if ( (__int64 *)qword_140354250 != &qword_140354250 )
    {
      dword_14034E7B0 = 31;
LABEL_10:
      KeSetEvent(&stru_1403541A8, 0, 0);
      return;
    }
    if ( (__int64 *)qword_140354260 != &qword_140354260 )
    {
      v0 = 31;
      v1 = 1;
      dword_14034E7B0 = 31;
    }
    if ( (unsigned __int64)qword_14034E7A8 < 0x4000 && !v1 )
    {
      if ( v0 )
        return;
      v1 = 1;
      dword_14034E7B0 = 31;
    }
    if ( v1 == 1 )
      goto LABEL_10;
  }
}
