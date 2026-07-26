/*
 * XREFs of ndisMSetHDSplitAttributes @ 0x1C009F384
 * Callers:
 *     NdisMSetMiniportAttributes @ 0x1C00A00B0 (NdisMSetMiniportAttributes.c)
 * Callees:
 *     NdisGetHypervisorInfo @ 0x1C0012E60 (NdisGetHypervisorInfo.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004BBA8 (WPP_SF_qqd.c)
 */

__int64 __fastcall ndisMSetHDSplitAttributes(__int64 a1, __int64 a2)
{
  unsigned int v3; // esi
  _QWORD *PoolWithTag; // rax
  _NDIS_HYPERVISOR_INFO HypervisorInfo; // [rsp+30h] [rbp-18h] BYREF

  v3 = 0;
  *(_QWORD *)&HypervisorInfo.Header.Type = 0LL;
  HypervisorInfo.PartitionType = NdisHypervisorPartitionTypeUnknown;
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qq(0x73u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2);
  *(_DWORD *)(a1 + 124) &= ~0x40000000u;
  if ( a2 )
  {
    if ( *(_BYTE *)a2 == 0xAB && *(_BYTE *)(a2 + 1) && *(_WORD *)(a2 + 2) >= 0x18u )
    {
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x1CuLL, 0x666F444Eu);
      *(_QWORD *)(a1 + 4328) = PoolWithTag;
      if ( PoolWithTag )
      {
        HypervisorInfo.Header = (NDIS_OBJECT_HEADER)786816;
        *PoolWithTag = 0LL;
        PoolWithTag[1] = 0LL;
        PoolWithTag[2] = 0LL;
        *((_DWORD *)PoolWithTag + 6) = 0;
        v3 = NdisGetHypervisorInfo(&HypervisorInfo);
        if ( !v3 )
        {
          if ( ((HypervisorInfo.Flags & 1) == 0 || HypervisorInfo.PartitionType != NdisHypervisorPartitionTypeMsHvParent)
            && (*(_DWORD *)(a2 + 8) & 1) != 0 )
          {
            *(_DWORD *)(a2 + 12) = 1;
            *(_DWORD *)(a2 + 16) = 128;
            *(_DWORD *)(a2 + 20) = 128;
            *(_DWORD *)(a1 + 124) |= 0x40000000u;
          }
          **(_BYTE **)(a1 + 4328) = 0x80;
          *(_BYTE *)(*(_QWORD *)(a1 + 4328) + 1LL) = 1;
          *(_WORD *)(*(_QWORD *)(a1 + 4328) + 2LL) = 28;
          *(_DWORD *)(*(_QWORD *)(a1 + 4328) + 4LL) = *(_DWORD *)(a2 + 4);
          *(_DWORD *)(*(_QWORD *)(a1 + 4328) + 8LL) = *(_DWORD *)(a2 + 8);
          *(_DWORD *)(*(_QWORD *)(a1 + 4328) + 12LL) = *(_DWORD *)(a2 + 12);
          *(_DWORD *)(*(_QWORD *)(a1 + 4328) + 16LL) = 0;
          *(_DWORD *)(*(_QWORD *)(a1 + 4328) + 20LL) = *(_DWORD *)(a2 + 16);
          *(_DWORD *)(*(_QWORD *)(a1 + 4328) + 24LL) = *(_DWORD *)(a2 + 20);
        }
      }
      else
      {
        v3 = -1073741670;
      }
    }
    else
    {
      v3 = -1073741811;
    }
  }
  if ( (unsigned __int8)byte_1C0085314 >= 4u )
    WPP_SF_qqd(0x74u, &WPP_9f38f38531f8ddee2755f96b3c07d5ed_Traceguids, a1, a2, v3);
  return v3;
}
