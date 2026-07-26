/*
 * XREFs of ndisFreeReceiveQueue @ 0x1C00381C0
 * Callers:
 *     ndisOidPostRcvFilterAllocateQueue @ 0x1C00382B0 (ndisOidPostRcvFilterAllocateQueue.c)
 *     ndisOidPostRcvFilterFreeQueue @ 0x1C0038510 (ndisOidPostRcvFilterFreeQueue.c)
 * Callees:
 *     ndisDereferenceReceiveQueue @ 0x1C003800C (ndisDereferenceReceiveQueue.c)
 *     ndisFindReceiveQueueByQueueId @ 0x1C0038194 (ndisFindReceiveQueueByQueueId.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisFreeReceiveQueue(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 *ReceiveQueueByQueueId; // rax
  __int64 *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_qD(18LL, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2688173;
  ReceiveQueueByQueueId = ndisFindReceiveQueueByQueueId(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  v6 = ReceiveQueueByQueueId;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v6 )
    ndisDereferenceReceiveQueue(v6);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_qdD(19LL, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, a1, a2, v4);
  return v4;
}
