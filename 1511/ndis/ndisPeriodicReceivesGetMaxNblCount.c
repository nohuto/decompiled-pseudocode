/*
 * XREFs of ndisPeriodicReceivesGetMaxNblCount @ 0x1C0062CF0
 * Callers:
 *     ndisMIndicateReceiveNblsWithThrottling @ 0x1C0026420 (ndisMIndicateReceiveNblsWithThrottling.c)
 *     ?ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C006167C (-ndisGetMiniportIndicateList@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisPeriodicReceivesGetMaxNblCount(__int64 a1)
{
  __int64 result; // rax

  if ( !byte_1C0082D41 )
    return 0xFFFFFFFFLL;
  if ( dword_1C0082D4C )
    return (unsigned int)dword_1C0082D44;
  result = (unsigned int)ndisPeriodicReceivesNblCounts[*(unsigned int *)(*(_QWORD *)(a1 + 3344)
                                                                       + (KeGetPcr()->Prcb.Number << 12))];
  if ( dword_1C0082D44 < (unsigned int)result )
    return (unsigned int)dword_1C0082D44;
  return result;
}
