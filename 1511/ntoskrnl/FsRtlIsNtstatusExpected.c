/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x1400E9E10
 * Callers:
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     CcSetFileSizesEx @ 0x1400AED28 (CcSetFileSizesEx.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     FsRtlCancelNotify @ 0x1400C94AC (FsRtlCancelNotify.c)
 *     CcMdlWriteComplete2 @ 0x1400F23A4 (CcMdlWriteComplete2.c)
 *     CcAsyncReadPrefetch @ 0x1400FC10C (CcAsyncReadPrefetch.c)
 *     CcPerformReadAhead @ 0x1400FC4E4 (CcPerformReadAhead.c)
 *     FsRtlNormalizeNtstatus @ 0x140103D54 (FsRtlNormalizeNtstatus.c)
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     RawDispatch @ 0x1404D5D20 (RawDispatch.c)
 *     FsRtlCopyRead @ 0x1405F315C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x1405F33C8 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x1405F3A80 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x1405F3CC0 (FsRtlPrepareMdlWriteDev.c)
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
