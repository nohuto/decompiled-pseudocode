/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0169FDC
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C01451AC (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0006D20 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, ULONG a2)
{
  __int64 v4; // rax

  if ( a2 >= *((_DWORD *)this + 192) )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 1651LL;
    WdLogEvent5_WdAssertion(v4);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 432));
  RtlClearBits((PRTL_BITMAP)((char *)this + 472), a2, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 54);
}
