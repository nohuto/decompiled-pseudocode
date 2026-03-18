/*
 * XREFs of ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0058C9C
 * Callers:
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058B5C (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C0058E38 (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C0059930 (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C000F264 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::MoveToPenaltyBoxBand(__int64 a1, int a2)
{
  VIDMM_GLOBAL *v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r8
  _QWORD *v7; // rdx
  _BYTE v8[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v8,
    (struct DXGPUSHLOCK *const)(*(_QWORD *)a1 + 41152LL));
  if ( (*(_DWORD *)(a1 + 52) & 3) != 0 )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v4, (struct _LIST_ENTRY *)(a1 + 168));
  v5 = a1 + 168;
  v6 = 16LL * (unsigned int)(a2 - 1) + *(_QWORD *)a1 + 41176LL;
  v7 = *(_QWORD **)(v6 + 8);
  *(_QWORD *)(a1 + 168) = v6;
  *(_QWORD *)(a1 + 176) = v7;
  if ( *v7 != v6 )
    __fastfail(3u);
  *v7 = v5;
  *(_QWORD *)(v6 + 8) = v5;
  *(_DWORD *)(a1 + 52) ^= ((unsigned __int8)a2 ^ (unsigned __int8)*(_DWORD *)(a1 + 52)) & 3;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v8);
}
