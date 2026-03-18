/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C00101E0
 * Callers:
 *     VidSchiNeedToForcePreemptNode @ 0x1C000EB40 (VidSchiNeedToForcePreemptNode.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000F790 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiCreateContextInternal @ 0x1C000F9D0 (VidSchiCreateContextInternal.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0022120 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C006A810 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIncrementContextReference(__int64 a1)
{
  __int64 result; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}
