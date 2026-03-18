/*
 * XREFs of ?DxgkVidMmAllowFailOnOfferReclaimErrors@@YAHPEAVDXGADAPTER@@@Z @ 0x1C0126050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkVidMmAllowFailOnOfferReclaimErrors(struct DXGADAPTER *a1)
{
  struct DXGPROCESS *Current; // rax
  unsigned int v2; // ebx

  Current = DXGPROCESS::GetCurrent((__int64)a1);
  v2 = 0;
  if ( !Current )
    return 1LL;
  LOBYTE(v2) = (*(unsigned int (**)(void))(*((_QWORD *)Current + 10) + 216LL))() == 0;
  return v2;
}
