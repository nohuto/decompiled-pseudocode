/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0146640
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0129444 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, ULONG a2)
{
  __int64 v4; // rax

  if ( a2 >= *((_DWORD *)this + 232) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1695LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((union _LARGE_INTEGER *)this + 69);
  RtlClearBits((PRTL_BITMAP)((char *)this + 616), a2, 1u);
  DXGFASTMUTEX::Release((DXGGLOBAL *)((char *)this + 552));
}
