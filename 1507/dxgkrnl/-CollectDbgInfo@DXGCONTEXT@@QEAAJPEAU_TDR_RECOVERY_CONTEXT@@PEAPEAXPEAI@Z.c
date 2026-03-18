/*
 * XREFs of ?CollectDbgInfo@DXGCONTEXT@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0132C60
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C0124B0C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGCONTEXT::CollectDbgInfo(
        DXGCONTEXT *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  char *v13; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 1103LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *a4 < 0x40 )
    return 2147483653LL;
  v13 = (char *)*a3;
  *(_DWORD *)v13 = 1953394499;
  *((_DWORD *)v13 + 1) = *((_DWORD *)this + 32);
  *(_OWORD *)(v13 + 8) = *((_OWORD *)this + 11);
  *(_OWORD *)(v13 + 24) = *((_OWORD *)this + 12);
  *((_DWORD *)v13 + 10) = *((_DWORD *)this + 80);
  *((_DWORD *)v13 + 11) = *((_DWORD *)this + 81);
  *((_DWORD *)v13 + 12) = *((_DWORD *)this + 83);
  *((_DWORD *)v13 + 13) = *((_DWORD *)this + 84);
  *((_DWORD *)v13 + 14) = *((_DWORD *)this + 85);
  *((_DWORD *)v13 + 15) = *((_DWORD *)this + 86);
  *a3 = (char *)*a3 + 64;
  *a4 -= 64;
  return 0LL;
}
