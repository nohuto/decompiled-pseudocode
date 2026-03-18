/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C009CDF0
 * Callers:
 *     sub_1C009CAA8 @ 0x1C009CAA8 (sub_1C009CAA8.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C009CC74 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  int v15; // eax
  __int64 v16; // rax
  char v18; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    if ( !&v18 )
    {
      v9 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v9);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 240), 1u);
    if ( !a2 )
    {
      v10 = *(_QWORD *)(a1 + 160);
      if ( v10 != a1 + 160 )
      {
        v11 = v10 - 96;
        goto LABEL_15;
      }
      goto LABEL_17;
    }
    v12 = (_QWORD *)(a1 + 160);
    v13 = *(_QWORD **)(a1 + 160);
    if ( v13 != (_QWORD *)(a1 + 160) )
    {
      v14 = (_QWORD *)(a2 + 96);
      if ( v13 == (_QWORD *)(a2 + 96) )
      {
LABEL_13:
        if ( (_QWORD *)*v14 != v12 )
        {
          v11 = *v14 - 96LL;
LABEL_15:
          if ( v11 )
          {
            *a3 = v11;
            *a4 = *(_DWORD *)(v11 + 112);
LABEL_20:
            ExReleaseResourceLite((PERESOURCE)(a1 + 240));
            KeLeaveCriticalRegion();
            return v8;
          }
        }
LABEL_17:
        v15 = 1075708748;
LABEL_19:
        v8 = v15;
        goto LABEL_20;
      }
      while ( v12 != v13 )
      {
        v13 = (_QWORD *)*v13;
        if ( v13 == v14 )
          goto LABEL_13;
      }
    }
    v16 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v16 + 24) = a2;
    *(_QWORD *)(v16 + 32) = a1;
    WdLogEvent5_WdError(v16);
    v15 = -1071774928;
    goto LABEL_19;
  }
  return 3221225485LL;
}
