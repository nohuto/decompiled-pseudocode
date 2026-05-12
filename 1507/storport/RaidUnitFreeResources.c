/*
 * XREFs of RaidUnitFreeResources @ 0x1C000FA14
 * Callers:
 *     RaidUnitAllocateResources @ 0x1C000E10C (RaidUnitAllocateResources.c)
 *     RaidDeleteUnit @ 0x1C000FBA4 (RaidDeleteUnit.c)
 * Callees:
 *     StorDeleteScsiIdentity @ 0x1C000D3E8 (StorDeleteScsiIdentity.c)
 *     RaidAdapterPoFxIdleComponent @ 0x1C0021CDC (RaidAdapterPoFxIdleComponent.c)
 *     StorpUninititalizePerUnitPerfTelemetry @ 0x1C0039484 (StorpUninititalizePerUnitPerfTelemetry.c)
 *     RaDeleteTagList @ 0x1C004FBAC (RaDeleteTagList.c)
 */

__int64 __fastcall RaidUnitFreeResources(__int64 a1)
{
  __int64 v2; // rdi
  unsigned int v3; // ecx
  unsigned int v4; // eax
  __int64 v5; // rcx
  void *v6; // rdi
  void *v7; // rcx
  struct _IO_WORKITEM *v8; // rcx
  struct _IO_WORKITEM *v9; // rcx
  struct _IO_WORKITEM *v10; // rcx
  __int64 v11; // rcx
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v12; // rcx
  void *v13; // rcx
  char v15; // al

  KeCancelTimer((PKTIMER)(a1 + 640));
  KeCancelTimer((PKTIMER)(a1 + 768));
  KeFlushQueuedDpcs();
  v2 = *(unsigned int *)(a1 + 1392);
  if ( (_DWORD)v2 != -1 )
  {
    v3 = KeQueryHighestNodeNumber() + 1;
    v4 = (unsigned int)v2 / *(_DWORD *)(a1 + 328);
    if ( v4 >= v3 )
      v4 = v3 - 1;
    ExpInterlockedPushEntrySList(
      (PSLIST_HEADER)(*(_QWORD *)(a1 + 256) + ((unsigned __int64)v4 << 6)),
      (PSLIST_ENTRY)(*(_QWORD *)(a1 + 320) + 16 * v2));
  }
  v5 = *(_QWORD *)(a1 + 1408);
  if ( v5 )
    MmFreeContiguousMemory((PVOID)(v5 - 16));
  v6 = *(void **)(a1 + 200);
  if ( v6 )
  {
    KeQueryHighestNodeNumber();
    ExFreePoolWithTag(v6, 0x51506152u);
    *(_QWORD *)(a1 + 200) = 0LL;
  }
  StorDeleteScsiIdentity((_QWORD *)(a1 + 96));
  RaDeleteTagList(a1 + 256);
  v7 = *(void **)(a1 + 16);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0x45556152u);
    *(_QWORD *)(a1 + 16) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 1764) )
    StorpUninititalizePerUnitPerfTelemetry(a1);
  if ( (*(_BYTE *)(a1 + 144) & 0x10) != 0 )
  {
    IoWMIRegistrationControl(*(PDEVICE_OBJECT *)(a1 + 8), 2u);
    *(_BYTE *)(a1 + 144) &= ~0x10u;
  }
  v8 = *(struct _IO_WORKITEM **)(a1 + 1544);
  if ( v8 )
  {
    IoFreeWorkItem(v8);
    *(_QWORD *)(a1 + 1544) = 0LL;
  }
  v9 = *(struct _IO_WORKITEM **)(a1 + 1560);
  if ( v9 )
  {
    IoFreeWorkItem(v9);
    *(_QWORD *)(a1 + 1560) = 0LL;
  }
  v10 = *(struct _IO_WORKITEM **)(a1 + 1584);
  if ( v10 )
  {
    IoFreeWorkItem(v10);
    *(_QWORD *)(a1 + 1584) = 0LL;
  }
  v11 = *(_QWORD *)(a1 + 24);
  if ( v11 )
  {
    if ( *(_QWORD *)(v11 + 5088) )
    {
      v15 = *(_BYTE *)(a1 + 145);
      if ( (v15 & 8) != 0 )
      {
        *(_BYTE *)(a1 + 145) = v15 & 0xF7;
        RaidAdapterPoFxIdleComponent(v11, 0LL, 0LL);
      }
    }
  }
  v12 = *(struct _EX_RUNDOWN_REF_CACHE_AWARE **)(a1 + 1432);
  if ( v12 )
  {
    ExFreeCacheAwareRundownProtection(v12);
    *(_QWORD *)(a1 + 1432) = 0LL;
  }
  v13 = *(void **)(a1 + 1448);
  if ( v13 )
  {
    ExFreePoolWithTag(v13, 0x57506152u);
    *(_QWORD *)(a1 + 1448) = 0LL;
  }
  return 0LL;
}
