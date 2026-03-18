/*
 * XREFs of ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0126BF0
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C00084E0 (DxgkLogCodePointPacket.c)
 *     Template_pqcctttq @ 0x1C001B740 (Template_pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(PERESOURCE **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // [rsp+20h] [rbp-48h]
  char v14; // [rsp+28h] [rbp-40h]
  char v15; // [rsp+30h] [rbp-38h]
  int v16; // [rsp+38h] [rbp-30h]
  int v17; // [rsp+40h] [rbp-28h]
  int v18; // [rsp+48h] [rbp-20h]
  int v19; // [rsp+50h] [rbp-18h]

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v8 + 24) = 12099LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v9 = WdLogNewEntry5_WdAssertion(v5, v4, v6, v7);
    *(_QWORD *)(v9 + 24) = 12100LL;
    WdLogEvent5_WdAssertion(v9);
  }
  DxgkLogCodePointPacket(0x1Cu, v3 + 0x80000000, 0, 0);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v19 = 0;
    v18 = 0;
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = v3 + 0x80000000;
    Template_pqcctttq(v11, v10, v12, this, v13, v14, v15, v16, v17, v18, v19);
  }
  BYTE4(this[14][126 * v3 + 122]) = 0;
}
