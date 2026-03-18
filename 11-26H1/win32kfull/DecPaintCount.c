/*
 * XREFs of DecPaintCount @ 0x14012BF18
 * Callers:
 *     ?ClrFTrueVis@@YAXPEAUtagWND@@@Z @ 0x1400105EC (-ClrFTrueVis@@YAXPEAUtagWND@@@Z.c)
 *     InternalInvalidate3 @ 0x14002EEB8 (InternalInvalidate3.c)
 *     ?FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU?$Win32HMOptionalThreadLockAlways@UtagWND@@@@@Z @ 0x140045780 (-FreeWindow_Phase3@@YAXPEAUtagWND@@PEAUtagTHREADINFO@@PEAU-$Win32HMOptionalThreadLockAlways@Utag.c)
 *     xxxDoPaint @ 0x14004F698 (xxxDoPaint.c)
 *     xxxSimpleDoSyncPaint @ 0x140050370 (xxxSimpleDoSyncPaint.c)
 *     ?xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z @ 0x14011E330 (-xxxUpdateWindow2@@YAXPEAUtagWND@@K@Z.c)
 *     xxxBeginPaint @ 0x14012A7C4 (xxxBeginPaint.c)
 *     ?GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z @ 0x14012C244 (-GetNCUpdateRgn@@YAPEAUHRGN__@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DecPaintCount(__int64 a1)
{
  __int64 v1; // rdx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 16);
  if ( (*(_DWORD *)(v1 + 632))-- == 1 )
  {
    _InterlockedAnd((volatile signed __int32 *)(*(_QWORD *)(v1 + 480) + 8LL), 0xFFFFFFDF);
    result = *(_QWORD *)(v1 + 480);
    _InterlockedAnd((volatile signed __int32 *)(result + 4), 0xFFFFFFDF);
  }
  return result;
}
