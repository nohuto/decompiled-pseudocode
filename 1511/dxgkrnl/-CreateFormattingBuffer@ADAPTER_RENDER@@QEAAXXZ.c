/*
 * XREFs of ?CreateFormattingBuffer@ADAPTER_RENDER@@QEAAXXZ @ 0x1C01260E8
 * Callers:
 *     ?EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C012C2D8 (-EnableFormattingBuffer@ADAPTER_RENDER@@QEAAXH@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall ADAPTER_RENDER::CreateFormattingBuffer(ADAPTER_RENDER *this)
{
  __int64 v2; // rax

  if ( *((_QWORD *)this + 111) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 29883LL;
    WdLogEvent5_WdAssertion(v2);
  }
  if ( !*((_QWORD *)this + 111) )
    *((_QWORD *)this + 111) = operator new[](0xFC00uLL, 0x4B677844u, (POOL_TYPE)512);
}
