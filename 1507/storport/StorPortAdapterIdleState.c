/*
 * XREFs of StorPortAdapterIdleState @ 0x1C002C3A0
 * Callers:
 *     <none>
 * Callees:
 *     RaidIsAdapterControlSupported @ 0x1C00099AC (RaidIsAdapterControlSupported.c)
 *     Template_pqqq @ 0x1C002517C (Template_pqqq.c)
 *     RaidAdapterSendPoFxIdleStateToMiniport @ 0x1C002AA74 (RaidAdapterSendPoFxIdleStateToMiniport.c)
 */

NTSTATUS __fastcall StorPortAdapterIdleState(__int64 a1, unsigned int a2, int a3)
{
  unsigned __int64 v6; // rcx
  __int64 v7; // rax
  NTSTATUS result; // eax
  __int64 v9; // rcx
  __int64 v10; // [rsp+20h] [rbp-28h]
  __int64 v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]

  if ( StorEtwLoggingEnabled && ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    Template_pqqq(a1, &EventAdapterIdleStateStart, 0LL, **(_QWORD **)(a1 + 5088), *(_DWORD *)(a1 + 56), a2, a3);
  if ( a3 )
  {
    *(_QWORD *)(a1 + 5360) = MEMORY[0xFFFFF78000000008];
    v7 = *(_QWORD *)(a1 + 5088);
    if ( *(char *)(a1 + 108) >= 0 )
      *(_DWORD *)(v7 + 20) &= ~0x10u;
    else
      *(_DWORD *)(v7 + 20) |= 0x10u;
  }
  else
  {
    ++*(_DWORD *)(a1 + 5396);
    if ( *(_QWORD *)(a1 + 5360) )
    {
      if ( (*(_DWORD *)(*(_QWORD *)(a1 + 5088) + 20LL) & 0x10) != 0 || *(char *)(a1 + 108) < 0 )
      {
        v6 = MEMORY[0xFFFFF78000000008] - *(_QWORD *)(a1 + 5360);
        *(_QWORD *)(a1 + 5368) += v6 / 0x2710;
        if ( v6 / 0x2710 >= 0x2710 )
          ++*(_DWORD *)(a1 + 5404);
      }
      *(_QWORD *)(a1 + 5360) = 0LL;
    }
  }
  if ( (unsigned int)RaidIsAdapterControlSupported(a1, 9) )
    RaidAdapterSendPoFxIdleStateToMiniport(a1);
  result = PoFxCompleteIdleState(**(_QWORD **)(a1 + 5088), a2);
  if ( StorEtwLoggingEnabled )
  {
    if ( ((__int64)WPP_MAIN_CB.Dpc.DpcData & 0x100000) != 0 )
    {
      LODWORD(v12) = a3;
      LODWORD(v11) = a2;
      LODWORD(v10) = *(_DWORD *)(a1 + 56);
      return Template_pqqq(v9, &EventAdapterIdleStateStop, 0LL, **(_QWORD **)(a1 + 5088), v10, v11, v12);
    }
  }
  return result;
}
