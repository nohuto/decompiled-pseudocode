/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1400169DC
 * Callers:
 *     MiEmptyWorkingSetHelper @ 0x140015C78 (MiEmptyWorkingSetHelper.c)
 *     MiTrimWorkingSet @ 0x140015D90 (MiTrimWorkingSet.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     MiDeleteSystemPagableVm @ 0x14004A820 (MiDeleteSystemPagableVm.c)
 *     MiTerminateWsle @ 0x1400E0160 (MiTerminateWsle.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiRemoveSingleWsle @ 0x1400FF0BC (MiRemoveSingleWsle.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     MiDeprioritizeVirtualAddresses @ 0x140110898 (MiDeprioritizeVirtualAddresses.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
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
