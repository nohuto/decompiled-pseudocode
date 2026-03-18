/*
 * XREFs of MI_UPDATE_WORKING_SET_PRIVATE_SIZE @ 0x14001EDF8
 * Callers:
 *     MiRemoveImagePageFromSystemWorkingSet @ 0x14001C40C (MiRemoveImagePageFromSystemWorkingSet.c)
 *     MiBuildForkPte @ 0x14001DDD8 (MiBuildForkPte.c)
 *     MmUnmapViewInSystemCache @ 0x1400ADB30 (MmUnmapViewInSystemCache.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MI_UPDATE_WORKING_SET_PRIVATE_SIZE(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 128) += a3;
  result = a2 + 0x98000000000LL;
  if ( (unsigned __int64)(a2 + 0x98000000000LL) > 0x7FFFFFFFFFLL )
    *(_QWORD *)(a1 + 112) += a3;
  return result;
}
