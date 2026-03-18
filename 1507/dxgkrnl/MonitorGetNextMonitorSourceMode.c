/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C0098AF0
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00987A0 (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0098968 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, __int64 *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  __int64 v12; // rax
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    if ( &v18 == (__int64 *)-64LL )
    {
      v16 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
      WdLogEvent5_WdAssertion(v16);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 240), 1u);
    if ( a2 )
    {
      v9 = (_QWORD *)(a1 + 160);
      v10 = *(_QWORD **)(a1 + 160);
      if ( v10 == (_QWORD *)(a1 + 160) )
      {
LABEL_20:
        v17 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v17 + 24) = a2;
        *(_QWORD *)(v17 + 32) = a1;
        WdLogEvent5_WdError(v17);
        v15 = -1071774928;
        goto LABEL_19;
      }
      v11 = (_QWORD *)(a2 + 96);
      if ( v10 != (_QWORD *)(a2 + 96) )
      {
        while ( v9 != v10 )
        {
          v10 = (_QWORD *)*v10;
          if ( v10 == v11 )
            goto LABEL_11;
        }
        goto LABEL_20;
      }
LABEL_11:
      if ( (_QWORD *)*v11 != v9 )
      {
        v12 = *v11 - 96LL;
        goto LABEL_13;
      }
    }
    else
    {
      v14 = *(_QWORD *)(a1 + 160);
      if ( v14 != a1 + 160 )
      {
        v12 = v14 - 96;
LABEL_13:
        if ( v12 )
        {
          *a3 = v12;
          *a4 = *(_DWORD *)(v12 + 112);
LABEL_15:
          ExReleaseResourceLite((PERESOURCE)(a1 + 240));
          KeLeaveCriticalRegion();
          return v8;
        }
      }
    }
    v15 = 1075708748;
LABEL_19:
    v8 = v15;
    goto LABEL_15;
  }
  return 3221225485LL;
}
