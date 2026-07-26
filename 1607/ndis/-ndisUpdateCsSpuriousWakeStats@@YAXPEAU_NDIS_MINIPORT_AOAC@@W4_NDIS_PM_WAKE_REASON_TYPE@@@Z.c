/*
 * XREFs of ?ndisUpdateCsSpuriousWakeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_WAKE_REASON_TYPE@@@Z @ 0x1C006EB9C
 * Callers:
 *     ?ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z @ 0x1C006D680 (-ndisAoAcTempRefWorkItem@@YAXPEAU_NDIS_WORK_ITEM@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisUpdateCsSpuriousWakeStats(struct _NDIS_MINIPORT_AOAC *a1, int a2)
{
  int v2; // edx
  int v3; // edx
  int v4; // edx
  int v5; // edx
  int v6; // edx
  int v7; // edx
  int v8; // edx

  if ( a2 <= 4098 )
  {
    if ( a2 == 4098 )
    {
      ++a1->CsSpuriousWakeStats.WakeReasonWlanGTKHandshakeError;
      return;
    }
    v2 = a2 - 1;
    if ( !v2 )
    {
      ++a1->CsSpuriousWakeStats.WakeReasonPacket;
      return;
    }
    v3 = v2 - 1;
    if ( !v3 )
    {
      ++a1->CsSpuriousWakeStats.WakeReasonMediaDisconnect;
      return;
    }
    v4 = v3 - 1;
    if ( !v4 )
    {
      ++a1->CsSpuriousWakeStats.WakeReasonMediaConnect;
      return;
    }
    v5 = v4 - 4093;
    if ( !v5 )
    {
      ++a1->CsSpuriousWakeStats.WakeReasonWlanNLODiscovery;
      return;
    }
    if ( v5 == 1 )
    {
      ++a1->CsSpuriousWakeStats.WakeReasonWlanApAssociationLost;
      return;
    }
    goto LABEL_18;
  }
  v6 = a2 - 4099;
  if ( v6 )
  {
    v7 = v6 - 4093;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        if ( v8 != 1 )
        {
LABEL_18:
          ++a1->CsSpuriousWakeStats.WakeReasonUnspec;
          return;
        }
        ++a1->CsSpuriousWakeStats.WakeReasonWwanUSSDReceive;
      }
      else
      {
        ++a1->CsSpuriousWakeStats.WakeReasonWwanSMSReceive;
      }
    }
    else
    {
      ++a1->CsSpuriousWakeStats.WakeReasonWwanRegisterState;
    }
  }
  else
  {
    ++a1->CsSpuriousWakeStats.WakeReasonWlan4WayHandshakeRequest;
  }
}
