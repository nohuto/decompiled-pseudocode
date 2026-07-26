/*
 * XREFs of ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8000
 * Callers:
 *     ?ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_ID@@KPEBG@Z @ 0x1C00AB398 (-ndisPcwEnableAlwaysOnCounterSet@@YAXPEAU_NDIS_MINIPORT_BLOCK@@AEAVKRegKey@@W4_NDIS_COUNTER_SET_.c)
 *     ndisGetPerformanceCounters @ 0x1C00D0100 (ndisGetPerformanceCounters.c)
 *     ndisSetPerfTrackParameters @ 0x1C00D03E4 (ndisSetPerfTrackParameters.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8038 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

struct _NDIS_PCW_DATA_BLOCK *__fastcall ndisPcwGetMiniportDataBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlockInternal; // rbx
  KLockThisExclusive v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v4, (struct KPushLockBase *)&ndisPcwMutex);
  MiniportDataBlockInternal = ndisPcwGetMiniportDataBlockInternal(a1);
  KLockHolder::~KLockHolder(&v4);
  return MiniportDataBlockInternal;
}
