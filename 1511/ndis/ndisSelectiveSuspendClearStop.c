/*
 * XREFs of ndisSelectiveSuspendClearStop @ 0x1C00677D0
 * Callers:
 *     ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1C0069868 (-ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z @ 0x1C0069D1C (-ndisRequestNicActive@@YAJPEAU_NDIS_MINIPORT_BLOCK@@W4CallRunMode@@@Z.c)
 *     ndisPowerSaveClearStop @ 0x1C0097A10 (ndisPowerSaveClearStop.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z @ 0x1C00A2B8C (-UpdateBindings@BindEngine@Ndis@@AEAAXAEAVKLockThisExclusive@@@Z.c)
 *     ndisStartDeviceSynchronous @ 0x1C00AA688 (ndisStartDeviceSynchronous.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisSetIdleTimer @ 0x1C0067DD8 (ndisSetIdleTimer.c)
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
  int v11; // edi

  v2 = *(_QWORD *)(a1 + 4512);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v2);
  if ( (unsigned __int8)byte_1C0083716 >= 4u )
    WPP_SF_qD(0x21u, &WPP_77f927e78de9b0c34f4631dbdb483858_Traceguids, a1, a2);
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
            v11 = v10 - 1;
            if ( v11 )
            {
              if ( v11 == 3 )
                *(_DWORD *)(v2 + 484) &= ~0x400u;
            }
            else
            {
              *(_DWORD *)(v2 + 484) &= ~0x100u;
            }
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
