/*
 * XREFs of NdisMReenumerateFailedAdapter @ 0x1C0062600
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisMDereferenceIfBlock @ 0x1C0017D0C (ndisMDereferenceIfBlock.c)
 *     ndisMReferenceIfBlock @ 0x1C0017DB0 (ndisMReferenceIfBlock.c)
 *     ndisScheduleWorkItemInternal @ 0x1C0019FE8 (ndisScheduleWorkItemInternal.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

void __fastcall NdisMReenumerateFailedAdapter(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  _QWORD *PoolWithTag; // rax

  if ( (unsigned __int8)byte_1C00895D4 >= 2u )
    WPP_SF_q(0x43u, &WPP_b8addd07d65d315e2e327fef5c3f72e1_Traceguids, a1);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 3816) + 864LL) )
  {
    v2 = *(_QWORD *)(a1 + 4144);
    if ( v2 )
    {
      if ( *(_QWORD *)(v2 + 32) && ndisReferenceMiniport(a1, 9u) )
      {
        v3 = ndisMReferenceIfBlock(a1, 0x13u);
        if ( v3 )
        {
          PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x6977444Eu);
          if ( PoolWithTag )
          {
            if ( !*(_WORD *)(v3 + 1460) )
              *(_WORD *)(v3 + 1460) = 71;
            *PoolWithTag = a1;
            PoolWithTag[1] = &ndisQueuedReenumerateFailedAdapter;
            ndisScheduleWorkItemInternal((__int64)PoolWithTag);
            return;
          }
          ndisMDereferenceIfBlock(a1, MPIFREF_FATAL_ERROR);
        }
        ndisDereferenceMiniport(a1);
      }
    }
  }
}
