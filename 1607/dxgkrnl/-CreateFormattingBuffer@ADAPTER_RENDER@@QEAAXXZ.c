/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148BE0
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C0148DA8 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this)
{
  __int64 v2; // rax

  if ( *((_QWORD *)this + 102) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 3405LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( !*((_QWORD *)this + 102) )
    *((_QWORD *)this + 102) = operator new[](0xFC00uLL, 0x4B677844u, (POOL_TYPE)512);
}
