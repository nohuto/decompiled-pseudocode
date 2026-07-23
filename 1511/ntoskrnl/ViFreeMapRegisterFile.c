/*
 * XREFs of ViFreeMapRegisterFile @ 0x1406BD3E4
 * Callers:
 *     VfAllocateAdapterChannel @ 0x1406BA16C (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x1406BACFC (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1406BB058 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x1406BB0F8 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1406BB2C4 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x1406BC29C (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1406BC414 (ViAdapterCallback.c)
 * Callees:
 *     VfPoolDelayFreeIfPossible @ 0x140002138 (VfPoolDelayFreeIfPossible.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     IoFreeMdl @ 0x1400395A0 (IoFreeMdl.c)
 *     MmUnmapLockedPages @ 0x14003A290 (MmUnmapLockedPages.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x1406BCC98 (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x1406BD618 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  KIRQL v5; // al
  __int64 v6; // r9
  _QWORD *v7; // r8
  __int64 v8; // rsi
  __int64 v9; // rsi
  unsigned int i; // ebp
  __int64 v11; // rcx
  unsigned int v12; // r9d
  ULONG_PTR v13; // r8
  __int64 v14; // rdx
  _SLIST_ENTRY *v15; // rcx
  unsigned __int8 CurrentIrql; // cl

  v2 = 0;
  if ( !a2 || *(_DWORD *)a2 != -1393569779 )
    return 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v6 = *(_QWORD *)(a2 + 8);
  v7 = *(_QWORD **)(a2 + 16);
  if ( *(_QWORD *)(v6 + 8) != a2 + 8 || *v7 != a2 + 8 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v5);
  v8 = *(_QWORD *)(a2 + 40);
  *(_DWORD *)a2 = 0;
  if ( v8 )
  {
    if ( (*(_BYTE *)(v8 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v8 + 24), (PMDL)v8);
    IoFreeMdl((PMDL)v8);
  }
  MmUnmapLockedPages(*(PVOID *)(a2 + 64), *(PMDL *)(a2 + 56));
  v9 = a2 + 88;
  for ( i = 0; i < *(_DWORD *)(a2 + 28); v9 += 32LL )
  {
    v11 = *(_QWORD *)(v9 + 16);
    if ( *(_QWORD *)v9 )
    {
      v12 = *(_DWORD *)(v9 + 8);
      v13 = (*(_DWORD *)v9 & 0xFFF) + v11 + 4096;
    }
    else
    {
      v12 = 0;
      v13 = 0LL;
    }
    ViCheckPadding(v11, 0x3000u, v13, v12);
    v14 = *(_QWORD *)(v9 + 16);
    *(_DWORD *)(v9 + 12) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v14, i) )
      ExFreePoolWithTag(*(PVOID *)(v9 + 16), 0);
    ++i;
  }
  IoFreeMdl(*(PMDL *)(a2 + 56));
  v15 = *(_SLIST_ENTRY **)(a2 + 72);
  if ( v15 )
    VfPoolDelayFreeIfPossible(v15, KeGetCurrentIrql() != 2);
  *(_QWORD *)a2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  LOBYTE(v2) = CurrentIrql != 2;
  VfPoolDelayFreeIfPossible((PSLIST_ENTRY)a2, v2);
  return 1LL;
}
