/*
 * XREFs of ?CollectDbgInfo@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@PEAPEAXPEAI@Z @ 0x1C0145084
 * Callers:
 *     ?DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z @ 0x1C014D56C (-DxgkCollectCoreDbgInfo@@YAJPEAU_TDR_RECOVERY_CONTEXT@@PEAXI@Z.c)
 * Callees:
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094A4 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z @ 0x1C0147030 (-CollectDbgInfo@ADAPTER_DISPLAY@@QEAAJPEAUDXGADAPTERDBGINFO@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::CollectDbgInfo(
        PERESOURCE *this,
        struct _TDR_RECOVERY_CONTEXT *a2,
        void **a3,
        unsigned int *a4)
{
  __int64 v7; // rcx
  __int64 v8; // rax
  char *v10; // rdx
  _OWORD *v11; // rcx
  __int64 v12; // r8
  _OWORD *v13; // rax
  __int128 v14; // xmm1
  ADAPTER_DISPLAY *v15; // rcx
  PERESOURCE v16; // rax

  if ( !DXGADAPTER::IsCoreResourceExclusiveOwner(this) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v8 + 24) = 7530LL;
    WdLogEvent5_WdAssertion(v8);
  }
  if ( *a4 < 0x428 )
    return 2147483653LL;
  v10 = (char *)*a3;
  v11 = this + 182;
  v12 = 4LL;
  *(_DWORD *)v10 = 1885430849;
  v13 = v10 + 8;
  do
  {
    *v13 = *v11;
    v13[1] = v11[1];
    v13[2] = v11[2];
    v13[3] = v11[3];
    v13[4] = v11[4];
    v13[5] = v11[5];
    v13[6] = v11[6];
    v13 += 8;
    v14 = v11[7];
    v11 += 8;
    *(v13 - 1) = v14;
    --v12;
  }
  while ( v12 );
  *v13 = *v11;
  v13[1] = v11[1];
  v13[2] = v11[2];
  v13[3] = v11[3];
  v15 = (ADAPTER_DISPLAY *)this[266];
  if ( v15 )
    ADAPTER_DISPLAY::CollectDbgInfo(v15, (struct DXGADAPTERDBGINFO *)v10);
  v16 = this[267];
  if ( v16 )
  {
    *(_OWORD *)(v10 + 776) = *(_OWORD *)&v16[4].ExclusiveWaiters;
    *(_OWORD *)(v10 + 792) = *(_OWORD *)&v16[4].OwnerEntry.0;
  }
  *a3 = (char *)*a3 + 1064;
  *a4 -= 1064;
  return 0LL;
}
