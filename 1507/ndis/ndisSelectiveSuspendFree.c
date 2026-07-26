/*
 * XREFs of ndisSelectiveSuspendFree @ 0x1C00DCBC8
 * Callers:
 *     ndisSelectiveSuspendInitialize @ 0x1C00DCC7C (ndisSelectiveSuspendInitialize.c)
 *     ndisMCommonHaltMiniport @ 0x1C00E6698 (ndisMCommonHaltMiniport.c)
 * Callees:
 *     NdisNblTrackerDeregisterComponent @ 0x1C0019450 (NdisNblTrackerDeregisterComponent.c)
 */

void __fastcall ndisSelectiveSuspendFree(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v3; // rdi
  __int64 v4; // rsi
  void *v5; // rcx

  v1 = *(_QWORD *)(a1 + 4512);
  if ( *(_QWORD *)(v1 + 576) )
  {
    v3 = 0LL;
    v4 = 5LL;
    do
    {
      v5 = *(void **)(*(_QWORD *)(v1 + 576) + v3 + 8);
      if ( v5 )
      {
        ExFreePoolWithTag(v5, 0);
        *(_QWORD *)(*(_QWORD *)(v1 + 576) + v3 + 8) = 0LL;
      }
      v3 += 24LL;
      --v4;
    }
    while ( v4 );
    ExFreePoolWithTag(*(PVOID *)(v1 + 576), 0);
    *(_QWORD *)(v1 + 576) = 0LL;
  }
  NdisNblTrackerDeregisterComponent(*(_QWORD *)(v1 + 584));
  NdisNblTrackerDeregisterComponent(*(_QWORD *)(v1 + 592));
  ExFreePoolWithTag((PVOID)v1, 0);
  *(_QWORD *)(a1 + 4512) = 0LL;
}
