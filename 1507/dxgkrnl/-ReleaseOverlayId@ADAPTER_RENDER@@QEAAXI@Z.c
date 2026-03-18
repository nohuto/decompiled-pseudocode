/*
 * XREFs of ?ReleaseOverlayId@ADAPTER_RENDER@@QEAAXI@Z @ 0x1C0127D60
 * Callers:
 *     ?Destroy@DXGOVERLAY@@QEAAXXZ @ 0x1C01423A0 (-Destroy@DXGOVERLAY@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall ADAPTER_RENDER::ReleaseOverlayId(ADAPTER_RENDER *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rax

  v5 = (unsigned int)a2;
  if ( (unsigned int)a2 >= *(_DWORD *)(*((_QWORD *)this + 2) + 1356LL) )
  {
    v6 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v6 + 24) = 21847LL;
    WdLogEvent5_WdAssertion(v6);
  }
  if ( !*((_QWORD *)this + v5 + 57) )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v7 + 24) = 21848LL;
    WdLogEvent5_WdAssertion(v7);
  }
  *((_QWORD *)this + v5 + 57) = 0LL;
}
