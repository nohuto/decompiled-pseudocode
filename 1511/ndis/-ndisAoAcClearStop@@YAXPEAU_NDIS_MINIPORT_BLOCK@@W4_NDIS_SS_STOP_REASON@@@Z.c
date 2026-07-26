/*
 * XREFs of ?ndisAoAcClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1C0068590
 * Callers:
 *     ndisPowerSaveClearStop @ 0x1C0097A10 (ndisPowerSaveClearStop.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ?ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D6CB4 (-ndisAoAcStart@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     ?ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z @ 0x1C0068424 (-ndisAoAcActiveRefIncrement@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@@Z.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x1C0069F94 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 */

void __fastcall ndisAoAcClearStop(struct _NDIS_MINIPORT_BLOCK *a1, enum _NDIS_SS_STOP_REASON a2)
{
  _NDIS_MINIPORT_AOAC *AoAc; // rbx
  signed __int64 v4; // rsi
  char v6; // r14
  int v7; // r15d
  KIRQL v8; // r12
  int v9; // edi
  int v10; // edi
  int v11; // edi
  int v12; // edi
  int v13; // edi

  AoAc = a1->AoAc;
  LODWORD(v4) = 0;
  v6 = 0;
  v7 = 5;
  v8 = KeAcquireSpinLockRaiseToDpc(&AoAc->Lock);
  v9 = a2 - 1;
  if ( v9 )
  {
    v10 = v9 - 3;
    if ( v10 )
    {
      v11 = v10 - 2;
      if ( v11 )
      {
        v12 = v11 - 2;
        if ( v12 )
        {
          v13 = v12 - 1;
          if ( v13 )
          {
            if ( v13 == 3 )
              AoAc->StopFlags.Value &= ~0x400u;
          }
          else
          {
            AoAc->StopFlags.Value &= ~0x100u;
            v7 = 1;
            LODWORD(v4) = ndisNicQuietInitTimeout;
          }
        }
        else
        {
          AoAc->StopFlags.Value &= ~0x80u;
        }
      }
      else
      {
        AoAc->StopFlags.Value &= ~0x20u;
      }
    }
    else
    {
      AoAc->StopFlags.Value &= ~8u;
    }
  }
  else
  {
    AoAc->StopFlags.Value &= ~1u;
  }
  if ( !AoAc->StopFlags.Value && AoAc->TempRefReason != NdisAoAcTempRefPmInit )
  {
    if ( (unsigned __int8)byte_1C0083715 >= 4u )
      WPP_SF_q(0x23u, &WPP_8e7c3e95f556d2aee27bc2d35efa6f2a_Traceguids, (__int64)a1);
    AoAc->TempRefReason = v7;
    ndisAoAcActiveRefIncrement(AoAc, NdisPMComponentUnspecified);
    v6 = 1;
  }
  KeReleaseSpinLock(&AoAc->Lock, v8);
  if ( v6 )
  {
    if ( !(_DWORD)v4 )
    {
      v4 = ndisNicQuietInitTimeout - (MEMORY[0xFFFFF78000000008] - AoAc->StartTime) / 0x2710;
      if ( AoAc->DerefTimeoutMilliseconds > v4 )
        LODWORD(v4) = AoAc->DerefTimeoutMilliseconds;
    }
    ndisSetTempRefTimer(a1, v4);
  }
}
