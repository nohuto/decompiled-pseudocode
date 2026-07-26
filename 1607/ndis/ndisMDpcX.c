/*
 * XREFs of ndisMDpcX @ 0x1C00605B8
 * Callers:
 *     ndis5InterruptDpc @ 0x1C0060140 (ndis5InterruptDpc.c)
 *     ndis5QueuedMiniportDpcWorkItem @ 0x1C00601F0 (ndis5QueuedMiniportDpcWorkItem.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ndisTraceDpcEnd @ 0x1C004F7C8 (ndisTraceDpcEnd.c)
 *     ndisTraceDpcStart @ 0x1C004F8A8 (ndisTraceDpcStart.c)
 */

char __fastcall ndisMDpcX(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  __int64 Clock; // rbp
  void (__fastcall *v6)(__int64); // r14
  char v7; // si
  __int64 v8; // r8
  signed __int32 v9; // eax
  unsigned int v10; // ecx
  __int64 v11; // rcx
  PKINTERRUPT *v12; // rcx
  KSYNCHRONIZE_ROUTINE *v13; // rdx
  __int64 v14; // rax

  v3 = *(_QWORD *)(a2 + 104);
  Clock = 0LL;
  v6 = *(void (__fastcall **)(__int64))(a2 + 32);
  if ( HIBYTE(dword_1C008AE58) )
  {
    v7 = 1;
    ndisTraceDpcStart(v3, 1u);
    Clock = WmiGetClock(0LL, 0LL, v8);
  }
  else
  {
    v7 = 0;
  }
  if ( *(_BYTE *)(a2 + 8) )
  {
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v9 == 1 )
      LOBYTE(v9) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
  }
  else
  {
    *(_DWORD *)(v3 + 2696) = 0;
    *(_DWORD *)(v3 + 2704) = 0;
    ++*(_DWORD *)(v3 + 2724);
    v10 = *(_DWORD *)(v3 + 2700);
    if ( *(_DWORD *)(v3 + 2720) < v10 )
      *(_DWORD *)(v3 + 2720) = v10;
    v11 = *(_QWORD *)(v3 + 24);
    *(_DWORD *)(v3 + 2700) = 0;
    v6(v11);
    v9 = _InterlockedExchangeAdd((volatile signed __int32 *)(a2 + 112), 0xFFFFFFFF);
    if ( v9 == 1 )
    {
      LOBYTE(v9) = *(_BYTE *)(a2 + 8);
      if ( (_BYTE)v9 )
        LOBYTE(v9) = KeSetEvent((PRKEVENT)(a2 + 120), 0, 0);
    }
    v12 = *(PKINTERRUPT **)(v3 + 112);
    if ( v12 )
    {
      v13 = *(KSYNCHRONIZE_ROUTINE **)(v3 + 616);
      if ( v13 )
        LOBYTE(v9) = KeSynchronizeExecution(*v12, v13, *(PVOID *)(v3 + 24));
    }
  }
  if ( v7 )
  {
    v14 = WmiGetClock(0LL, 0LL, a3);
    LOBYTE(v9) = ndisTraceDpcEnd(v3, 1u, v14 - Clock);
  }
  return v9;
}
