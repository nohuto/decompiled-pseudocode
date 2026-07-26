/*
 * XREFs of ndisCreateNdisSupportedOidList @ 0x1C00ABD94
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisCreateNdisSupportedOidList(__int64 a1)
{
  unsigned int v2; // edi
  unsigned __int8 v3; // cl
  unsigned int v4; // esi
  int v5; // eax
  unsigned int v6; // eax
  _OWORD *PoolWithTag; // rax
  _OWORD *v8; // rcx

  v2 = 0;
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_q(0x13u, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1);
  v3 = *(_BYTE *)(a1 + 32);
  v4 = 45;
  v5 = 45;
  if ( v3 >= 6u )
    v5 = 81;
  if ( !*(_DWORD *)(a1 + 464) )
  {
    ++v5;
    if ( v3 >= 6u )
      v5 += 4;
  }
  v6 = 4 * v5;
  *(_DWORD *)(a1 + 3456) = v6;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v6, 0x6D61444Eu);
  *(_QWORD *)(a1 + 3448) = PoolWithTag;
  if ( PoolWithTag )
  {
    *PoolWithTag = ndisHandledNdis5Ndis6GenOids;
    PoolWithTag[1] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 1);
    PoolWithTag[2] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 2);
    PoolWithTag[3] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 3);
    PoolWithTag[4] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 4);
    PoolWithTag[5] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 5);
    PoolWithTag[6] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 6);
    PoolWithTag[7] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 7);
    PoolWithTag[8] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 8);
    PoolWithTag[9] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 9);
    PoolWithTag[10] = *((_OWORD *)&ndisHandledNdis5Ndis6GenOids + 10);
    *((_DWORD *)PoolWithTag + 44) = *((_DWORD *)&ndisHandledNdis5Ndis6GenOids + 44);
    if ( *(_BYTE *)(a1 + 32) >= 6u )
    {
      v8 = (_OWORD *)(*(_QWORD *)(a1 + 3448) + 180LL);
      v4 = 81;
      *v8 = ndisHandledNdis6OnlyGenOids;
      v8[1] = *(_OWORD *)(0x1C0000000LL + 1048640);
      v8[2] = *(_OWORD *)(0x1C0000000LL + 1048656);
      v8[3] = *(_OWORD *)(0x1C0000000LL + 1048672);
      v8[4] = *(_OWORD *)(0x1C0000000LL + 1048688);
      v8[5] = *(_OWORD *)(0x1C0000000LL + 1048704);
      v8[6] = *(_OWORD *)(0x1C0000000LL + 1048720);
      v8[7] = *(_OWORD *)(0x1C0000000LL + 1048736);
      v8[8] = *(_OWORD *)(0x1C0000000LL + 1048752);
    }
    if ( !*(_DWORD *)(a1 + 464) )
    {
      *(_DWORD *)(*(_QWORD *)(a1 + 3448) + 4LL * v4) = (_DWORD)ndisHandledNdis5Ndis6_802_3_Oids;
      if ( *(_BYTE *)(a1 + 32) >= 6u )
        *(_OWORD *)(*(_QWORD *)(a1 + 3448) + 4LL * (v4 + 1)) = *(_OWORD *)&ndisHandledNdis6Only_802_3_Oids;
    }
  }
  else
  {
    v2 = -1073741670;
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(0x14u, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, v2);
  return v2;
}
