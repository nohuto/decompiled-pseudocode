/*
 * XREFs of ndisMInitializeMiniportBlock @ 0x1C00A8CBC
 * Callers:
 *     ndisAddDevice @ 0x1C00E7650 (ndisAddDevice.c)
 * Callees:
 *     NdisInitializeEvent @ 0x1C001FAC0 (NdisInitializeEvent.c)
 *     ??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ @ 0x1C001FEC4 (--0_NDIS_MINIPORT_BLOCK@@QEAA@XZ.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisAllocateRefCount @ 0x1C00A68F8 (ndisAllocateRefCount.c)
 *     ndisMInitializeMiniportBlockFront @ 0x1C00EB2AC (ndisMInitializeMiniportBlockFront.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisMInitializeMiniportBlock(__int64 a1, __int64 a2, int a3)
{
  struct _NDIS_REFCOUNT_BLOCK *result; // rax

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
  *(_QWORD *)(a2 + 5400) = 0LL;
  *(_QWORD *)(a2 + 5416) = ndisMUpdateInterfaceWorker;
  *(_QWORD *)(a2 + 5424) = a2;
  IoInitializeRemoveLockEx((PIO_REMOVE_LOCK)(a2 + 4176), 0x2020444Eu, 0, 0, 0x20u);
  *(_QWORD *)(a2 + 4952) = ndisAllocateRefCount(0x65u, 0);
  result = ndisAllocateRefCount(5u, 0);
  *(_QWORD *)(a2 + 4960) = result;
  return result;
}
