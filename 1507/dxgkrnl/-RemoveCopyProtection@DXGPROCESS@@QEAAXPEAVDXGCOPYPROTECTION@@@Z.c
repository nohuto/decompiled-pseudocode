/*
 * XREFs of ?RemoveCopyProtection@DXGPROCESS@@QEAAXPEAVDXGCOPYPROTECTION@@@Z @ 0x1C001A590
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 *     ?DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z @ 0x1C0123A78 (-DestroyCopyProtection@ADAPTER_DISPLAY@@QEAAJII@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGPROCESS::RemoveCopyProtection(DXGPROCESS *this, struct DXGCOPYPROTECTION *a2)
{
  __int64 v3; // rax
  _QWORD *v4; // rax
  __int64 v5; // rdx
  _QWORD *v6; // rcx

  if ( *(struct _KTHREAD **)(*((_QWORD *)this + 36) + 8LL) != KeGetCurrentThread() )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v3 + 24) = 662LL;
    WdLogEvent5_WdAssertion(v3);
  }
  v4 = 0LL;
  if ( a2 )
    v4 = (_QWORD *)((char *)a2 + 24);
  v5 = *v4;
  v6 = (_QWORD *)v4[1];
  if ( *(_QWORD **)(*v4 + 8LL) != v4 || (_QWORD *)*v6 != v4 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
}
