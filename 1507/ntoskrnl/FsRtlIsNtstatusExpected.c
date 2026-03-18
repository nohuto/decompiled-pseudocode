/*
 * XREFs of FsRtlIsNtstatusExpected @ 0x140128CBC
 * Callers:
 *     CcPerformReadAhead @ 0x1400333F0 (CcPerformReadAhead.c)
 *     CcGetVacbMiss @ 0x14003F1B0 (CcGetVacbMiss.c)
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     FsRtlCancelNotify @ 0x140074054 (FsRtlCancelNotify.c)
 *     CcAcquireByteRangeForWrite @ 0x140075D20 (CcAcquireByteRangeForWrite.c)
 *     CcSetFileSizesEx @ 0x140078B30 (CcSetFileSizesEx.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     CcAsyncReadPrefetch @ 0x14011D7C4 (CcAsyncReadPrefetch.c)
 *     CcMdlWriteComplete2 @ 0x140128BC4 (CcMdlWriteComplete2.c)
 *     FsRtlNormalizeNtstatus @ 0x140133EC4 (FsRtlNormalizeNtstatus.c)
 *     RawDispatch @ 0x14040B7FC (RawDispatch.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlCopyRead @ 0x14066BE8C (FsRtlCopyRead.c)
 *     FsRtlCopyWrite @ 0x14066C1B4 (FsRtlCopyWrite.c)
 *     FsRtlMdlReadDev @ 0x14066C8C0 (FsRtlMdlReadDev.c)
 *     FsRtlPrepareMdlWriteDev @ 0x14066CBCC (FsRtlPrepareMdlWriteDev.c)
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
