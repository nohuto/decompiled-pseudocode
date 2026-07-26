/*
 * XREFs of ndisMDpcX @ 0x1C005C578
 * Callers:
 *     ndis5InterruptDpc @ 0x1C005C100 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C005C1B0 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004ADAC (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004AE8C (ndisTraceDpcStart.c)
 */

char __fastcall ndisMDpcX(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 Clock; // rbp
  void (__fastcall *v5)(__int64); // r14
  char v6; // si
  signed __int32 v7; // eax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  PKINTERRUPT *v10; // rcx
  KSYNCHRONIZE_ROUTINE *v11; // rdx
  __int64 v12; // rax

  v2 = *(_QWORD *)(a2 + 104);
  Clock = 0LL;
  v5 = *(void (__fastcall **)(__int64))(a2 + 32);
  if ( HIBYTE(dword_1C0085018) )
  {
    v6 = 1;
    ndisTraceDpcStart(v2, 1u);
    Clock = WmiGetClock(0LL, 0LL);
  }
  else
  {
    v6 = 0;
  }
  if ( *(_BYTE *)(a2 + 8) )
  {
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v7 == 1 )
      LOBYTE(v7) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    *(_DWORD *)(v2 + 2696) = 0;
    *(_DWORD *)(v2 + 2704) = 0;
    ++*(_DWORD *)(v2 + 2724);
    v8 = *(_DWORD *)(v2 + 2700);
    if ( *(_DWORD *)(v2 + 2720) < v8 )
      *(_DWORD *)(v2 + 2720) = v8;
    v9 = *(_QWORD *)(v2 + 24);
    *(_DWORD *)(v2 + 2700) = 0;
    v5(v9);
    v7 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v7 == 1 )
    {
      LOBYTE(v7) = *(_BYTE *)(a2 + 8);
      if ( (_BYTE)v7 )
        LOBYTE(v7) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    }
    v10 = *(PKINTERRUPT **)(v2 + 112);
    if ( v10 )
    {
      v11 = *(KSYNCHRONIZE_ROUTINE **)(v2 + 616);
      if ( v11 )
        LOBYTE(v7) = KeSynchronizeExecution(*v10, v11, *(PVOID *)(v2 + 24));
    }
  }
  if ( v6 )
  {
    v12 = WmiGetClock(0LL, 0LL);
    LOBYTE(v7) = ndisTraceDpcEnd(v2, 1u, v12 - Clock);
  }
  return v7;
}
