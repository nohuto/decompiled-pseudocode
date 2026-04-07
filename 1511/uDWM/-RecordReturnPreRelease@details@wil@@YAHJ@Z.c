/*
 * XREFs of ?RecordReturnPreRelease@details@wil@@YAHJ@Z @ 0x180050094
 * Callers:
 *     ?LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z @ 0x180076B28 (-LogFailure@details@wil@@YAXPEAXIPEBD110W4FailureType@2@JPEBG_NPEAG_KPEAD6PEAUFailureInfo@2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::RecordReturnPreRelease(wil::details *this)
{
  `wil::details::RecordReturnPreRelease'::`2'::s_hrErrorLast = (int)this;
  return (unsigned int)_InterlockedIncrement(&`wil::details::RecordReturnPreRelease'::`2'::s_cErrorCount);
}
