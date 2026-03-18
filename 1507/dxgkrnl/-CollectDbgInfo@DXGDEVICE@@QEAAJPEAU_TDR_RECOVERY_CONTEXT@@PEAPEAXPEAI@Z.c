/*
 * XREFs of ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0134ED8
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C0124B0C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 */

__int64 __fastcall DXGDEVICE::CollectDbgInfo(
        DXGDEVICE *this,
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

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(*(PERESOURCE **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v11 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v11 + 24) = 1160LL;
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *a4 < 0xA0 )
    return 2147483653LL;
  v13 = (char *)*a3;
  *(_DWORD *)v13 = 1769366852;
  *((_DWORD *)v13 + 1) = *((_DWORD *)this + 70);
  *(_OWORD *)(v13 + 8) = *((_OWORD *)this + 23);
  *((_QWORD *)v13 + 3) = *((_QWORD *)this + 48);
  *((_OWORD *)v13 + 2) = *((_OWORD *)this + 297);
  *((_OWORD *)v13 + 3) = *((_OWORD *)this + 298);
  *((_OWORD *)v13 + 4) = *((_OWORD *)this + 299);
  *((_OWORD *)v13 + 5) = *((_OWORD *)this + 300);
  *((_OWORD *)v13 + 6) = *((_OWORD *)this + 1165);
  *((_OWORD *)v13 + 7) = *((_OWORD *)this + 1166);
  *((_OWORD *)v13 + 8) = *((_OWORD *)this + 1167);
  *((_OWORD *)v13 + 9) = *((_OWORD *)this + 1168);
  *a3 = (char *)*a3 + 160;
  *a4 -= 160;
  return 0LL;
}
