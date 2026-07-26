/*
 * XREFs of ndisMCleanupMiniportBlockOnStop @ 0x1C0098D8C
 * Callers:
 *     ndisInitializeAdapter @ 0x1C00AA8C4 (ndisInitializeAdapter.c)
 *     ndisPnPRemoveDevice @ 0x1C00E02B8 (ndisPnPRemoveDevice.c)
 * Callees:
 *     ndisFreePerProcessorSlot @ 0x1C0010D48 (ndisFreePerProcessorSlot.c)
 *     NdisNblTrackerDeregisterComponent @ 0x1C001EA20 (NdisNblTrackerDeregisterComponent.c)
 *     nullDeleteFilter @ 0x1C0098EFC (nullDeleteFilter.c)
 *     EthDeleteFilter @ 0x1C00CD984 (EthDeleteFilter.c)
 */

void __fastcall ndisMCleanupMiniportBlockOnStop(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  void *v11; // rcx

  v2 = *(void **)(a1 + 4152);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0);
    *(_QWORD *)(a1 + 4152) = 0LL;
  }
  v3 = *(void **)(a1 + 4328);
  if ( v3 )
  {
    ExFreePoolWithTag(v3, 0);
    *(_QWORD *)(a1 + 4328) = 0LL;
  }
  v4 = *(void **)(a1 + 3192);
  if ( v4 )
  {
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(a1 + 3192) = 0LL;
  }
  if ( *(_DWORD *)(a1 + 464) || !*(_QWORD *)(a1 + 400) )
  {
    if ( !*(_QWORD *)(a1 + 400) )
      goto LABEL_11;
    nullDeleteFilter();
  }
  else
  {
    EthDeleteFilter();
  }
  *(_QWORD *)(a1 + 400) = 0LL;
LABEL_11:
  if ( *(_QWORD *)(a1 + 600) )
  {
    nullDeleteFilter();
    *(_QWORD *)(a1 + 600) = 0LL;
  }
  v5 = *(void **)(a1 + 1776);
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    *(_QWORD *)(a1 + 1776) = 0LL;
  }
  v6 = *(void **)(a1 + 496);
  if ( v6 )
  {
    ExFreePoolWithTag(v6, 0);
    *(_QWORD *)(a1 + 496) = 0LL;
    *(_DWORD *)(a1 + 200) = 0;
  }
  v7 = *(void **)(a1 + 3128);
  if ( v7 )
  {
    ExFreePoolWithTag(v7, 0);
    *(_QWORD *)(a1 + 3128) = 0LL;
    *(_DWORD *)(a1 + 3136) = 0;
  }
  v8 = *(void **)(a1 + 3448);
  if ( v8 )
  {
    ExFreePoolWithTag(v8, 0);
    *(_QWORD *)(a1 + 3448) = 0LL;
    *(_DWORD *)(a1 + 3456) = 0;
  }
  if ( *(_QWORD *)(a1 + 368) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(a1 + 360));
    *(_QWORD *)(a1 + 368) = 0LL;
    *(_WORD *)(a1 + 360) = 0;
  }
  v9 = *(_QWORD *)(a1 + 4136);
  if ( v9 )
  {
    NdisNblTrackerDeregisterComponent(v9);
    *(_QWORD *)(a1 + 4136) = 0LL;
  }
  v10 = *(_QWORD *)(a1 + 3344);
  if ( v10 )
  {
    ndisFreePerProcessorSlot(v10, 5403508);
    *(_QWORD *)(a1 + 3344) = 0LL;
  }
  v11 = *(void **)(a1 + 1984);
  if ( v11 )
  {
    ExFreePoolWithTag(v11, 0);
    *(_QWORD *)(a1 + 1984) = 0LL;
  }
}
