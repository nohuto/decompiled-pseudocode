/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x140016E5C
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x1400160F8 (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSet @ 0x140016210 (MiTrimWorkingSet.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x14004ACA0 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsle @ 0x1400E22C0 (MiTerminateWsle.c)
 *     MiProtectPool @ 0x1400EA400 (MiProtectPool.c)
 *     MiRemoveSingleWsle @ 0x14010133C (MiRemoveSingleWsle.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110334 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToProto @ 0x1401F8908 (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  __int64 result; // rax

  if ( (*a3 & 0x20) != 0 )
  {
    result = *a2 & 0xE00LL;
    if ( result != 3584 )
      return MiLogPageAccess(a1, a3);
  }
  return result;
}
