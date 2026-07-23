/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1400A9C60
 * Callers:
 *     CcGetVacbMiss @ 0x1400182AC (CcGetVacbMiss.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     CcAsyncReadPrefetch @ 0x14006DBE0 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 *     CcSetFileSizesEx @ 0x140072FCC (CcSetFileSizesEx.c)
 *     FsRtlCancelNotify @ 0x1400A0A1C (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x1400B1818 (CcMdlWriteComplete2.c)
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     FsRtlNormalizeNtstatus @ 0x14010F85C (FsRtlNormalizeNtstatus.c)
 *     RawDispatch @ 0x1403EAF28 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlCopyRead @ 0x14061D480 (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D6EC (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DE8C (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E0CC (FsRtlPrepareMdlWriteDev.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsNtstatusExpected(NTSTATUS Exception)
{
  bool v1; // zf

  if ( Exception > -1073741676 )
  {
    if ( Exception == -1073741674 || Exception == -1073741654 || Exception == -1073740791 )
      return 0;
    v1 = Exception == -1073740768;
    goto LABEL_6;
  }
  if ( Exception != -1073741676 )
  {
    if ( Exception == 0x80000000 )
      return 1;
    if ( Exception > -2147483645 && Exception != -1073741819 && Exception != -1073741795 )
    {
      if ( Exception <= -1073741755 )
        return 1;
      if ( Exception > -1073741753 )
      {
        v1 = Exception == -1073741684;
LABEL_6:
        if ( !v1 )
          return 1;
      }
    }
  }
  return 0;
}
