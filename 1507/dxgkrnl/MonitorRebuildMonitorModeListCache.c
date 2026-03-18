/*
 * XREFs of MonitorRebuildMonitorModeListCache @ 0x1C01828EC
 * Callers:
 *     DpiPdoHandleStatusIndication @ 0x1C00288B0 (DpiPdoHandleStatusIndication.c)
 * Callees:
 *     DmmGetNextVideoPresentTarget @ 0x1C008A470 (DmmGetNextVideoPresentTarget.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z @ 0x1C0180E5C (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@I@Z.c)
 */

__int64 __fastcall MonitorRebuildMonitorModeListCache(struct DXGADAPTER *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  __int64 v7; // rax
  unsigned int i; // edx
  int NextVideoPresentTarget; // eax
  unsigned int v11; // [rsp+38h] [rbp+10h] BYREF

  v11 = a2;
  v5 = WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
  v6 = 0;
  *(_QWORD *)(v5 + 24) = a1;
  *(_QWORD *)(v5 + 32) = 4294967293LL;
  if ( a1 )
  {
    if ( *((_QWORD *)a1 + 247) )
    {
      for ( i = -1; ; i = v11 )
      {
        NextVideoPresentTarget = DmmGetNextVideoPresentTarget((__int64)a1, i, &v11);
        if ( NextVideoPresentTarget < 0 )
          break;
        RebuildMonitorModeListCacheHelper(a1, v11);
      }
      if ( NextVideoPresentTarget == -1073741275 )
        return 0;
      return (unsigned int)NextVideoPresentTarget;
    }
    return v6;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(4294967293LL);
    *(_QWORD *)(v7 + 24) = 0LL;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
