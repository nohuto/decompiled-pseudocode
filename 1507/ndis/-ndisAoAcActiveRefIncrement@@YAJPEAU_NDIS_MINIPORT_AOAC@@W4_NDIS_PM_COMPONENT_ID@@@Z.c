/*
 * XREFs of ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0069354
 * Callers:
 *     NdisTryAcquireNicActive @ 0x1C000E650 (NdisTryAcquireNicActive.c)
 *     ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C00694C0 (-ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C00697D8 (-ndisAoAcIsTempRefNeededAfterDeref@@YAEPEAU_NDIS_MINIPORT_AOAC@@@Z.c)
 *     ?ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006984C (-ndisAoAcPmInitTempRef@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C0069BE0 (-ndisAoAcWakeWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 *     ?ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_NDIS_PM_NIC_ACTIVE@@PEAU_IRP@@@Z @ 0x1C006A390 (-ndisNicActiveAcquire@@YAJPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_DEVICE_OBJECT_OPEN_CONTEXT@@PEAU_N.c)
 * Callees:
 *     ?ndisCloseTimeInterval@@YAXPEA_K0@Z @ 0x1C0069E7C (-ndisCloseTimeInterval@@YAXPEA_K0@Z.c)
 */

__int64 __fastcall ndisAoAcActiveRefIncrement(struct _NDIS_MINIPORT_AOAC *a1, enum _NDIS_PM_COMPONENT_ID a2)
{
  struct _NDIS_MINIPORT_AOAC *v2; // r9
  unsigned int ActiveRef; // r10d
  int v4; // r8d
  bool v5; // zf
  unsigned __int64 *p_CurrentRefStartTime; // r11
  unsigned int i; // r8d

  ++a1->ActiveRef;
  v2 = a1;
  ActiveRef = a1->ActiveRef;
  v4 = a1->ComponentRefCounts[a2] + 1;
  v5 = ndisCsResiliency == 0;
  a1->ComponentRefCounts[a2] = v4;
  if ( !v5 && v4 == 1 )
  {
    if ( a2 == NdisPMComponentWCM )
    {
      p_CurrentRefStartTime = &a1->CsRefTimes[0].CurrentRefStartTime;
      a1->CsRefTimes[6].CurrentRefStartTime = MEMORY[0xFFFFF78000000008];
      for ( i = 0; i < 0xF; ++i )
      {
        if ( i != 6 && *p_CurrentRefStartTime )
          ndisCloseTimeInterval(&v2->CsRefTimes[i].CurrentRefStartTime, &v2->CsRefTimes[i].TotalRefTime);
        p_CurrentRefStartTime += 2;
      }
    }
    else if ( !a1->ComponentRefCounts[6] )
    {
      a1->CsRefTimes[a2].CurrentRefStartTime = MEMORY[0xFFFFF78000000008];
    }
  }
  return ActiveRef;
}
