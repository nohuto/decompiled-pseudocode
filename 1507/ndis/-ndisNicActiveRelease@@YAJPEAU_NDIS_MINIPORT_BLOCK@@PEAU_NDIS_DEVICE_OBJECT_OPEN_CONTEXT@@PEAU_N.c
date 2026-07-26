/*
 * XREFs of ?ndisNicActiveRelease@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@@Z @ 0x1C006A630
 * Callers:
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0069414 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00697D8 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C006AE98 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     Template_xqqq @ 0x1C006B73C (Template_xqqq.c)
 *     WPP_SF_DDL @ 0x1C006B840 (WPP_SF_DDL.c)
 *     WPP_SF_DDLqdL @ 0x1C006B958 (WPP_SF_DDLqdL.c)
 */

__int64 __fastcall ndisNicActiveRelease(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_DEVICE_OBJECT_OPEN_CONTEXT *a2,
        struct _NDIS_PM_NIC_ACTIVE *a3)
{
  unsigned int v3; // ebx
  int active; // r15d
  _NDIS_MINIPORT_AOAC *AoAc; // r14
  KIRQL v9; // al
  KIRQL v10; // r12
  int v11; // ecx
  unsigned __int8 IsTempRefNeededAfterDeref; // r13

  v3 = 0;
  active = 0;
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_DDL(21LL, a2, *((unsigned __int16 *)a3 + 7), (*((_QWORD *)a3 + 1) >> 24) & 0xFFFFFFLL, *((_DWORD *)a3 + 4));
  if ( *((_DWORD *)a2 + 7) )
  {
    AoAc = a1->AoAc;
    v9 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
    --*((_DWORD *)a2 + 7);
    v10 = v9;
    active = ndisAoAcActiveRefSubtract(AoAc, (enum _NDIS_PM_COMPONENT_ID)*((_DWORD *)a3 + 4), 1);
    IsTempRefNeededAfterDeref = ndisAoAcIsTempRefNeededAfterDeref(AoAc);
    if ( (Microsoft_Windows_NDISEnableBits & 0x4000000) != 0 )
      Template_xqqq(
        v11,
        (unsigned int)&NicActiveReleased,
        (_DWORD)a1 + 4064,
        *((_QWORD *)a3 + 1),
        *((_DWORD *)a2 + 6),
        *((_DWORD *)a2 + 7),
        active);
    KeReleaseSpinLock(&AoAc->Lock, v10);
    if ( IsTempRefNeededAfterDeref )
      ndisSetTempRefTimer(a1, AoAc->DerefTimeoutMilliseconds);
  }
  else
  {
    v3 = -1073741675;
  }
  if ( (unsigned __int8)byte_1C0085315 >= 4u )
    WPP_SF_DDLqdL(
      *((unsigned int *)a3 + 4),
      a2,
      *((unsigned __int16 *)a3 + 7),
      (*((_QWORD *)a3 + 1) >> 24) & 0xFFFFFFLL,
      *((_DWORD *)a3 + 4),
      a1,
      active,
      v3);
  return v3;
}
