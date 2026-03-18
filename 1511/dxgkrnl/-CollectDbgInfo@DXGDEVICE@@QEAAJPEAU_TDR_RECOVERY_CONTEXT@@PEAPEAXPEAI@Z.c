/*
 * XREFs of ?CollectDbgInfo@DXGDEVICE@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0139AD4
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C012AC28 (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031B0 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
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
    *(_QWORD *)(v8 + 24) = 1164LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *a4 < 0xA0 )
    return 2147483653LL;
  v10 = (char *)*a3;
  *(_DWORD *)v10 = 1769366852;
  *((_DWORD *)v10 + 1) = *((_DWORD *)this + 70);
  *(_OWORD *)(v10 + 8) = *((_OWORD *)this + 23);
  *((_QWORD *)v10 + 3) = *((_QWORD *)this + 48);
  *((_OWORD *)v10 + 2) = *((_OWORD *)this + 61);
  *((_OWORD *)v10 + 3) = *((_OWORD *)this + 62);
  *((_OWORD *)v10 + 4) = *((_OWORD *)this + 63);
  *((_OWORD *)v10 + 5) = *((_OWORD *)this + 64);
  *((_OWORD *)v10 + 6) = *((_OWORD *)this + 173);
  *((_OWORD *)v10 + 7) = *((_OWORD *)this + 174);
  *((_OWORD *)v10 + 8) = *((_OWORD *)this + 175);
  *((_OWORD *)v10 + 9) = *((_OWORD *)this + 176);
  *a3 = (char *)*a3 + 160;
  *a4 -= 160;
  return 0LL;
}
