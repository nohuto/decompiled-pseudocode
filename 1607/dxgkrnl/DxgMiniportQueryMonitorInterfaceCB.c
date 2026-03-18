/*
 * XREFs of DxgMiniportQueryMonitorInterfaceCB @ 0x1C00FC4A0
 * Callers:
 *     <none>
 * Callees:
 *     DpiGetDxgAdapter @ 0x1C0006F80 (DpiGetDxgAdapter.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 */

__int64 __fastcall DxgMiniportQueryMonitorInterfaceCB(__int64 a1, int a2, _QWORD *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rcx
  DXGADAPTER *DxgAdapter; // rdi
  __int64 v10; // r8
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rcx
  _QWORD *v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  v4 = a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(a1, &EventProfilerEnter, (__int64)a3, 7057);
  v6 = 0;
  if ( !a3 )
  {
    v18 = (_QWORD *)WdLogNewEntry5_WdError(a1);
    v18[3] = 0LL;
    v18[4] = v4;
    v18[5] = a1;
    WdLogEvent5_WdError(v18);
    v6 = -1073741811;
    goto LABEL_12;
  }
  *a3 = 0LL;
  DxgAdapter = (DXGADAPTER *)DpiGetDxgAdapter(a1);
  if ( !DxgAdapter )
    goto LABEL_14;
  if ( KeGetCurrentIrql() )
  {
    v19 = *(_QWORD *)(*((_QWORD *)DxgAdapter + 24) + 64LL);
    if ( *(_DWORD *)(*(_QWORD *)(v19 + 40) + 28LL) >= 0x2003u )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v19, v7, v10);
      v20[3] = 275LL;
      v20[4] = 20LL;
      v20[5] = DxgAdapter;
      v20[6] = 0LL;
      v20[7] = 0LL;
      WdLogEvent5_WdCriticalError(v20);
    }
  }
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(DxgAdapter) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v21);
  }
  if ( !*((_QWORD *)DxgAdapter + 266) )
  {
LABEL_14:
    v17 = WdLogNewEntry5_WdError(v8);
    *(_QWORD *)(v17 + 24) = a1;
    WdLogEvent5_WdError(v17);
    v6 = -1071775742;
    goto LABEL_12;
  }
  v14 = (unsigned int)(v4 - 1);
  if ( (_DWORD)v4 == 1 )
  {
    v15 = &DXGK_MONITOR_INTERFACE_V1_IMPL::DxgMiniportMonitorInterfaceV1;
  }
  else
  {
    if ( (_DWORD)v4 != 2 )
      goto LABEL_22;
    v15 = &DXGK_MONITOR_INTERFACE_V2_IMPL::DxgMiniportMonitorInterfaceV2;
  }
  if ( !v15 )
  {
LABEL_22:
    v22 = WdLogNewEntry5_WdWarning(v14, v11, v12, v13);
    *(_QWORD *)(v22 + 24) = v4;
    WdLogEvent5_WdWarning(v22);
    v6 = -1073741637;
    goto LABEL_12;
  }
  *a3 = v15;
LABEL_12:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v14, &EventProfilerExit, v12, 7057);
  return v6;
}
