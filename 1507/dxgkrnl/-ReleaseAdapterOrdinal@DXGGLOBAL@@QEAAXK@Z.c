/*
 * XREFs of ?ReleaseAdapterOrdinal@DXGGLOBAL@@QEAAXK@Z @ 0x1C0140168
 * Callers:
 *     ?Destroy@DXGADAPTER@@QEAAXXZ @ 0x1C0123780 (-Destroy@DXGADAPTER@@QEAAXXZ.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::ReleaseAdapterOrdinal(DXGGLOBAL *this, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v4; // esi
  __int64 v6; // rax

  v4 = a2;
  if ( (unsigned int)a2 >= *((_DWORD *)this + 196) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 1717LL;
    WdLogEvent5_WdAssertion(v6);
  }
  DXGFASTMUTEX::Acquire((DXGGLOBAL *)((char *)this + 432));
  RtlClearBits((PRTL_BITMAP)((char *)this + 472), v4, 1u);
  DXGFASTMUTEX::Release((struct _KTHREAD **)this + 54);
}
