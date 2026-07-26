/*
 * XREFs of ndisIovGetNicSwitchList @ 0x1C00688D0
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E93B4 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisIovNicSwitchWithoutIovSupported @ 0x1C001B5AC (ndisIovNicSwitchWithoutIovSupported.c)
 *     ndisIovCopyNicSwitchInfo @ 0x1C002777C (ndisIovCopyNicSwitchInfo.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(__int64 a1, __int64 *a2)
{
  unsigned int v4; // edi
  KIRQL v5; // r13
  __int64 v6; // rax
  _BYTE *PoolWithTag; // rax
  __int64 v8; // rax
  _QWORD *v9; // rsi
  _DWORD *v10; // rbp
  unsigned int i; // r14d

  v4 = 0;
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_q(0x53u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2890493;
  *a2 = 0LL;
  if ( ndisIovNicSwitchWithoutIovSupported(a1)
    || (v6 = *(_QWORD *)(a1 + 4672)) != 0 && *(_QWORD *)(a1 + 3616) && (*(_BYTE *)(v6 + 8) & 3) == 3 )
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
      v8 = *a2;
      v9 = *(_QWORD **)(a1 + 4760);
      v10 = (_DWORD *)(v8 + *(unsigned int *)(v8 + 4));
      for ( i = 0; v9 != (_QWORD *)(a1 + 4760) && i < *(_DWORD *)(a1 + 4752); ++i )
      {
        ndisIovCopyNicSwitchInfo(v10, (__int64)v9);
        v9 = (_QWORD *)*v9;
        v10 += 143;
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
  if ( (unsigned __int8)byte_1C00895E1 >= 4u )
    WPP_SF_qD(0x54u, &WPP_66e150bf10bd3961f505aba1a8a4f7d8_Traceguids, a1, v4);
  return v4;
}
