/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C00AE130
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0004990 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000A590 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00AE1B0 (DxgkInvalidateMonitorConnections.c)
 */

__int64 __fastcall DxgkCompleteTopologyTransition(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  DXGGLOBAL *Global; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGGLOBAL *v14; // rax
  int v16; // [rsp+30h] [rbp+8h] BYREF
  int v17; // [rsp+34h] [rbp+Ch]

  v4 = 0;
  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = 5402LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v7, v6, v8, v9) + 24) = 5406LL;
    v16 = 0;
    v17 = 0;
    v14 = DXGGLOBAL::GetGlobal(v11, v10, v12, v13);
    v4 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v14,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)&v16,
           1LL);
    if ( v4 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(&v16);
  }
  DxgkInvalidateMonitorConnections(1uLL);
  return (unsigned int)v4;
}
