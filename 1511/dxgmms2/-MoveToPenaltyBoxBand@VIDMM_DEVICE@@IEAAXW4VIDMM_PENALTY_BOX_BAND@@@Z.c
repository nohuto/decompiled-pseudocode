/*
 * XREFs of ?MoveToPenaltyBoxBand@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C00616F0
 * Callers:
 *     ?PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C006179C (-PartiallySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?FullySuspend@VIDMM_DEVICE@@IEAAXXZ @ 0x1C007F9A4 (-FullySuspend@VIDMM_DEVICE@@IEAAXXZ.c)
 *     ?Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z @ 0x1C007FBBC (-Yield@VIDMM_DEVICE@@QEAAXPEAV1@@Z.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0011388 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0011520 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_DEVICE::MoveToPenaltyBoxBand(__int64 a1, int a2)
{
  struct _KTHREAD **v3; // rcx
  char v4; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r9
  __int64 v9; // rcx

  v3 = *(struct _KTHREAD ***)a1;
  v4 = 0;
  if ( v3[5152] != KeGetCurrentThread() )
  {
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v3 + 5151));
    v4 = 1;
  }
  if ( (*(_DWORD *)(a1 + 52) & 3) != 0 )
    VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry((VIDMM_GLOBAL *)v3, (struct _LIST_ENTRY *)(a1 + 168));
  v6 = a1 + 168;
  v7 = *(_QWORD *)a1 + 16 * ((unsigned int)(a2 - 1) + 2577LL);
  v8 = *(_QWORD **)(v7 + 8);
  *(_QWORD *)(a1 + 168) = v7;
  *(_QWORD *)(a1 + 176) = v8;
  if ( *v8 != v7 )
    __fastfail(3u);
  *v8 = v6;
  *(_QWORD *)(v7 + 8) = v6;
  *(_DWORD *)(a1 + 52) ^= (*(_DWORD *)(a1 + 52) ^ a2) & 3;
  if ( v4 )
  {
    v9 = *(_QWORD *)a1 + 41208LL;
    *(_QWORD *)(v9 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v9, 0LL);
    KeLeaveCriticalRegion();
  }
}
