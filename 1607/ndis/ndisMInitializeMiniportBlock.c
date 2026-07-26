/*
 * XREFs of ndisMInitializeMiniportBlock @ 0x1C00A0D70
 * Callers:
 *     ndisAddDevice @ 0x1C00E88C0 (ndisAddDevice.c)
 * Callees:
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C00136F0 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     NdisInitializeEvent @ 0x1C00137A0 (NdisInitializeEvent.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     NdisAllocateRefCount @ 0x1C00A2C80 (NdisAllocateRefCount.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C00E7254 (ndisMInitializeMiniportBlockFront.c)
 */

__int64 __fastcall ndisMInitializeMiniportBlock(__int64 a1, __int64 a2, int a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax

  memset((void *)a2, 0, a3);
  if ( a2 )
    _NDIS_MINIPORT_BLOCK::_NDIS_MINIPORT_BLOCK((_NDIS_MINIPORT_BLOCK *)a2);
  *(_QWORD *)(a2 + 3816) = a1;
  ndisMInitializeMiniportBlockFront((PVOID)a2);
  *(_DWORD *)(a2 + 3940) = 0;
  *(_DWORD *)(a2 + 3936) = 1;
  *(_DWORD *)(a2 + 4116) = 1;
  *(_WORD *)(a2 + 4048) = _InterlockedExchangeAdd(&ndisInstanceNumber, 1u) + 1;
  *(_QWORD *)(a2 + 4768) = a2 + 4760;
  *(_QWORD *)(a2 + 4760) = a2 + 4760;
  *(_QWORD *)(a2 + 4792) = a2 + 4784;
  *(_QWORD *)(a2 + 4784) = a2 + 4784;
  *(_QWORD *)(a2 + 4816) = a2 + 4808;
  *(_QWORD *)(a2 + 4808) = a2 + 4808;
  NdisInitializeEvent((PNDIS_EVENT)(a2 + 3784));
  KeInitializeEvent((PRKEVENT)(a2 + 4280), NotificationEvent, 1u);
  KeInitializeSpinLock((PKSPIN_LOCK)(a2 + 3928));
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 3976), 1, 1);
  KeInitializeSemaphore((PRKSEMAPHORE)(a2 + 4008), 1, 1);
  *(_QWORD *)(a2 + 4392) = 0LL;
  *(_QWORD *)(a2 + 4368) = 0LL;
  *(_QWORD *)(a2 + 4384) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 4424) = 0LL;
  *(_QWORD *)(a2 + 4400) = 0LL;
  *(_QWORD *)(a2 + 4416) = ndisPowerIrpWorker;
  *(_QWORD *)(a2 + 5384) = 0LL;
  *(_QWORD *)(a2 + 5400) = ndisMUpdateInterfaceWorker;
  *(_QWORD *)(a2 + 5408) = a2;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 4176), 0x2020444Eu, 0, 0, 0x20u);
  LOBYTE(v5) = 103;
  *(_QWORD *)(a2 + 4952) = NdisAllocateRefCount(v5, 0LL);
  LOBYTE(v6) = 5;
  result = NdisAllocateRefCount(v6, 0LL);
  *(_QWORD *)(a2 + 4960) = result;
  return result;
}
