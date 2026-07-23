/*
 * XREFs of ViFreeMapRegisterFile @ 0x140709488
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140706210 (VfAllocateAdapterChannel.c)
 *     VfBuildScatterGatherList @ 0x1407068C0 (VfBuildScatterGatherList.c)
 *     VfCancelAdapterChannel @ 0x140706DA0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x1407070FC (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14070719C (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x140707368 (VfFreeMapRegisters.c)
 *     VfGetScatterGatherList @ 0x140707628 (VfGetScatterGatherList.c)
 *     VfPutScatterGatherList @ 0x140708340 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x1407084B8 (ViAdapterCallback.c)
 * Callees:
 *     MmUnmapLockedPages @ 0x140025890 (MmUnmapLockedPages.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     VfUtilFreePoolCheckIRQL @ 0x14012F474 (VfUtilFreePoolCheckIRQL.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ViCheckPadding @ 0x140708D3C (ViCheckPadding.c)
 *     ViFreeToContiguousMemory @ 0x1407096A0 (ViFreeToContiguousMemory.c)
 */

__int64 __fastcall ViFreeMapRegisterFile(__int64 a1, __int64 a2)
{
  KIRQL v4; // al
  __int64 v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // rdi
  unsigned int v8; // esi
  __int64 i; // rdi
  __int64 v10; // rcx
  unsigned int v11; // r9d
  ULONG_PTR v12; // r8
  __int64 v13; // rdx
  _SLIST_ENTRY *v14; // rcx

  if ( !a2 || *(_DWORD *)a2 != -1393569779 )
    return 0LL;
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 120));
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_QWORD **)(a2 + 16);
  if ( *(_QWORD *)(v5 + 8) != a2 + 8 || *v6 != a2 + 8 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v5 + 8) = v6;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 120), v4);
  *(_DWORD *)a2 = 0;
  v7 = *(_QWORD *)(a2 + 40);
  if ( v7 )
  {
    if ( (*(_BYTE *)(v7 + 10) & 1) != 0 )
      MmUnmapLockedPages(*(PVOID *)(v7 + 24), *(PMDL *)(a2 + 40));
    IoFreeMdl((PMDL)v7);
  }
  MmUnmapLockedPages(*(PVOID *)(a2 + 64), *(PMDL *)(a2 + 56));
  v8 = 0;
  for ( i = a2 + 88; v8 < *(_DWORD *)(a2 + 28); i += 32LL )
  {
    v10 = *(_QWORD *)(i + 16);
    if ( *(_QWORD *)i )
    {
      v11 = *(_DWORD *)(i + 8);
      v12 = v10 + (*(_DWORD *)i & 0xFFF) + 4096LL;
    }
    else
    {
      v11 = 0;
      v12 = 0LL;
    }
    ViCheckPadding(v10, 0x3000u, v12, v11);
    v13 = *(_QWORD *)(i + 16);
    *(_DWORD *)(i + 12) = 0;
    if ( !(unsigned int)ViFreeToContiguousMemory(a1, v13, v8) )
      ExFreePoolWithTag(*(PVOID *)(i + 16), 0);
    ++v8;
  }
  IoFreeMdl(*(PMDL *)(a2 + 56));
  v14 = *(_SLIST_ENTRY **)(a2 + 72);
  if ( v14 )
    VfUtilFreePoolCheckIRQL(v14);
  *(_QWORD *)a2 = 0LL;
  VfUtilFreePoolCheckIRQL((_SLIST_ENTRY *)a2);
  return 1LL;
}
