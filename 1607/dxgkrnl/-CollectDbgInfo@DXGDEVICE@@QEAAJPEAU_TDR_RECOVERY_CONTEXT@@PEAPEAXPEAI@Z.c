/*
 * XREFs of ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C015CF2C
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C014D56C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CollectDbgInfo(
        DXGDEVICE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v10; // rcx

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 1236LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *a4 < 0xA0 )
    return 2147483653LL;
  v10 = (char *)*a3;
  *(_DWORD *)v10 = 1769366852;
  *((_DWORD *)v10 + 1) = *((_DWORD *)this + 76);
  *(_OWORD *)(v10 + 8) = *(_OWORD *)((char *)this + 392);
  *((_QWORD *)v10 + 3) = *((_QWORD *)this + 51);
  *((_OWORD *)v10 + 2) = *(_OWORD *)((char *)this + 1000);
  *((_OWORD *)v10 + 3) = *(_OWORD *)((char *)this + 1016);
  *((_OWORD *)v10 + 4) = *(_OWORD *)((char *)this + 1032);
  *((_OWORD *)v10 + 5) = *(_OWORD *)((char *)this + 1048);
  *((_OWORD *)v10 + 6) = *(_OWORD *)((char *)this + 2792);
  *((_OWORD *)v10 + 7) = *(_OWORD *)((char *)this + 2808);
  *((_OWORD *)v10 + 8) = *(_OWORD *)((char *)this + 2824);
  *((_OWORD *)v10 + 9) = *(_OWORD *)((char *)this + 2840);
  *a3 = (char *)*a3 + 160;
  *a4 -= 160;
  return 0LL;
}
