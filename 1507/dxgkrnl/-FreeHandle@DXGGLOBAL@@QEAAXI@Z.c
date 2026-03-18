/*
 * XREFs of ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0004950
 * Callers:
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005B79C (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00837A8 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C0090564 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::FreeHandle(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v4; // rax

  if ( this[18] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v4 + 24) = 599LL;
    WdLogEvent5_WdAssertion(v4);
  }
  HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 22), a2);
}
