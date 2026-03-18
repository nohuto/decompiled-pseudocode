/*
 * XREFs of ?CreateHandle@DXGADAPTER@@QEAAJPEAI@Z @ 0x1C0078C10
 * Callers:
 *     ?DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z @ 0x1C00948D0 (-DxgkOpenAdapter@@YAJPEAU_D3DKMT_OPENADAPTER@@@Z.c)
 *     ?DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z @ 0x1C00AD4E0 (-DxgkOpenAdapterFromLuid@@YAJPEAU_D3DKMT_OPENADAPTERFROMLUID@@@Z.c)
 * Callees:
 *     ?AcquireReference@DXGADAPTER@@QEAAXXZ @ 0x1C0002490 (-AcquireReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C01406A8 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 */

__int64 __fastcall DXGADAPTER::CreateHandle(DXGADAPTER *this, unsigned int *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  struct DXGPROCESS *Current; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // eax
  char *v10; // rcx
  unsigned int v11; // ebx
  __int64 v13; // rax

  Current = DXGPROCESS::GetCurrent();
  if ( !Current )
  {
    v13 = WdLogNewEntry5_WdAssertion(v5, v4, v7, v8);
    *(_QWORD *)(v13 + 24) = 9851LL;
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
    return 3221225485LL;
  DXGADAPTER::AcquireReference(this);
  DXGPUSHLOCK::AcquireExclusive((struct DXGPROCESS *)((char *)Current + 192));
  v9 = HMGRTABLE::AllocHandle((char *)Current + 216, this, 1LL);
  *((_QWORD *)Current + 25) = 0LL;
  v10 = (char *)Current + 192;
  v11 = v9;
  ExReleasePushLockExclusiveEx(v10, 0LL);
  KeLeaveCriticalRegion();
  *a2 = v11;
  if ( v11 )
    return 0LL;
  DXGADAPTER::ReleaseReference(this);
  return 3221225495LL;
}
