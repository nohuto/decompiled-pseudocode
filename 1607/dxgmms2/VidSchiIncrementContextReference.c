/*
 * XREFs of VidSchiIncrementContextReference @ 0x1C0001CE0
 * Callers:
 *     VidSchiNeedToForcePreemptNode @ 0x1C0001114 (VidSchiNeedToForcePreemptNode.c)
 *     ?VidSchiSwitchNodeFromDevice@@YAXPEAX@Z @ 0x1C0001AF0 (-VidSchiSwitchNodeFromDevice@@YAXPEAX@Z.c)
 *     VidSchiSetTransferContextRunningTime @ 0x1C000E530 (VidSchiSetTransferContextRunningTime.c)
 *     VidSchiCreateContextInternal @ 0x1C000E6D8 (VidSchiCreateContextInternal.c)
 *     VidSchiReportHwHang @ 0x1C0027844 (VidSchiReportHwHang.c)
 *     VidSchiRun_PriorityTable @ 0x1C006AC40 (VidSchiRun_PriorityTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidSchiIncrementContextReference(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax

  result = (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 72));
  if ( (_DWORD)result == 1 )
  {
    if ( !*(_BYTE *)(a1 + 897) )
    {
      v3 = (_QWORD *)WdLogNewEntry5_WdCriticalError();
      v3[3] = 281LL;
      v3[4] = 3840LL;
      v3[5] = a1;
      v3[6] = 0LL;
      v3[7] = 0LL;
      WdLogEvent5_WdCriticalError(v3);
      JUMPOUT(0x1C0015C5DLL);
    }
    result = *(_QWORD *)(a1 + 104);
    _InterlockedIncrement64((volatile signed __int64 *)(result + 24));
  }
  return result;
}
