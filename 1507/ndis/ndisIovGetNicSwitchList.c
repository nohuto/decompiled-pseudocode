/*
 * XREFs of ndisIovGetNicSwitchList @ 0x1C0021BF4
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A5EE8 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIovCopyNicSwitchInfo @ 0x1C0023CCC (ndisIovCopyNicSwitchInfo.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // r13
  __int64 v6; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v9; // rax
  _QWORD *v10; // rsi
  __int64 v11; // rbp
  unsigned int i; // r14d

  v4 = 0;
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_q(80LL, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2889685;
  *a2 = 0LL;
  v6 = *(_QWORD *)(a1 + 4672);
  if ( v6 && *(_QWORD *)(a1 + 3616) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, (unsigned int)(572 * *(_DWORD *)(a1 + 4752) + 16), 0x6F69444Eu);
    *a2 = (__int64)PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0x80;
      *(_BYTE *)(*a2 + 1) = 1;
      *(_WORD *)(*a2 + 2) = 16;
      *(_DWORD *)(*a2 + 4) = 16;
      *(_DWORD *)(*a2 + 8) = *(_DWORD *)(a1 + 4752);
      *(_DWORD *)(*a2 + 12) = 572;
      v9 = *a2;
      v10 = *(_QWORD **)(a1 + 4760);
      v11 = v9 + *(unsigned int *)(v9 + 4);
      for ( i = 0; v10 != (_QWORD *)(a1 + 4760) && i < *(_DWORD *)(a1 + 4752); ++i )
      {
        ndisIovCopyNicSwitchInfo(v11, v10);
        v10 = (_QWORD *)*v10;
        v11 += 572LL;
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v5);
  if ( (unsigned __int8)byte_1C0085321 >= 4u )
    WPP_SF_qD(81LL, &WPP_6c8db4fe7eb94b473a3ef095da1bfaf8_Traceguids, a1, v4);
  return v4;
}
