/*
 * XREFs of ?InvalidateDisplayModeListCacheOnSource@ADAPTER_DISPLAY@@QEAAXI@Z @ 0x1C0147F74
 * Callers:
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C008C040 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogCodePointPacket @ 0x1C000AF10 (DxgkLogCodePointPacket.c)
 *     Template_pqcctttq @ 0x1C001EED4 (Template_pqcctttq.c)
 */

void __fastcall ADAPTER_DISPLAY::InvalidateDisplayModeListCacheOnSource(PERESOURCE **this, unsigned int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  int v11; // [rsp+20h] [rbp-48h]
  char v12; // [rsp+28h] [rbp-40h]
  char v13; // [rsp+30h] [rbp-38h]
  int v14; // [rsp+38h] [rbp-30h]
  int v15; // [rsp+40h] [rbp-28h]
  int v16; // [rsp+48h] [rbp-20h]
  int v17; // [rsp+50h] [rbp-18h]

  v3 = a2;
  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this[2]) )
  {
    v5 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v5 + 24) = 2222LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( (unsigned int)v3 >= *((_DWORD *)this + 20) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v4);
    *(_QWORD *)(v6 + 24) = 2223LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DxgkLogCodePointPacket(0x1Cu, v3 + 0x80000000, 0, 0);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    v17 = 0;
    v16 = 0;
    v15 = 0;
    v14 = 0;
    v13 = 0;
    v12 = 0;
    v11 = v3 + 0x80000000;
    Template_pqcctttq(v8, v7, v9, this, v11, v12, v13, v14, v15, v16, v17);
  }
  v10 = 127 * v3;
  BYTE4(this[14][v10 + 123]) = 0;
  LODWORD(this[14][v10 + 125]) = -1;
  HIDWORD(this[14][v10 + 125]) = -1;
}
