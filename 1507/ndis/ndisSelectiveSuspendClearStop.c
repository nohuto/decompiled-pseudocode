/*
 * XREFs of ndisSelectiveSuspendClearStop @ 0x1C0068720
 * Callers:
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C006A778 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C006AC20 (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisPowerSaveClearStop @ 0x1C009AB48 (ndisPowerSaveClearStop.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190 (-UpdateBindings@BindEngine@Ndis@@AEAAXXZ.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AC4C4 (ndisStartDeviceSynchronous.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisSetIdleTimer @ 0x1C0068D04 (ndisSetIdleTimer.c)
 */

void __fastcall ndisSelectiveSuspendClearStop(__int64 a1, int a2)
{
  __int64 v2; // rbx
  KIRQL v5; // bp
  int v6; // edi
  int v7; // edi
  int v8; // edi
  int v9; // edi
  int v10; // edi

  v2 = *(_QWORD *)(a1 + 4512);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( (unsigned __int8)byte_1C0085316 >= 4u )
    WPP_SF_qD(0x21u, &WPP_a612080d527c97bcc88e648492c760b7_Traceguids, a1, a2);
  v6 = a2 - 1;
  if ( v6 )
  {
    v7 = v6 - 3;
    if ( v7 )
    {
      v8 = v7 - 2;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          v10 = v9 - 1;
          if ( v10 )
          {
            if ( v10 == 1 )
              *(_DWORD *)(v2 + 484) &= ~0x100u;
          }
          else if ( (*(_DWORD *)(v2 + 512))-- == 1 )
          {
            *(_DWORD *)(v2 + 484) &= ~0x80u;
          }
        }
        else
        {
          *(_DWORD *)(v2 + 484) &= ~0x40u;
        }
      }
      else
      {
        *(_DWORD *)(v2 + 484) &= ~0x20u;
      }
    }
    else
    {
      *(_DWORD *)(v2 + 484) &= ~8u;
    }
  }
  else
  {
    *(_DWORD *)(v2 + 484) &= ~1u;
  }
  if ( *(_DWORD *)(v2 + 484) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
  }
  else
  {
    *(_DWORD *)(v2 + 480) &= ~0x200u;
    KeReleaseSpinLock((PKSPIN_LOCK)v2, v5);
    ndisSetIdleTimer(a1);
  }
}
