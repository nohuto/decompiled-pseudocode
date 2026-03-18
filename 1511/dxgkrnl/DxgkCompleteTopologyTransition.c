/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C00B90F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0006C30 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000B700 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00B9170 (DxgkInvalidateMonitorConnections.c)
 */

__int64 __fastcall DxgkCompleteTopologyTransition(__int64 a1)
{
  int v1; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF
  int v11; // [rsp+34h] [rbp+Ch]

  v1 = 0;
  Global = DXGGLOBAL::GetGlobal(a1);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3, v5, v6) + 24) = 5805LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3, v5, v6) + 24) = 5809LL;
    v10 = 0;
    v11 = 0;
    v8 = DXGGLOBAL::GetGlobal(v7);
    v1 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v8,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)&v10,
           1);
    if ( v1 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(&v10);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  return (unsigned int)v1;
}
