/*
 * XREFs of ?DestroyKeyedMutex@DXGGLOBAL@@QEAAXPEAVDXGKEYEDMUTEX@@@Z @ 0x1C005B4C0
 * Callers:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C000106C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00049CC (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0004A54 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 */

void __fastcall DXGGLOBAL::DestroyKeyedMutex(struct _KTHREAD **this, struct DXGKEYEDMUTEX *a2, __int64 a3, __int64 a4)
{
  struct DXGKEYEDMUTEX *v6; // rdx
  struct DXGKEYEDMUTEX **v7; // rax
  __int64 v8; // rax

  if ( !a2 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    *(_QWORD *)(v8 + 24) = 3499LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGFASTMUTEX::Acquire((DXGFASTMUTEX *)(this + 40));
  v6 = *(struct DXGKEYEDMUTEX **)a2;
  v7 = (struct DXGKEYEDMUTEX **)*((_QWORD *)a2 + 1);
  if ( *(struct DXGKEYEDMUTEX **)(*(_QWORD *)a2 + 8LL) != a2 || *v7 != a2 )
    __fastfail(3u);
  *v7 = v6;
  *((_QWORD *)v6 + 1) = v7;
  DXGFASTMUTEX::Release(this + 40);
  DXGKEYEDMUTEX::`scalar deleting destructor'(a2);
}
