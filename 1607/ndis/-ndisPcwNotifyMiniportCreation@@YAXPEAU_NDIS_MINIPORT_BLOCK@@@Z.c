/*
 * XREFs of ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AB2A4
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 * Callees:
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ReleaseExclusive@KLockHolder@@QEAAXXZ @ 0x1C00A6E6C (-ReleaseExclusive@KLockHolder@@QEAAXXZ.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ?ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00AB2F8 (-ndisPcwEnableAlwaysOnCounters@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00D8528 (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

void __fastcall ndisPcwNotifyMiniportCreation(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  __int64 v3; // r9
  KLockThisExclusive v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive(&v4, (struct KPushLockBase *)&ndisPcwMutex);
  PcwDataBlock = a1->IfBlock->PcwDataBlock;
  if ( PcwDataBlock )
  {
    a1->Reserved4.Buffer = (wchar_t *)PcwDataBlock;
    PcwDataBlock->Miniport = a1;
    ++*((_DWORD *)a1->Reserved4.Buffer + 42);
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, 1LL, 0LL, 0LL);
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, (unsigned int)(v3 + 2), 0LL, v3);
  }
  KLockHolder::ReleaseExclusive(&v4);
  ndisPcwEnableAlwaysOnCounters(a1);
  KLockHolder::~KLockHolder(&v4);
}
