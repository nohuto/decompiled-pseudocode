/*
 * XREFs of ndisInitializeZeroBasedRef @ 0x1C00A8F38
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E88AC (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ndisAllocateRefCount @ 0x1C00A68F8 (ndisAllocateRefCount.c)
 */

struct _NDIS_REFCOUNT_BLOCK *__fastcall ndisInitializeZeroBasedRef(__int64 a1)
{
  struct _NDIS_REFCOUNT_BLOCK *result; // rax

  KeInitializeSpinLock((PKSPIN_LOCK)a1);
  *(_DWORD *)(a1 + 8) = 0x1000000;
  result = ndisAllocateRefCount(0x17u, 0);
  *(_QWORD *)(a1 + 16) = result;
  return result;
}
