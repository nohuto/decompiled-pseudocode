/*
 * XREFs of ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0156708
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C014D56C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGCONTEXT::CollectDbgInfo(
        DXGCONTEXT *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v10; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 1123LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *a4 < 0x40 )
    return 2147483653LL;
  v10 = (char *)*a3;
  *(_DWORD *)v10 = 1953394499;
  *((_DWORD *)v10 + 1) = *((_DWORD *)this + 32);
  *(_OWORD *)(v10 + 8) = *((_OWORD *)this + 11);
  *(_OWORD *)(v10 + 24) = *((_OWORD *)this + 12);
  *((_DWORD *)v10 + 10) = *((_DWORD *)this + 80);
  *((_DWORD *)v10 + 11) = *((_DWORD *)this + 81);
  *((_DWORD *)v10 + 12) = *((_DWORD *)this + 83);
  *((_DWORD *)v10 + 13) = *((_DWORD *)this + 84);
  *((_DWORD *)v10 + 14) = *((_DWORD *)this + 85);
  *((_DWORD *)v10 + 15) = *((_DWORD *)this + 86);
  *a3 = (char *)*a3 + 64;
  *a4 -= 64;
  return 0LL;
}
