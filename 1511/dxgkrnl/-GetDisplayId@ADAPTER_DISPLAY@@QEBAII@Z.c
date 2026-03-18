/*
 * XREFs of ?GetDisplayId@ADAPTER_DISPLAY@@QEBAII@Z @ 0x1C00078C4
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C00A3CD0 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C015406C (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::GetDisplayId(ADAPTER_DISPLAY *this, unsigned int a2)
{
  __int64 v3; // rbx
  __int64 v5; // rax

  v3 = a2;
  if ( a2 >= *((_DWORD *)this + 26) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v5 + 24) = 3902LL;
    WdLogEvent5_WdAssertion(v5);
  }
  return *(unsigned int *)(1016 * v3 + *((_QWORD *)this + 17) + 624);
}
