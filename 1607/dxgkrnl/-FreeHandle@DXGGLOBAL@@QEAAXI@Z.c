/*
 * XREFs of ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0009C7C
 * Callers:
 *     ?DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C00701F0 (-DestroyGlobal@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x1C008F974 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1C00A47B0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGGLOBAL::FreeHandle(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v4; // rax

  if ( this[18] != KeGetCurrentThread() )
  {
    v4 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v4 + 24) = 562LL;
    WdLogEvent5_WdAssertion(v4);
  }
  HMGRTABLE::FreeHandle((HMGRTABLE *)(this + 22), a2);
}
