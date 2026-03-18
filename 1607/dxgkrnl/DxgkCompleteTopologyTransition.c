/*
 * XREFs of DxgkCompleteTopologyTransition @ 0x1C00C3CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z @ 0x1C0009B24 (-ToggleTopologyTransition@DXGGLOBAL@@QEAAEE@Z.c)
 *     DxgkMiracastEnforceInactiveMonitorPolicy @ 0x1C000BA90 (DxgkMiracastEnforceInactiveMonitorPolicy.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkInvalidateMonitorConnections @ 0x1C00C2B40 (DxgkInvalidateMonitorConnections.c)
 */

__int64 DxgkCompleteTopologyTransition()
{
  int v0; // ebx
  __int64 v1; // rcx
  DXGGLOBAL *Global; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  _DWORD v10[2]; // [rsp+20h] [rbp-68h] BYREF
  _QWORD *v11; // [rsp+28h] [rbp-60h]
  _QWORD v12[8]; // [rsp+30h] [rbp-58h] BYREF

  memset(v12, 0, sizeof(v12));
  EtwActivityIdControl(3u, (LPGUID)&v12[1]);
  v0 = 0;
  v12[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v12[3]) = 38;
  Global = DXGGLOBAL::GetGlobal(v1);
  if ( DXGGLOBAL::ToggleTopologyTransition(Global, 0) )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3, v5, v6) + 24) = 6141LL;
  }
  else
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v4, v3, v5, v6) + 24) = 6145LL;
    v10[0] = 0;
    v10[1] = 0;
    v11 = v12;
    v8 = DXGGLOBAL::GetGlobal(v7);
    v0 = DXGGLOBAL::IterateAdaptersWithCallback(
           (__int64)v8,
           (__int64 (__fastcall *)(_QWORD *, __int64))CompleteTopologyTransitionCallback,
           (__int64)v10,
           1);
    if ( v0 >= 0 )
      DxgkMiracastEnforceInactiveMonitorPolicy(v10);
  }
  DxgkInvalidateMonitorConnections(1LL);
  return (unsigned int)v0;
}
