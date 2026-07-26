/*
 * XREFs of NdisReleaseNicActive @ 0x1C006A3B0
 * Callers:
 *     ndisCleanUpForProtocol @ 0x1C00993D0 (ndisCleanUpForProtocol.c)
 * Callees:
 *     ?ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0010D04 (-ndisValidComponentId@@YAEW4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_dd @ 0x1C0040948 (WPP_SF_dd_ea_1C0040948.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C00684E4 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00688B8 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0069F94 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     Template_xqqq @ 0x1C006A83C (Template_xqqq.c)
 */

void __fastcall NdisReleaseNicActive(__int64 a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  struct _NDIS_MINIPORT_BLOCK *v2; // rdi
  unsigned __int8 IsTempRefNeededAfterDeref; // r12
  int v4; // r14d
  int v7; // r15d
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  KIRQL v9; // r13
  int active; // eax
  int v11; // ecx

  v2 = *(struct _NDIS_MINIPORT_BLOCK **)(a1 + 16);
  IsTempRefNeededAfterDeref = 0;
  v4 = 0;
  v7 = 0;
  AoAc = v2->AoAc;
  if ( (unsigned __int8)byte_1C0083715 >= 4u )
    WPP_SF_qD(0x2Cu, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, a1, a2);
  if ( ndisValidComponentId(a2) && v2->AoAc )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    if ( *(_DWORD *)(a1 + 944) && AoAc->ActiveRef > 0 )
    {
      active = ndisAoAcActiveRefSubtract(AoAc, a2, 1);
      v7 = --*(_DWORD *)(a1 + 944);
      v4 = active;
      IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    }
    KeReleaseSpinLock(&AoAc->Lock, v9);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      Template_xqqq(v11, (unsigned int)&NicActiveReleased, (_DWORD)v2 + 4064, v2->NetLuid.Value, a2, v7, v4);
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(v2, AoAc->DerefTimeoutMilliseconds);
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_dd(0x2Du, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, v4, v7);
  }
}
