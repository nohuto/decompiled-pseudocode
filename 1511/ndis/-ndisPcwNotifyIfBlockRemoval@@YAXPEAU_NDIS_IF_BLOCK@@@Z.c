/*
 * XREFs of ?ndisPcwNotifyIfBlockRemoval@@YAXPEAU_NDIS_IF_BLOCK@@@Z @ 0x1C00D2380
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C003FCD8 (ndisIfDeregisterInterfaceEx.c)
 * Callees:
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ?ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z @ 0x1C00D2364 (-ndisPcwMaybeDeleteDataBlock@@YAXPEAU_NDIS_PCW_DATA_BLOCK@@@Z.c)
 */

void __fastcall ndisPcwNotifyIfBlockRemoval(struct _NDIS_IF_BLOCK *a1)
{
  struct _NDIS_PCW_DATA_BLOCK *v2; // rbx
  _NDIS_PCW_DATA_BLOCK *PcwDataBlock; // rcx
  struct _NDIS_PCW_DATA_BLOCK *i; // rax
  struct _NDIS_PCW_DATA_BLOCK *Next; // rax
  KLockHolder v6; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v6, &ndisPcwMutex);
  PcwDataBlock = a1->PcwDataBlock;
  if ( PcwDataBlock )
  {
    --PcwDataBlock->ReferenceCount;
    a1->PcwDataBlock = 0LL;
    for ( i = ndisPcwDataBlockList; i; i = i->Next )
    {
      if ( i == PcwDataBlock )
      {
        Next = i->Next;
        if ( v2 )
          v2->Next = Next;
        else
          ndisPcwDataBlockList = Next;
        break;
      }
      v2 = i;
    }
    ndisPcwMaybeDeleteDataBlock(PcwDataBlock);
  }
  KLockHolder::~KLockHolder(&v6);
}
