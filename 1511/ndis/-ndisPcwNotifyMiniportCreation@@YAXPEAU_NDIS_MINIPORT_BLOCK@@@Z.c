/*
 * XREFs of ?ndisPcwNotifyMiniportCreation@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A8724
 * Callers:
 *     ndisMInitializeAdapter @ 0x1C00E405C (ndisMInitializeAdapter.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z @ 0x1C00D25E0 (-ndisPcwUpdateMiniportDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@W4_NDIS_COUNTER_SET_ID@@_KJ@Z.c)
 */

void __fastcall ndisPcwNotifyMiniportCreation(struct _NDIS_MINIPORT_BLOCK *a1)
{
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  int v3; // r9d
  KLockHolder v4; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v4, &ndisPcwMutex);
  PcwDataBlock = a1->IfBlock->PcwDataBlock;
  if ( PcwDataBlock )
  {
    a1->Reserved4.Buffer = (wchar_t *)PcwDataBlock;
    PcwDataBlock->Miniport = a1;
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, 1LL, 0LL);
    ndisPcwUpdateMiniportDataBlock(a1->Reserved4.Buffer, (unsigned int)(v3 + 2), 0LL);
  }
  KLockHolder::~KLockHolder(&v4);
}
