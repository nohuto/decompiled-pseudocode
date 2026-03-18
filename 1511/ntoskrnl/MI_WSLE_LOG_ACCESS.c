/*
 * XREFs of MI_WSLE_LOG_ACCESS @ 0x1400B82C4
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiEmptyWorkingSetHelper @ 0x14001F788 (MiEmptyWorkingSetHelper.c)
 *     MiDeleteSystemPagableVm @ 0x14003C140 (MiDeleteSystemPagableVm.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiTrimWorkingSet @ 0x1400B5BA0 (MiTrimWorkingSet.c)
 *     MiRemoveSingleWsle @ 0x1400E47D4 (MiRemoveSingleWsle.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiDeprioritizeVARange @ 0x1401D257C (MiDeprioritizeVARange.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MI_WSLE_LOG_ACCESS(__int64 a1, _DWORD *a2, _BYTE *a3)
{
  unsigned __int64 result; // rax

  if ( (*a3 & 0x20) != 0 )
  {
    result = *a2 & 0xE00LL;
    if ( result != 3584 )
      return MiLogPageAccess(a1, (__int64)a3);
  }
  return result;
}
