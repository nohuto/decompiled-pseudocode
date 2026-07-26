/*
 * XREFs of ?ndisPcwGetMiniportDataBlock@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8928
 * Callers:
 *     ndisGetPerformanceCounters @ 0x1C00D137C (ndisGetPerformanceCounters.c)
 *     ndisSetPerfTrackParameters @ 0x1C00D1660 (ndisSetPerfTrackParameters.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C009B148 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6C60 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8960 (-ndisPcwGetMiniportDataBlockInternal@@YAPEAU_NDIS_PCW_DATA_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

struct _NDIS_PCW_DATA_BLOCK *__fastcall ndisPcwGetMiniportDataBlock(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *MiniportDataBlockInternal; // rbx
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v4, (struct KPushLockBase *)&ndisPcwMutex);
  MiniportDataBlockInternal = ndisPcwGetMiniportDataBlockInternal(a1);
  KLockHolder::~KLockHolder(&v4);
  return MiniportDataBlockInternal;
}
