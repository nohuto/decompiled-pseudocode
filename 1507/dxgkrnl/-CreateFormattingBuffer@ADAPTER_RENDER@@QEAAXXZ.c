/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01205A4
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01260F8 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax

  if ( *((_QWORD *)this + 102) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 29222LL;
    WdLogEvent5_WdAssertion(v5);
  }
  if ( !*((_QWORD *)this + 102) )
    *((_QWORD *)this + 102) = operator new[](0xFC00uLL, 0x4B677844u, (POOL_TYPE)512);
}
