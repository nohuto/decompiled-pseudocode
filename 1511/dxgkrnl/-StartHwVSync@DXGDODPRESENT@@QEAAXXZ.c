/*
 * XREFs of ?StartHwVSync@DXGDODPRESENT@@QEAAXXZ @ 0x1C015F710
 * Callers:
 *     ?StartVSync@BLTQUEUE@@AEAAXH@Z @ 0x1C015F7A8 (-StartVSync@BLTQUEUE@@AEAAXH@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z @ 0x1C0079BF0 (-DdiControlInterrupt@DXGADAPTER@@QEAAJW4_DXGK_INTERRUPT_TYPE@@E@Z.c)
 */

void __fastcall DXGDODPRESENT::StartHwVSync(struct _KTHREAD **this)
{
  __int64 v2; // rcx
  bool v3; // sf
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, this + 13);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v3 = *((int *)this + 32) < 0;
  v9 = 2;
  if ( v3 )
  {
    v4 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v4 + 24) = 3395LL;
    WdLogEvent5_WdAssertion(v4);
  }
  if ( ++*((_DWORD *)this + 32) == 1
    && (int)DXGADAPTER::DdiControlInterrupt(*((DXGADAPTER **)this[11] + 2), DXGK_INTERRUPT_DISPLAYONLY_VSYNC, 1u) < 0 )
  {
    v6 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v6 + 24) = 3402LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
