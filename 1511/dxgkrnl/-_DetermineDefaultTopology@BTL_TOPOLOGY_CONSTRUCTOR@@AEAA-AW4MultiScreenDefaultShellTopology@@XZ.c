/*
 * XREFs of ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C0184964
 * Callers:
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01830C8 (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     IsInternalVideoOutput @ 0x1C000A310 (IsInternalVideoOutput.c)
 *     ?GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z @ 0x1C001FF70 (-GetMultiScreenDefaultShellTopology@@YAJPEAW4MultiScreenDefaultShellTopology@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall BTL_TOPOLOGY_CONSTRUCTOR::_DetermineDefaultTopology(
        __int64 a1,
        enum MultiScreenShellCapabilities *a2)
{
  int MultiScreenDefaultShellTopology; // eax
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v9; // rax
  DXGADAPTER *v10; // rdx
  char v11; // bl
  __int64 v12; // rax
  unsigned __int16 v13; // [rsp+38h] [rbp+10h] BYREF

  MultiScreenDefaultShellTopology = GetMultiScreenDefaultShellTopology((enum MultiScreenDefaultShellTopology *)&v13, a2);
  v5 = MultiScreenDefaultShellTopology;
  if ( MultiScreenDefaultShellTopology >= 0 )
  {
    result = v13;
  }
  else
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = v5;
    WdLogEvent5_WdAssertion(v6);
    result = 0LL;
  }
  if ( !(_WORD)result )
  {
    Global = DXGGLOBAL::GetGlobal(v4);
    v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, *(struct _LUID *)(a1 + 12));
    v10 = v9;
    v11 = 1;
    if ( v9 )
    {
      if ( !g_Win32kSupportsPathIndependentRotation
        || ((v12 = *((_QWORD *)v9 + 248), !*(_BYTE *)(v12 + 157)) || !*(_BYTE *)(v12 + 158))
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v10 + 22) + 64LL) + 40LL) + 28LL) < 0x4003u )
      {
        v11 = 0;
      }
      DXGADAPTER::ReleaseReference(v10);
    }
    if ( IsInternalVideoOutput(*(_DWORD *)(a1 + 32)) && (!*(_BYTE *)(a1 + 52) || *(_BYTE *)(a1 + 60) || v11) )
      return 3LL;
    else
      return 4LL;
  }
  return result;
}
