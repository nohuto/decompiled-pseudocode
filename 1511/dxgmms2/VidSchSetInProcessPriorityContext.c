/*
 * XREFs of VidSchSetInProcessPriorityContext @ 0x1C005FCC0
 * Callers:
 *     <none>
 * Callees:
 *     VidSchiSetInProcessPriorityContext @ 0x1C00143C8 (VidSchiSetInProcessPriorityContext.c)
 */

__int64 __fastcall VidSchSetInProcessPriorityContext(__int64 a1, int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 104);
  if ( !*(_BYTE *)(v2 + 172) && !_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 168), 0, 0) )
    return VidSchiSetInProcessPriorityContext(a1, a2);
  v4 = WdLogNewEntry5_WdWarning(a1);
  *(_QWORD *)(v4 + 24) = v2;
  *(_QWORD *)(v4 + 32) = -1071775232LL;
  WdLogEvent5_WdWarning(v4);
  return 3223192064LL;
}
