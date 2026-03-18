/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C0006980
 * Callers:
 *     VidSchiSwitchContextWithCheck @ 0x1C0003888 (VidSchiSwitchContextWithCheck.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C0004824 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiCreateContextInternal @ 0x1C00062E4 (VidSchiCreateContextInternal.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C001BD20 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C00448C4 (VidSchiRun_PriorityTable.c)
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
