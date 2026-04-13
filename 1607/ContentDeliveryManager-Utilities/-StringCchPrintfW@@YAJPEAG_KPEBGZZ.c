/*
 * XREFs of ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001648
 * Callers:
 *     ?ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z @ 0x1800028EC (-ReportFailure_Msg@details@wil@@YAXPEAXIPEBD110W4FailureType@2@J1PEAD@Z.c)
 *     ?s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z @ 0x180005D00 (-s_GetTaskPoolTlsSlot@ComTaskPool@Internal@Windows@@CAJPEAK@Z.c)
 *     ?Acquire@?$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000CC6C (-Acquire@-$ProcessLocalStorageData@VFeatureStateData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?Acquire@?$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDPEAPEAV123@@Z @ 0x18000D17C (-Acquire@-$ProcessLocalStorageData@UProcessLocalData@details_abi@wil@@@details_abi@wil@@SAJPEBDP.c)
 *     ?ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18001EB80 (-ToString@HealthTrackingInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char_tr.c)
 *     ?ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18001ECB8 (-ToString@PlacementReportedInfo@details@Health@CreativeFramework@@QEAA-AV-$basic_string@GU-$char.c)
 *     ??0?$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D014 (--0-$OffersHealthTracker@$0BA@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D150 (--0-$OffersHealthTracker@$0P@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D28C (--0-$OffersHealthTracker@$0O@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D3C8 (--0-$OffersHealthTracker@$0N@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D504 (--0-$OffersHealthTracker@$0M@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D640 (--0-$OffersHealthTracker@$0L@$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D77C (--0-$OffersHealthTracker@$02$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D8B8 (--0-$OffersHealthTracker@$01$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ??0?$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ @ 0x18002D9F4 (--0-$OffersHealthTracker@$00$00@details@Health@CreativeFramework@@AEAA@XZ.c)
 *     ?ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z @ 0x1800534BC (-ReportFailure_CaughtExceptionMsg@details@wil@@YAJPEAXIPEBD110W4FailureType@2@1PEAD@Z.c)
 *     _wil::details::RecognizeCaughtExceptionFromCallback_::_1_::catch$0 @ 0x180059836 (_wil--details--RecognizeCaughtExceptionFromCallback_--_1_--catch$0.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$1 @ 0x180059903 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$1.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$4 @ 0x1800599D8 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$4.c)
 *     _wil::details::ResultFromCaughtExceptionInternal_::_1_::catch$5 @ 0x180059A26 (_wil--details--ResultFromCaughtExceptionInternal_--_1_--catch$5.c)
 * Callees:
 *     <none>
 */

__int64 StringCchPrintfW(wchar_t *Buffer, __int64 a2, const unsigned __int16 *a3, ...)
{
  int v4; // edi
  unsigned __int64 v5; // rbx
  int v6; // eax
  va_list Args; // [rsp+68h] [rbp+20h] BYREF

  va_start(Args, a3);
  v4 = 0;
  if ( (unsigned __int64)(a2 - 1) > 0x7FFFFFFE )
    v4 = -2147024809;
  if ( v4 < 0 )
  {
    if ( a2 )
      *Buffer = 0;
  }
  else
  {
    v5 = a2 - 1;
    v4 = 0;
    v6 = _vsnwprintf(Buffer, a2 - 1, a3, Args);
    if ( v6 < 0 || v6 > v5 )
    {
      Buffer[v5] = 0;
      return (unsigned int)-2147024774;
    }
    else if ( v6 == v5 )
    {
      Buffer[v5] = 0;
    }
  }
  return (unsigned int)v4;
}
