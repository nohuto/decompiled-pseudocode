/*
 * XREFs of ?ndisAoAcStartRefTimeStats@@YAXPEAU_NDIS_MINIPORT_AOAC@@@Z @ 0x1C0069970
 * Callers:
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x1C0069414 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0069E98 (-ndisCsResiliencyChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall ndisAoAcStartRefTimeStats(struct _NDIS_MINIPORT_AOAC *a1)
{
  unsigned __int64 v1; // rdx
  unsigned __int64 *p_CurrentRefStartTime; // rax
  __int64 v3; // r8
  int *ComponentRefCounts; // rcx

  v1 = MEMORY[0xFFFFF78000000008];
  if ( a1->ComponentRefCounts[6] <= 0 )
  {
    p_CurrentRefStartTime = &a1->CsRefTimes[0].CurrentRefStartTime;
    v3 = 15LL;
    ComponentRefCounts = a1->ComponentRefCounts;
    do
    {
      if ( *ComponentRefCounts > 0 )
        *p_CurrentRefStartTime = v1;
      ++ComponentRefCounts;
      p_CurrentRefStartTime += 2;
      --v3;
    }
    while ( v3 );
  }
  else
  {
    a1->CsRefTimes[6].CurrentRefStartTime = MEMORY[0xFFFFF78000000008];
  }
}
