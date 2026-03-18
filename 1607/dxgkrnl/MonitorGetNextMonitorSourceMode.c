/*
 * XREFs of MonitorGetNextMonitorSourceMode @ 0x1C00BEF80
 * Callers:
 *     BmlFillPreferredMonitorMode @ 0x1C00BEC0C (BmlFillPreferredMonitorMode.c)
 *     ?BmlGetTargetModePreferenceOnMonitor@@YA?AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARGETMODE@@EPEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C00BEDE4 (-BmlGetTargetModePreferenceOnMonitor@@YA-AW4BML_MONITOR_SOURCE_MODE_PREFERENCE@@PEBVDMMVIDPNTARG.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MonitorGetNextMonitorSourceMode(__int64 a1, __int64 a2, _QWORD *a3, _DWORD *a4)
{
  unsigned int v8; // ebx
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rdx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  __int64 v15; // rcx
  int v16; // eax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // [rsp+0h] [rbp-38h] BYREF

  if ( a1 && a3 && a4 )
  {
    v8 = 0;
    *a3 = 0LL;
    *a4 = 0;
    if ( &v19 == (__int64 *)-64LL )
    {
      v17 = WdLogNewEntry5_WdAssertion(a1);
      WdLogEvent5_WdAssertion(v17);
    }
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(a1 + 240), 1u);
    if ( a2 )
    {
      v9 = (_QWORD *)(a1 + 160);
      v10 = *(_QWORD **)(a1 + 160);
      if ( v10 == (_QWORD *)(a1 + 160) )
      {
LABEL_23:
        v18 = WdLogNewEntry5_WdError(v9);
        *(_QWORD *)(v18 + 24) = a2;
        *(_QWORD *)(v18 + 32) = a1;
        WdLogEvent5_WdError(v18);
        v16 = -1071774928;
        goto LABEL_21;
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
        goto LABEL_23;
      }
LABEL_11:
      v12 = (_QWORD *)*v11;
      if ( (_QWORD *)*v11 != v9 )
      {
        if ( v12 )
        {
          v13 = v12 - 12;
          goto LABEL_14;
        }
        goto LABEL_22;
      }
    }
    else
    {
      v15 = *(_QWORD *)(a1 + 160);
      if ( v15 != a1 + 160 )
      {
        if ( v15 )
        {
          v13 = (_QWORD *)(v15 - 96);
          goto LABEL_14;
        }
LABEL_22:
        v13 = 0LL;
LABEL_14:
        if ( v13 )
        {
          *a3 = v13;
          *a4 = *((_DWORD *)v13 + 28);
LABEL_16:
          ExReleaseResourceLite((PERESOURCE)(a1 + 240));
          KeLeaveCriticalRegion();
          return v8;
        }
      }
    }
    v16 = 1075708748;
LABEL_21:
    v8 = v16;
    goto LABEL_16;
  }
  return 3221225485LL;
}
