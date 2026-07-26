/*
 * XREFs of ndisInitializeRef @ 0x1C00A01A0
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0021D94 (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A70D0 (NdisRegisterProtocolDriver.c)
 *     NdisRegisterProtocol @ 0x1C00C96E0 (NdisRegisterProtocol.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 *     ndisRegisterMiniportDriver @ 0x1C00EE988 (ndisRegisterMiniportDriver.c)
 * Callees:
 *     ndisAllocateRefCount @ 0x1C00A01D4 (ndisAllocateRefCount.c)
 */

__int64 __fastcall ndisInitializeRef(__int64 a1, char a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)a1);
  LOBYTE(v4) = 2;
  *(_DWORD *)(a1 + 8) = 1;
  LOBYTE(v5) = a2;
  result = ndisAllocateRefCount(v5, v4);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
