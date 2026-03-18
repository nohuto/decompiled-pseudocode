/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1400AB6F8
 * Callers:
 *     CcGetVacbMiss @ 0x14001872C (CcGetVacbMiss.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     CcAsyncReadPrefetch @ 0x14006E060 (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x140072334 (CcPerformReadAhead.c)
 *     CcSetFileSizesEx @ 0x14007344C (CcSetFileSizesEx.c)
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x1400B3998 (CcMdlWriteComplete2.c)
 *     CcAcquireByteRangeForWrite @ 0x1400CBDC0 (CcAcquireByteRangeForWrite.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     FsRtlNormalizeNtstatus @ 0x14010F2F8 (FsRtlNormalizeNtstatus.c)
 *     RawDispatch @ 0x1403E98F8 (RawDispatch.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlCopyRead @ 0x14061D3CC (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14061D638 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14061DDD8 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14061E018 (FsRtlPrepareMdlWriteDev.c)
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
