/*
 * XREFs of WmipRegisterEtwProvider @ 0x14057638C
 * Callers:
 *     WmipLinkDataSourceToList @ 0x1405381E4 (WmipLinkDataSourceToList.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     WmipReferenceEntry @ 0x140473870 (WmipReferenceEntry.c)
 *     WmipQueueLegacyEtwWork @ 0x14057645C (WmipQueueLegacyEtwWork.c)
 */

void __fastcall WmipRegisterEtwProvider(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  _DWORD *v3; // rbx
  _DWORD *PoolWithTag; // rax

  v2 = *(_QWORD *)(a1 + 56);
  v3 = 0LL;
  if ( ++*(_DWORD *)(v2 + 152) == 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x18uLL, 0x70696D57u);
    v3 = PoolWithTag;
    if ( !PoolWithTag )
      return;
    *(_QWORD *)(v2 + 112) = PoolWithTag;
    PoolWithTag[4] = 0;
  }
  else if ( *(_QWORD *)(v2 + 120) )
  {
    v3 = ExAllocatePoolWithTag(PagedPool, 0x30uLL, 0x70696D57u);
    if ( !v3 )
      return;
    *(_DWORD *)(a1 + 16) |= 0x200000u;
    WmipReferenceEntry(*(_QWORD *)(a1 + 64));
    v3[4] = 2;
    v3[8] = 1;
    *((_QWORD *)v3 + 5) = *(_QWORD *)(a1 + 64);
    *((_QWORD *)v3 + 3) = *(_QWORD *)(v2 + 120);
    *((_BYTE *)v3 + 36) = 1;
  }
  *(_DWORD *)(a1 + 16) |= 0x100000u;
  if ( v3 )
    WmipQueueLegacyEtwWork(v3, v2, a2);
}
